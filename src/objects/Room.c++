#ifndef _HAVE_ROOM_CPP
#define _HAVE_ROOM_CPP

#include "objects/Room.h"
#include "objects/Colored.c++"
#include "objects/Resizable.c++"
#include "objects/Inverted.c++"


inline void Camera::constrain (Room* bound) {
	SET_MIN(x, bound->x);  // left
	SET_MAX(x, bound->x + bound->w - w);  // right
	SET_MIN(y, bound->y);  // top
	SET_MAX(y, bound->y + bound->h - h);  // bottom
}
inline void Camera::constrain_to_room () { constrain(current_room); }
inline void Camera::follow (Object* o, coord border, bool constrain) {
	SET_MAX(x, o->x - border);  // left
	SET_MIN(x, o->x + border - w);  // right
	SET_MAX(y, o->y - border);  // top
	SET_MIN(y, o->y + border - h);  // bottom
	if (constrain) constrain_to_room();
}
inline void Camera::center (Object* o, bool constrain) {
	x = o->x - w/2;
	y = o->y - h/2;
	if (constrain) constrain_to_room();
}


inline void Room::init () { }  // Create starting objects;
Room::Room () : fps(30) { color = 0x000000; w = 640; h = 480; }

void Room::start () {
	game_init();
	 // Set current room
	current_room = this;
	 // Copy camera start
	camera = camera_start;
	if (camera.w == 0) camera.w = w;
	if (camera.h == 0) camera.h = h;
	 // Create this room's starting objects
	init();
	 // Create (or reset) window
	set_video();
	if (setjmp(room_exit_jmp)) goto finish_exiting_room;
	 // Start main loop
	gamebase_main_loop();

	finish_exiting_room:
	 // Destroy all objects.
	Object* cur;
	Object* nextcur;
	for (cur = last_object; cur; cur = nextcur) {
		nextcur = cur->prev;
		cur->next = NULL;
		cur->prev = NULL;
		if (cur->flags & OBJ_PERSISTENT)
			register_object(cur);  // Put in queue for next room
	}
	garbage_collect();
}



#ifndef GAMEBASE_NO_DEFAULT_ROOM
inline void game_play() {
	game.start();
}
#endif


inline void room_exit() {
	if (current_room)
		longjmp(room_exit_jmp, 1);
}










#endif
