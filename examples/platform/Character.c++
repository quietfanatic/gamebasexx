
#include "objects/Sprite.c++"




enum CHAR_STATE {
	STANDING,
	FALLING,
};


coord Char_ground_tolerance = 1*P;




struct Character : public Colored< Sprite > {
	VM(coord r, 32*P);
	VM(coord b, 64*P);
	uint32 state;
	Character () : state(STANDING) { color = 0xc00000; }

	virtual void before_move () {
		 // If standing, are we still standing?
		if (state == STANDING) {
			state = FALLING;
			FOR_ALL_OF_TYPE(block, Block) {
				if (block->collision_rect(this->L(), this->B(), this->R(), this->B() + Char_ground_tolerance)) {
					state = STANDING;
					y = block->T() - b();
				}
			}
			FOR_ALL_OF_TYPE(mover, Mover) {
				if (mover->collision_rect(this->L(), this->B(), this->R(), this->B() + Char_ground_tolerance)) {
					state = STANDING;
					y = mover->T() - b();
					yvel = mover->yvel;
				}
			}
		}
		 // move left/right
		coord accel_max = state == STANDING ? 4*P : 2*P;
		if (keypress[SDLK_LEFT]) {  // Move left
			if (keypress[SDLK_RIGHT]) goto no_direction_pressed;
			SUB_MIN(xvel, 0.2*P, -accel_max);
		}
		else if (keypress[SDLK_RIGHT]) {  // Move right
			ADD_MAX(xvel, 0.2*P, accel_max);
		}
		else {
			no_direction_pressed:
			if (state == STANDING) {  // Slow down, if standing
				ADD_MAX(xvel, 0.2*P, 0*P);
				SUB_MIN(xvel, 0.2*P, 0*P);
			}
		}
	
		if (state == STANDING) {
			if (keypress[SDLK_UP]) {  // Jump
				state = FALLING;
				yvel -= 7*P;
			}
		}
		else if (state == FALLING) {
			yvel += keypress[SDLK_UP]
				? 0.12*P : 0.28*P; // Fall slower when pressing up
			SET_MAX(yvel, 8*P);  // maximum falling speed
		}
		else {
			printf("Bad character state!\n");
			exit(1);
		}
	}
	
	virtual void after_move () {
		FOR_COLLISIONS_BY_HIT(other, Block)
			if (contact(other) == TOP)
				state = STANDING;
		camera.follow(this, 96*P);
		FOR_COLLISIONS_BY_HIT(m, Mover)
			if (contact(m) == TOP)
				state = STANDING;
		camera.follow(this, 96*P);
	}

};






