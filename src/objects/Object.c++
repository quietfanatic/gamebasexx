#ifndef _HAVE_OBJECT_CPP
#define _HAVE_OBJECT_CPP

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
	coord L () {return x-l();}
	virtual coord t () {return 0;}
	coord T () {return y-t();}
	virtual coord r () {return 0;}
	coord R () {return x+r();}
	virtual coord b () {return 0;}
	coord B () {return y+b();}
	virtual geometry geom () {return GEOM_RECT;}

	 // Add/remove
	void insert () {
		register_object(this);
	}
	
	void remove () {
		remove_object(this);
	}

	 // Collisions
	bool collision (Object* other) {
		Object* self = this;
		if (self == other) return 0;
		switch ((uint)self->geom() | ((uint)other->geom())<<16) {
			case (GEOM_RECT|GEOM_RECT<<16):
				return self->L() < other->R()
				    && self->T() < other->B()
				    && self->R() > other->L()
				    && self->B() > other->T();
			case (GEOM_BOUNDARY|GEOM_CIRCLE<<16):
			case (GEOM_BOUNDARY|GEOM_RECT<<16):
				SWAP(self, other);  // fall through
			case (GEOM_CIRCLE|GEOM_BOUNDARY<<16):
			case (GEOM_RECT|GEOM_BOUNDARY<<16):
				return self->L() < other->R()
				    || self->T() < other->B()
				    || self->R() > other->L()
				    || self->B() > other->T();
			case (GEOM_BOUNDARY|GEOM_BOUNDARY<<16):
				return 1;
			case (GEOM_RECT|GEOM_CIRCLE<<16):
				SWAP(self, other);
			case (GEOM_CIRCLE|GEOM_RECT<<16): {
				if (self->y < other->T()) {  // Top
					if (self->x < other->L())  // Upper-left corner
						return (       (other->T() - self->y)
						 *(long_coord) (other->T() - self->y)
						             + (other->L() - self->x)
						 *(long_coord) (other->L() - self->x)
						 < self->r() *(long_coord) self->r()
						);
					if (self->x <= other->R())  // Top middle
						return self->B() > other->T();
					// Upper-right corner
						return (       (other->T() - self->y)
						 *(long_coord) (other->T() - self->y)
						             + (self->x - other->R())
						 *(long_coord) (self->x - other->R())
						 < self->r() *(long_coord) self->r()
						);
				}
				if (self->y <= other->B()) // Middle
					return self->L() < other->R() && self->R() > other->L();
				// Bottom
					if (self->x < other->L())  // Bottom-left corner
						return (       (self->y - other->B())
						 *(long_coord) (self->y - other->B())
						             + (other->L() - self->x)
						 *(long_coord) (other->L() - self->x)
						 < self->r() *(long_coord) self->r()
						);
					if (self->x <= other->R())  // Bottom middle
						return self->T() < other->B();
					// Bottom-right corner
						return (       (self->y - other->B())
						 *(long_coord) (self->y - other->B())
						             + (self->x - other->R())
						 *(long_coord) (self->x - other->R())
						 < self->r() *(long_coord) self->r()
						);
			}
			case (GEOM_CIRCLE|GEOM_CIRCLE<<16): {
				long_coord sqdist = (self->x - other->x)
				      *(long_coord) (self->x - other->x)
					              + (self->y - other->y)
				      *(long_coord) (self->y - other->y);
				return sqdist < ( (self->r() + other->r())
				    *(long_coord) (self->r() + other->r())
				);
			}
		}
	}
	side detect_side (Object* other);
}; 















#endif
