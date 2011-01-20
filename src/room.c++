#ifndef _HAVE_ROOM_CPP
#define _HAVE_ROOM_CPP


//struct Camera {
//	coord x;
//	coord y;
//	coord w;  // If this is 0 it will be treated as the room width
//	coord h;
//};

struct Room {
	coord x;           // Coordinate offset.  Not necessary at all.
	coord y;
	coord w;           // Width of game area; not necessarily window
	coord h;           // Height of same
	Camera camera_start;
	float fps;         // Framerate of game
	color background_color;  // Draw background unless NO_COLOR.
	uint ncontents;    // Number of starting objects
	Object** contents; // Starting object

	void start () {
		game_init();
		 // Set current room
		current_room = this;
		 // Copy camera start
		camera = camera_start;
		 // Create game boundary
	//	game_boundary = Boundary;
	//		0, 0, w, h
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
Room game = {
 // x  y  w    h    camera      background nobjects objects
	0, 0, 640, 480, { 0, 0, 0, 0 }, 0x000000, 0, NULL
};

void game_play() {
	game.start();
}
#endif


void room_exit() {
	if (current_room)
		longjmp(room_exit_jmp, 1);
}










#endif
