
#include "objects/Surfaced.c++"

SDL_Surface* block_surface = load_image("block.png");

struct Block : public Surfaced< Object > {
	VM(coord r, 32*P)
	VM(coord b, 32*P)
	VM(SDL_Surface* surface, block_surface)
};

