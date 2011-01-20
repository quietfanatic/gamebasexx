#ifndef _HAVE_GAMEBASE_CPP
#define _HAVE_GAMEBASE_CPP

#include "gamebase.h"
#include "objects/object.c++"
#include "graphics.c++"
#include "room.c++"


#ifdef GAMEBASE_CAREFUL
uint careful_far_warn = 0;
#endif



void game_init() {
	if (game_initted) return;
	game_initted = 1;
	SDL_Init(SDL_INIT_VIDEO);
	 // Keypress array
	uint i;
	for (i=0; i < 400; i++) {
		keypress[i] = 0;
	}
	 // Framerate manager
	SDL_initFramerate(&fpsm);
}


void gamebase_main_loop() {
	SDL_Event event;
	for (;;) {
		list<Object*>::iterator cur;
		 // CREATION PHASE

		 // DRAWING PHASE
		if (current_room->background_color != NO_COLOR) {
			SDL_FillRect(
				game_window,
				NULL,
				current_room->background_color
			);
		}
//#ifdef GAMEBASE_CAREFUL
//		for (cur = last_object; cur; cur = cur->prev) {
//			if (!careful_far_warn)
//			if (cur->x < COORD_MIN + 20 P
//			 || cur->y < COORD_MIN + 20 P
//			 || cur->x > COORD_MAX - 20 P
//			 || cur->y > COORD_MAX - 20 P) {
//				careful_far_warn = 1;
//				printf("Warning: An object is very far from the room and has not been deleted.\n");
//			}
//			if (cur->type->draw)
//				(* cur->type->draw )(cur);
//		}
//#else
		for (cur = objects.begin(); cur != objects.end(); cur++)
			(*cur)->draw();
//#endif
		SDL_Flip(game_window);

		 // TIMING
		SDL_framerateDelay(&fpsm);

		 // INPUT PHASE
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_QUIT: {
					game_quit();
				}
				case SDL_KEYDOWN: {
					if (event.key.keysym.sym < 400) {
#ifdef GAMEBASE_CUMULATIVE_KEYS
						keypress[event.key.keysym.sym] = 255;
#else
						keypress[event.key.keysym.sym] = 1;
#endif
					}
					if (escape_quits && event.key.keysym.sym == SDLK_ESCAPE)
						game_quit();
					if (f11_toggles_fullscreen && event.key.keysym.sym == SDLK_F11) {
						game_fullscreen = !game_fullscreen;
						set_video();
					}
					break;
				}
				case SDL_KEYUP: {
					if (event.key.keysym.sym < 400) {
						keypress[event.key.keysym.sym] = 0;
					}
					break;
				}
				case SDL_MOUSEMOTION: {
					mouse.x = event.motion.x;
					mouse.y = event.motion.y;
					mouse.xvel = event.motion.xrel;
					mouse.yvel = event.motion.yrel;
				}
			}
		}
#ifdef GAMEBASE_CUMULATIVE_KEYS
		 // Count how many frames (up to 254) each key has been held
		uint i;
		for (i=0; i < 400; i++) {
			if (keypress[i] == 255)
				keypress[i] = 1;
			else if (keypress[i] != 0 && keypress[i] != 254)
				keypress[i]++;
		}
#endif

//#ifdef GAMEBASE_CAREFUL
//		 // verification
//		if (first_object->prev != NULL) goto corrupted;
//		if (first_object->next == NULL) {
//			if (first_object == last_object) goto fine; else goto corrupted;
//		}
//		for (cur = first_object->next; cur->next; cur = cur->next) {
//			if (cur->prev->next != cur || cur->next->prev != cur) goto corrupted;
//		}
//		if (cur->prev->next != cur) goto corrupted;
//		if (last_object != cur) goto corrupted;
//		goto fine;
//		corrupted: printf("Warning: object list corruption!\n");
//		fine:
//#endif

		 // BEFORE_MOVE, MOVE, AFTER_MOVE PHASES
		for (cur = objects.begin(); cur != objects.end(); cur++)
			(*cur)->before_move();

		for (cur = objects.begin(); cur != objects.end(); cur++)
			(*cur)->move();

		for (cur = objects.begin(); cur != objects.end(); cur++)
			(*cur)->after_move();


		 // REMOVAL PHASE
		for (cur = objects.begin(); cur != objects.end(); cur++) {
			//objects.erase(cur);
		}
		
		garbage_collect();

	}
}




void game_quit() {
	SDL_Quit();
	exit(0);
}

void set_video() {
	SDL_setFramerate(&fpsm, current_room->fps);
	game_window = SDL_SetVideoMode(
		camera.w != 0 ? camera.w : current_room->w,
		camera.h != 0 ? camera.h : current_room->h,
		32,
		window_flags|(game_fullscreen ? SDL_FULLSCREEN : 0)
	);
}

// Objects

void register_object(Object* o) {
	if (objects.empty()) {
		objects.push_front(o);
		return;
	}
	Object_i cur = objects.begin();
	if (o->order() <= (*cur)->order()) {
		objects.push_front(o);
		return;
	}
	for (cur++; cur != objects.end(); cur++) {
		if (o->order() <= (*cur)->order()) {
			objects.insert(cur, o);
			return;
		}
	}
	objects.push_back(o);
}





// Memory management


void garbage_collect() {
}


#endif
