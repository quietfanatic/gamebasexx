#ifndef _HAVE_ROOM_H
#define _HAVE_ROOM_H

#include "objects/Object.h"
#include "objects/Colored.h"
#include "objects/Resizable.h"
#include "objects/Inverted.h"

struct Room;
struct Camera : public Inverted< Resizable<Object> > {
	void constrain (Room* bound);
	void constrain_to_room ();
	void follow (Object* o, coord border, bool constrain = true);
	void center (Object* o, bool constrain = true);
};

struct Room : public Colored< Inverted< Resizable<Object> > > {
	Camera camera_start;
	float fps;         // Framerate of game
	virtual void init ();  // Create starting objects
	virtual uint32 color ();  // Override Colored<>'s color
	virtual void draw ();  // And the draw() because of Inverted<> :|
	Room ();
	void start ();
};


#ifndef GAMEBASE_NO_DEFAULT_ROOM
Room game;

void game_play();
#endif


void room_exit();










#endif
