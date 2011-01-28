#ifndef _HAVE_OBJECT_H
#define _HAVE_OBJECT_H

#include "gamebase.h"



 // Contains the minimum required for an object.
 // This is mostly an interface.

struct Object : public gc {
	Object* next;  // Doubly-linked list
	Object* prev;  // Implementing raw is faster than using C++ STL list<>
	coord x;
	coord y;
	coord xvel;
	coord yvel;
	object_flags flags;
	Object();
	 // Lower order => move first and draw first (behind others)
	virtual float order ();
	 // Events
	virtual void create ();
	virtual void before_move ();
	virtual void move ();
	virtual void after_move ();
	virtual void draw ();
	virtual void after_draw ();
	 // Shape
	virtual coord l ();
	virtual coord t ();
	virtual coord r ();
	virtual coord b ();
	virtual geometry geom ();
	 // Absolute sides
	coord L ();  // x - l
	coord T ();  // y - t
	coord R ();  // x + r
	coord B ();  // y + b
	 // Drawing
	virtual coord surface_x ();
	virtual coord surface_y ();
	virtual SDL_Surface* surface ();
	virtual uint32 color ();

	 // Add/remove
	void insert ();
	
	void remove ();

	 // Collisions
	bool collision (Object* other);
	bool collision_rect (coord rl, coord rt, coord rr, coord rb);
	side detect_side (Object* other);
	side out_of_bounds ();
	side offscreen ();
}; 



 // First class Types!  Implemented by template func returning bool
typedef bool (& object_type) (Object*);
template <class T>
inline bool ot (Object* x);



#endif
