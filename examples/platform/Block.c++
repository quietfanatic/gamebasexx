

class Solid { };  // Things Character interacts with


SDL_Surface* block_surface = load_image("block.png");

struct Block : public Object, Solid {
	VM(coord r, 32)
	VM(coord b, 32)
	VM(SDL_Surface* surface, block_surface)
};

