
#include "objects/Surfaced.c++"
#include "objects/Colored.c++"

SDL_Surface* brick_surface = NULL;

struct Brick : public Object {
	virtual coord r () { return 32; }
	virtual coord b () { return 12; }
	virtual SDL_Surface* surface () { return brick_surface; }
	uint32 _color;
	virtual uint32 color () { return _color; }
	Brick () { _color = rand() & 0xffffff; }
};






