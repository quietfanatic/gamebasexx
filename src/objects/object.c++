#ifndef HAVE_OBJECT_C
#define HAVE_OBJECT_C

#include "gamebase.h"



 // Contains the minimum required for an object.
 // This is mostly an interface.

class Object {
public:
	coord x;
	coord y;

	 // Lower order => move first and draw first (behind others)
	virtual float order () {return 0;}
	 // Events
	virtual void create () {}
	virtual void before_move () {}
	virtual void move () {}
	virtual void after_move () {}
	virtual void draw () {}
	virtual void after_draw () {}
	 // Shape
	virtual coord l () {return 0;}
	virtual coord t () {return 0;}
	virtual coord r () {return 0;}
	virtual coord b () {return 0;}

	 // Add/remove
	void insert () {
		register_object(this);
	}
	
	void remove () {
		remove_object(this);
	}
}; 















#endif
