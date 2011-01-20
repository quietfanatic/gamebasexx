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
		return false;
	}
	side detect_side (Object* other) {
		Object* self = this;
		side s = NOSIDE;
		if (other->geom() == GEOM_RECT) {
			coord t = self->B() - other->T();
			coord l = self->R() - other->L();
			coord r = self->L() - other->R();
			coord b = self->T() - other->B();
			if (t <= l && t <= r) s |= TOP;
			if (b <= l && b <= r) s |= BOTTOM;
			if (l <= t && l <= b) s |= LEFT;
			if (r <= t && r <= b) s |= RIGHT;
			return s;
		}
		else if (other->geom() == GEOM_BOUNDARY) {
			if (self->T() < other->B()) s |= BOTTOM;
			if (self->L() < other->R()) s |= RIGHT;
			if (self->B() > other->T()) s |= TOP;
			if (self->R() > other->L()) s |= LEFT;
			return s;
		}
		#ifdef GAMEBASE_CAREFUL
		printf("Warning: detect_side called with unknown/unimplemented geometry.\n");
		#endif
		return NOSIDE;
	}
	side out_of_bounds ();
	
	side offscreen (void* _self) {
		side s = 0;
		if      (B() < camera.y)            s |= TOP;
		else if (T() > camera.y + camera.h) s |= BOTTOM;
		if      (R() < camera.x)            s |= LEFT;
		else if (L() > camera.x + camera.w) s |= RIGHT;
		return s;
	}
}; 

 // Dumb cyclical dependency
#include "room.c++"

inline side Object::out_of_bounds () {
	side s = 0;
	if      (B() < 0)               s |= TOP;
	else if (T() > current_room->h) s |= BOTTOM;
	if      (R() < 0)               s |= LEFT;
	else if (L() > current_room->w) s |= RIGHT;
	return s;
}












#endif
