#define GAMEBASE_USE_FP
#define GAMEBASE_NO_DEFAULT_ROOM
#define GAMEBASE_USE_HW

#include "gamebase.c++"
#include "Block.c++"
#include "Mover.c++"
#include "Character.c++"
#include "rooms.c++"


int main() {
	block_surface = load_image("block.png");
	(new room1)->start();
	return 0;
}
