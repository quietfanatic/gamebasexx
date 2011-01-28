#include <math.h>


struct Mover : public Object, Solid {
	VM(coord r, 64)
	VM(coord b, 32)
	VM(uint32 color, 0x000000)
	virtual void before_move () {
		this->yvel = sin(SDL_GetTicks()/1000.0);
	}
};








