
#include "objects/Surfaced.c++"

SDL_Surface* block_surface = NULL;

struct Block : public Surfaced< Object > {
	Block () { surface = block_surface; }
	VM(coord r, 32*P)
	VM(coord b, 32*P)
};

