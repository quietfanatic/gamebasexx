




enum CHAR_STATE {
	STANDING,
	FALLING,
};


coord Char_ground_tolerance = 1;




struct Character : public Object {
	VM(coord r, 32);
	VM(coord b, 64);
	VM(uint32 color, 0xc00000);
	CHAR_STATE state;
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
						yvel = other->yvel;
					}
				}
			}
		}
		 // move left/right
		coord accel_max = state == STANDING ? 4 : 2;
		if (keypress[SDLK_LEFT]) {  // Move left
			if (keypress[SDLK_RIGHT]) goto no_direction_pressed;
			SUB_MIN(xvel, 0.2, -accel_max);
		}
		else if (keypress[SDLK_RIGHT]) {  // Move right
			ADD_MAX(xvel, 0.2, accel_max);
		}
		else {
			no_direction_pressed:
			if (state == STANDING) {  // Slow down, if standing
				ADD_MAX(xvel, 0.2, 0);
				SUB_MIN(xvel, 0.2, 0);
			}
		}
	
		if (state == STANDING) {
			if (keypress[SDLK_UP]) {  // Jump
				state = FALLING;
				yvel -= 7;
			}
		}
		else if (state == FALLING) {
			yvel += keypress[SDLK_UP]
				? 0.12 : 0.28; // Fall slower when pressing up
			SET_MAX(yvel, 8);  // maximum falling speed
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
		camera.follow(this, 96);
	}

};






