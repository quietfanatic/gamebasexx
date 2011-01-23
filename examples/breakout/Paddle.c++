#include "objects/Sprite.c++"
#include "objects/Colored.c++"

struct Paddle : Colored<Sprite> {
	Paddle () { x = 140*P; y = 232*P; color = 0xffffff; }
	virtual coord l () { return 20*P; }
	virtual coord t () { return 2*P; }
	virtual coord r () { return 20*P; }
	virtual coord b () { return 2*P; }

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



