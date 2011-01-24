
#include "objects/Sprite.c++"




enum CHAR_STATE {
	STANDING,
	FALLING,
};


coord Char_ground_tolerance = 1*P;




struct Character : public Sprite {
	VM(coord r, 32*P);
	VM(coord b, 64*P);
	VM(uint32 color, 0xc00000);
	uint32 state;
	Character () : state(STANDING) { }

	virtual void before_move () {
		 // If standing, are we still standing?
		if (state == STANDING) {
			state = FALLING;
			FOR_ALL_OBJECTS(other) {
				if (dynamic_cast<Solid*>(other)) {
					if (other->collision_rect(this->L(), this->B(), this->R(), this->B() + Char_ground_tolerance)) {
						state = STANDING;
						y = other->T() - b();
						if (Sprite* s = dynamic_cast<Sprite*>(other))
							yvel = s->yvel;
					}
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
		 // More efficient to check class first but
		 // Solid is not guaranteed to be an Object....
		FOR_COLLISIONS_BY_HIT(other, Object)
			if (dynamic_cast<Solid*>(other))
				if (contact(other) == TOP)
					state = STANDING;
		camera.follow(this, 96*P);
	}

};






