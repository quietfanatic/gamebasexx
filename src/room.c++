#ifndef _HAVE_ROOM_CPP
#define _HAVE_ROOM_CPP

#include "objects/Colored.c++"
#include "objects/Resizable.c++"

//struct Camera {
//	coord x;
//	coord y;
//	coord w;  // If this is 0 it will be treated as the room width
//	coord h;
//};

struct Room : public Colored< Resizable<Object> > {
	Camera camera_start;
	float fps;         // Framerate of game
	uint ncontents;    // Number of starting objects
	Object** contents; // Starting object
	
	Room () : camera_start((Camera){0, 0, 0, 0}), fps(30), ncontents(0), contents(NULL)
		{ color = 0x000000; w = 640; h = 480; }
	virtual geometry geom () { return GEOM_BOUNDARY; }

	void start () {
		game_init();
		 // Set current room
		current_room = this;
		 // Copy camera start
		camera = camera_start;
		 // Create this room's starting objects
		// UNIMPL
		 // Create (or reset) window
		set_video();
		if (setjmp(room_exit_jmp)) goto finish_exiting_room;
		 // Start main loop
		gamebase_main_loop();

		finish_exiting_room:
		 // Destroy all objects.
		objects.clear();
		garbage_collect();
	}
};


#ifndef GAMEBASE_NO_DEFAULT_ROOM
Room game;

void game_play() {
	game.start();
}
#endif


void room_exit() {
	if (current_room)
		longjmp(room_exit_jmp, 1);
}










#endif
