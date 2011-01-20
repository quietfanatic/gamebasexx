#ifndef _HAVE_ROOM_CPP
#define _HAVE_ROOM_CPP

#include "objects/Colored.c++"
#include "objects/Resizable.c++"

struct Room : public Colored< Resizable<Object> > {
	Camera camera_start;
	float fps;         // Framerate of game
	uint ncontents;    // Number of starting objects
	Object** contents; // Starting object
	
	Room ();
	virtual geometry geom ();

	void start ();
};






#endif
