#include "objects/Sprite.c++"

struct Paddle : Sprite {
	Paddle () { x = 140*P; y = 232*P; }
	virtual coord l () { return 20*P; }
	virtual coord t () { return 2*P; }
	virtual coord r () { return 20*P; }
	virtual coord b () { return 2*P; }
	virtual uint32 color () { return 0xffffff; }

	virtual void before_move () {
		if (keypress[SDLK_RIGHT]) {
			if (!keypress[SDLK_LEFT]) {
				xvel =
				  xvel <= 0*P ? 1*P
				: xvel <= 1*P ? 2*P
				:               4*P;
			}
			else xvel = 0*P;
		}
		else if (keypress[SDLK_LEFT]) {
			xvel =
			  xvel >=  0*P ? -1*P
			: xvel >= -1*P ? -2*P
			:                -4*P;
		}
		else xvel = 0*P;
	}
	
	virtual void after_move () {
		contact(&game);  // Stop at edges of screen
	}
};



