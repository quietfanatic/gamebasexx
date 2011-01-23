#include <math.h>
#include "objects/Sprite.c++"


struct Mover : Colored< Sprite > {
	VM(coord r, 64*P)
	VM(coord b, 32*P)
	Mover () { color = 0x000000; }
	virtual void before_move () {
		this->yvel = sin(SDL_GetTicks()/1000.0)*P;
	}
};








