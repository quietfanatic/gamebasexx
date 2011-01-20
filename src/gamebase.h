#ifndef _HAVE_GAMEBASE_H
#define _HAVE_GAMEBASE_H

#include <stddef.h>
#include <stdint.h>
#include <math.h>
#include <setjmp.h>
#include <stdio.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_framerate.h>
#include <list>
using namespace std;


typedef unsigned int uint;
typedef uint64_t uint64;
typedef uint32_t uint32;
typedef uint16_t uint16;
typedef uint8_t uint8;
typedef int64_t int64;
typedef int32_t int32;
typedef int16_t int16;
typedef int8_t int8;
typedef uint16 object_flags16;
typedef uint16 geometry16;
typedef uint8 side8;
#define NO_COLOR 0xff000000

#include "coord.c++"

typedef GAMEBASE_COORD_TYPE coord;
typedef GAMEBASE_LONG_COORD_TYPE long_coord;
class Object;
typedef list<Object*>::iterator Object_i;
struct Mouse { coord x; coord y; coord xvel; coord yvel; };
class Room;
struct Camera { coord x; coord y; coord w; coord h; };

#include "util.h"



/////// Enums

enum object_flags {
	OBJ_NEW = 1,         // Run create routine when added.
	OBJ_ACTIVE = 2,      // This object is functioning normally.
	OBJ_DOOMED = 4,      // This object will be destroyed when it is removed.
	OBJ_PERSISTENT = 8,  // Keep around when changing rooms.
	OBJ_IMMORTAL = 16,   // This object's memory will never be automatically freed.
};

enum geometry {
	GEOM_RECT,
	GEOM_BOUNDARY,
	GEOM_CIRCLE,   // unimpl
	GEOM_OVAL,     // unimpl
	GEOM_SURFACE,  // unimpl
	GEOM_MASK,     // unimpl
};

enum side {
	NOSIDE = 0,
	LEFT = 1,
	TOP = 2,
	RIGHT = 4,
	BOTTOM = 8,
	ALLSIDES = 15,
};


/////// Settings

bool game_fullscreen = false;        // Fullscreen if true
bool escape_quits = true;            // Press ESC to quit
bool f11_toggles_fullscreen = true;  // Press f11 to change fullscreen mode


/////// Variables

list<Object*> objects;
list<Object*> queued;
        Room* current_room = NULL;   // Whatever room is currently active
      Object* game_boundary = NULL;  // Room boundary, automatically set on room start.
        uint8 keypress[400];
        Mouse mouse;                 // Position and button presses
       Camera camera;                // Camera for the current room


/////// Internal

     jmp_buf room_exit_jmp;
SDL_Surface* game_window = NULL;    // Window surface
        bool game_initted = false;  // Will be set when appropriate
  FPSmanager fpsm;

#ifdef GAMEBASE_USE_HW
uint32 window_flags = SDL_HWSURFACE|SDL_HWACCEL|SDL_DOUBLEBUF;
uint32 surface_flags = SDL_HWSURFACE|SDL_HWACCEL|SDL_SRCALPHA;
#else
uint32 window_flags = SDL_SWSURFACE;
uint32 surface_flags = SDL_SWSURFACE;
#endif


/////// Functions

void game_init();
void gamebase_main_loop();
void game_quit();
void set_video();
void set_free();
void garbage_collect();

void register_object(Object* o);
void remove_object(Object* o);


 // graphics.c

 SDL_Surface* load_image   (char* filename);
SDL_Surface** split_strip  (SDL_Surface* image, uint width, uint height);
         void draw_color   (uint32 c, coord l, coord t, coord r, coord b);
         void draw_surface (SDL_Surface* surface, coord x, coord y);











#endif
