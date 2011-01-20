
#include "objects/Surfaced.c++"
#include "objects/Colored.c++"

SDL_Surface* brick_surface = NULL;

struct Brick : public Surfaced< Colored< Object > > {
	virtual coord r () { return 32; }
	virtual coord b () { return 12; }
	Brick () { color = rand() & 0x00ffffff; surface = brick_surface; }
};






