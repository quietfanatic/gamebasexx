#ifndef _HAVE_GAMEBASE_CPP
#define _HAVE_GAMEBASE_CPP

#include "gamebase.h"
#include "objects/Object.c++"
#include "objects/Room.c++"
#include "graphics.c++"


#ifdef GAMEBASE_CAREFUL
uint careful_far_warn = 0;
#endif



void game_init() {
	if (game_initted) return;
	game_initted = 1;
	if (SDL_Init(SDL_INIT_VIDEO) == -1) {
		printf("Init error: %s\n", SDL_GetError());
	}

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
		Object* cur;
		Object* nextcur;

		 // CREATION PHASE
		for (cur = first_queued; cur; cur = nextcur) {
			nextcur = cur->next;
			 // remove from queue
			if (cur->next) cur->next->prev = cur->prev;
			 else              last_queued = cur->prev;
			if (cur->prev) cur->prev->next = cur->next;
			 else             first_queued = cur->next;
			 // add to game
			if (first_object == NULL) {
				first_object = last_object = cur;
				cur->next = cur->prev = NULL;
			}
			else {
				for (Object* in = first_object; in; in = in->next) {
					if (cur->order() <= in->order()) {
						cur->next = in;
						cur->prev = in->prev;
						in->prev = cur;
						if (cur->prev)  // Middle object
							cur->prev->next = cur;
						else {  // First object
							first_object = cur;
							cur->prev = NULL;
						}
						goto create;
					}
				}  // Last object
				cur->prev = last_object;
				cur->next = NULL;
				cur->prev->next = cur;
			}
			create:
			cur->flags |= OBJ_ACTIVE;
			if (cur->flags*OBJ_NEW) {
				cur->flags &=~ OBJ_NEW;
				cur->create();
			}
		}

		 // DRAWING PHASE
		current_room->draw();
#ifdef GAMEBASE_CAREFUL
		for (cur = last_object; cur; cur = cur->prev) {
			if (!careful_far_warn)
			if (cur->x < -65000
			 || cur->y < -65000
			 || cur->x > 65000
			 || cur->y > 65000) {
				careful_far_warn = 1;
				printf("Warning: An object is very far from the room and has not been deleted.\n");
			}
			cur->draw();
		}
#else
		for (cur = last_object; cur; cur = cur->prev)
			cur->draw();
#endif
		SDL_Flip(game_window);

		 // GARBAGE COLLECTION
		GC_enable();
		GC_gcollect();
		GC_disable();
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

#ifdef GAMEBASE_CAREFUL
		 // verification
		if (first_object->prev != NULL) goto corrupted;
		if (first_object->next == NULL) {
			if (first_object == last_object) goto fine; else goto corrupted;
		}
		for (cur = first_object->next; cur->next; cur = cur->next) {
			if (cur->prev->next != cur || cur->next->prev != cur) goto corrupted;
		}
		if (cur->prev->next != cur) goto corrupted;
		if (last_object != cur) goto corrupted;
		goto fine;
		corrupted: printf("Warning: object list corruption!\n");
		fine:
#endif

		 // BEFORE_MOVE, MOVE, AFTER_MOVE PHASES
		for (cur = first_object; cur; cur = cur->next)
			cur->before_move();

		for (cur = first_object; cur; cur = cur->next)
			cur->move();

		for (cur = first_object; cur; cur = cur->next)
			cur->after_move();


		 // REMOVAL PHASE
		for (cur = first_object; cur; cur = nextcur) {
			nextcur = cur->next;
			if (cur->flags & OBJ_DOOMED) {
				if (cur->prev) cur->prev->next = cur->next;
				 else             first_object = cur->next;
				if (cur->next) cur->next->prev = cur->prev;
				 else              last_object = cur->prev;
				cur->next = cur->prev = NULL;
			}
		}
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
	if (o->next
	 || o->prev
	 || first_object == o
	 || first_queued == o) {
		return;  // No double-registering.
	}
	if (last_queued == NULL) {
		first_queued = last_queued = o;
	}
	else {  // push to back
		last_queued->next = o;
		o->prev = last_queued;
		last_queued = o;
	}
}




#endif
