#ifndef _HAVE_OBJECT_CPP
#define _HAVE_OBJECT_CPP

#include "objects/Object.h"


inline Object::Object() : next(NULL), prev(NULL) { }

inline float Object::order () {return 0*P;}

 // Events
inline void Object::create () {}
inline void Object::before_move () {}
inline void Object::move () {
	x += xvel;
	y += yvel;
}
inline void Object::after_move () {}
inline void Object::draw () {
	if (color() != NO_COLOR)
		draw_color(color(), this);
	if (surface())
		draw_surface(surface(), this->x + surface_x(), this->y + surface_y());
}
inline void Object::after_draw () {}

 // Shape
inline coord Object::l () {return 0*P;}
inline coord Object::t () {return 0*P;}
inline coord Object::r () {return 0*P;}
inline coord Object::b () {return 0*P;}
inline geometry Object::geom () {return GEOM_RECT;}

inline coord Object::L () {return x-l();}
inline coord Object::T () {return y-t();}
inline coord Object::R () {return x+r();}
inline coord Object::B () {return y+b();}

 // Drawing
inline coord Object::surface_x () {return -l();}
inline coord Object::surface_y () {return -t();}
inline SDL_Surface* Object::surface () {return NULL;}
inline uint32 Object::color () {return NO_COLOR;}

 // Add/remove
inline void Object::insert () {
	register_object(this);
}

inline void Object::remove () {
	flags |= OBJ_DOOMED;
}

 // Collision detection
bool Object::collision (Object* other) {
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

inline bool Object::collision_rect (coord rl, coord rt, coord rr, coord rb) {
	Resizable<Object> r;
	r.x = rl;
	r.y = rt;
	r.w = rr-rl;
	r.h = rb-rt;
	return collision(&r);
}

side Object::detect_side (Object* other) {
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

inline side Object::collision_side (Object* other) {
	if (other->geom() == GEOM_BOUNDARY) {
		return detect_side(other);
	}
	side r = 0;
	coord xv = xvel - other->xvel;
	coord yv = yvel - other->yvel;
	
	if (xv == 0) {
		return
		  yv > 0 ? TOP 
		: yv < 0 ? BOTTOM
		: NOSIDE;
	}
	if (yv == 0) {
		return
		  xv > 0 ? LEFT
		: xv < 0 ? RIGHT
		: NOSIDE;
	}
	 // We compare the ratio of xvel to yvel with x diff to y diff
	 // if xv/yv >= x/y then xv*y >= x*yv
	 // Comparisons are tricky because xv and yv can be negative.
	long_coord x_yv;
	long_coord y_xv;
	if (yv > 0) {  // Going down
		y_xv = (B() - other->T()) *(long_coord) xv;
		if (xvel > 0) {  // Going right
			x_yv = (R() - other->L()) *(long_coord) yv;
			if (x_yv >= y_xv) r |= TOP;
			if (x_yv <= y_xv) r |= LEFT;
		}
		else {  // Going left
			x_yv = (other->R() - L()) *(long_coord) yv;
			if (x_yv >= -y_xv) r |= TOP;
			if (x_yv <= -y_xv) r |= RIGHT;
		}
	}
	else {  // Going up
		y_xv = (other->B() - T()) *(long_coord) xv;
		if (xvel > 0) {  // Going right
			x_yv = (R() - other->L()) *(long_coord) yv;
			if (-x_yv >= y_xv) r |= BOTTOM;
			if (-x_yv <= y_xv) r |= LEFT;
		}
		else {  // Going left
			x_yv = (other->R() - L()) *(long_coord) yv;
			if (-x_yv >= -y_xv) r |= BOTTOM;
			if (-x_yv <= -y_xv) r |= RIGHT;
		}
	}
	return r;
}

template <class Type>
inline Type** Object::get_collisions (bool order_by_hit) {
	return (Type**) get_collisions_obj(ot<Type>, order_by_hit);
}

Object** Object::get_collisions_obj (object_type T, bool order_by_hit) {
	uint maxcolls = 8;
	uint ncolls = 0;
	Object** colls = (Object**) GC_malloc(sizeof(Object*) * maxcolls);
	FOR_ALL_OBJECTS(other) if (T(other)) {
		if (!collision(other)) continue;
		ncolls++;
		if (ncolls == maxcolls)  // Expand collision list
			colls = (Object**) realloc(colls, sizeof(Object*) * (maxcolls *= 2));
		if (!order_by_hit) {
			colls[ncolls-1] = other;	
		}
		else {
			 // Order by earliest hit, considering self's speed.
			 // If xvel=1 and yvel=1 then the smallest x+y is first
			 // If xvel=2 and yvel=1 then the smallest 2x+y is first
			 // If xvel=-1 and yvel=1 then the smallest -x+y is first
			 // If xvel=1 and yvel=-1 then the smallest x-y is first
			 // If xvel=-1 and yvel=-1 then the smallest -x-y is first
			 // Smallest xvel*x + yvel*y
			long_coord xv = xvel;
			long_coord yv = yvel;
			if (Object* m = dynamic_cast<Object*>(other)) {
				xv -= m->xvel;
				yv -= m->yvel;
			}
			long_coord cmp = xv*other->x + yv*other->y;
			 // Add to list, in order.
			for (uint i = 0; i < ncolls; i++) {
				if (colls[i] == NULL) { colls[i] = other; break; } // last
				if (cmp < xv*colls[i]->x + yv*colls[i]->y) {
					memmove(colls+i+1, colls+i, (ncolls-i-1)*sizeof(Object*));
					colls[i] = other; break;
				}
			}
		}
	}
	return colls;
}

 // Collision reactions
side Object::contact (Object* other, side dir) {
	if (collision(other)) {
		dir &= collision_side(other);
		if (dir&TOP) {
			y = other->T() - b();
			SET_MAX(yvel, other->yvel);
		}
		else if (dir&BOTTOM) {
			y = other->B() + t();
			SET_MIN(yvel, other->yvel);
		}
		if (dir&LEFT) {
			x = other->L() - r();
			SET_MAX(xvel, other->xvel);
		}
		else if (dir&RIGHT) {
			x = other->R() + l();
			SET_MIN(xvel, other->xvel);
		}
		return dir;
	}
	return 0;
}

side Object::bounce (Object* other, side dir) {
	if (collision(other)) {
		dir &= collision_side(other);
		if (dir&TOP) {
			y = 2*(other->T() - b()) - y;
			yvel = -yvel;
		}
		else if (dir&BOTTOM) {
			y = 2*(other->B() + t()) - y;
			yvel = -yvel;
		}
		if (dir&LEFT) {
			x = 2*(other->L() - r()) - x;
			xvel = -xvel;
		}
		else if (dir&RIGHT) {
			x = 2*(other->R() + l()) - x;
			xvel = -xvel;
		}
		return dir;
	}
	return 0;
}

side Object::kinetic_bounce (Object* other, side dir) {
	if (collision(other)) {
		if      (dir&(TOP|BOTTOM)) {
			SWAP(yvel, other->yvel);
		}
		else if (dir&(LEFT|RIGHT)) {
			SWAP(xvel, other->xvel);
		}
		return dir;
	}
	return 0;
}



 // Misc state
side Object::offscreen () {
	side s = 0;
	if      (B() < camera.y)            s |= TOP;
	else if (T() > camera.y + camera.h) s |= BOTTOM;
	if      (R() < camera.x)            s |= LEFT;
	else if (L() > camera.x + camera.w) s |= RIGHT;
	return s;
}

side Object::out_of_room () {
	side s = 0;
	if      (B() < 0)               s |= TOP;
	else if (T() > current_room->h) s |= BOTTOM;
	if      (R() < 0)               s |= LEFT;
	else if (L() > current_room->w) s |= RIGHT;
	return s;
}


// First-class type
template <class T>
inline bool ot (Object* x) { return (dynamic_cast<T*>(x) != NULL); }







#endif
