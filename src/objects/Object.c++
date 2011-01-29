#ifndef _HAVE_OBJECT_CPP
#define _HAVE_OBJECT_CPP

#include "objects/Object.h"


inline Object::Object() : next(NULL), prev(NULL) { }

inline float Object::order () {return 0;}

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
inline coord Object::l () {return 0;}
inline coord Object::t () {return 0;}
inline coord Object::r () {return 0;}
inline coord Object::b () {return 0;}
inline geometry Object::geom () {return GEOM_RECT;}

inline coord Object::L () {return x-l();}
inline coord Object::T () {return y-t();}
inline coord Object::R () {return x+r();}
inline coord Object::B () {return y+b();}
 // Physics
inline double Object::mass () {return 1.0;}

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
					return ((other->T() - self->y)
					      * (other->T() - self->y)
					      + (other->L() - self->x)
					      * (other->L() - self->x)
					         < self->r() * self->r()
					);
				if (self->x <= other->R())  // Top middle
					return self->B() > other->T();
				// Upper-right corner
					return ((other->T() - self->y)
					      * (other->T() - self->y)
					      + (self->x - other->R())
					      * (self->x - other->R())
					         < self->r() * self->r()
					);
			}
			if (self->y <= other->B()) // Middle
				return self->L() < other->R() && self->R() > other->L();
			// Bottom
				if (self->x < other->L())  // Bottom-left corner
					return ((self->y - other->B())
					      * (self->y - other->B())
					      + (other->L() - self->x)
					      * (other->L() - self->x)
					         < self->r() * self->r()
					);
				if (self->x <= other->R())  // Bottom middle
					return self->T() < other->B();
				// Bottom-right corner
					return ((self->y - other->B())
					      * (self->y - other->B())
					      + (self->x - other->R())
					      * (self->x - other->R())
					         < self->r() * self->r()
					);
		}
		case (GEOM_CIRCLE|GEOM_CIRCLE<<16): {
			double sqdist = (self->x - other->x)
			              * (self->x - other->x)
				          + (self->y - other->y)
			              * (self->y - other->y);
			return sqdist < (self->r() + other->r())
			              * (self->r() + other->r());
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

side Object::collision_side (Object* other) {
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
	 // Basically we're overoptimizing by avoiding division :)
	double x_yv;
	double y_xv;
	if (yv > 0) {  // Going down
		y_xv = (B() - other->T()) * xv;
		if (xv > 0) {  // Going right
			x_yv = (R() - other->L()) * yv;
			if (x_yv >= y_xv) r |= TOP;
			if (x_yv <= y_xv) r |= LEFT;
		}
		else {  // Going left
			x_yv = (other->R() - L()) * yv;
			if (x_yv >= -y_xv) r |= TOP;
			if (x_yv <= -y_xv) r |= RIGHT;
		}
	}
	else {  // Going up
		y_xv = (other->B() - T()) * xv;
		if (xv > 0) {  // Going right
			x_yv = (R() - other->L()) * yv;
			if (-x_yv >= y_xv) r |= BOTTOM;
			if (-x_yv <= y_xv) r |= LEFT;
		}
		else {  // Going left
			x_yv = (other->R() - L()) * yv;
			if (-x_yv >= -y_xv) r |= BOTTOM;
			if (-x_yv <= -y_xv) r |= RIGHT;
		}
	}
	return r;
}

double Object::collision_time (Object* other, side dir) {
	if (!dir) dir = collision_side(other);
	if (dir&LEFT)
		return 1-((R() - other->L()) / (xvel + other->xvel));
	if (dir&TOP)
		return 1-((B() - other->T()) / (yvel + other->yvel));
	if (dir&RIGHT)
		return 1-((L() - other->R()) / (xvel + other->xvel));
	if (dir&BOTTOM)
		return 1-((T() - other->B()) / (yvel + other->yvel));
	return INF;  // Objects'll never hit.
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
			double xv = xvel - other->xvel;
			double yv = yvel - other->yvel;
			double cmp = xv*other->x + yv*other->y;
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

side Object::kinetic_bounce (Object* other, double elasticity, side dir) {
	if (collision(other)) {
		dir &= collision_side(other);
		if (dir&(TOP|BOTTOM)) {
			double tv = 0;
			if (mass() == INF || other->mass() == 0) {
				tv += yvel;  // General formula doesn't quite work with infinite masses
				if (other->mass() == INF || mass() == 0) goto oinfy;
			}
			else if (other->mass() == INF || mass() == 0) {
				oinfy:
				tv += other->yvel;
			}
			else {  // Total velocity of system
				tv = (yvel * mass() + other->yvel * other->mass())
				   / (mass() + other->mass());
			}
			coord oldyv = yvel;
			coord oldoyv = other->yvel;
			double time = collision_time(other, dir);
			other->yvel = tv - (other->yvel - tv)*elasticity;
			yvel = tv - (yvel - tv)*elasticity;
			y += (yvel - oldyv) * (1-time);
			other->y += (other->yvel - oldoyv) * (1-time);
		}
		if (dir&(LEFT|RIGHT)) {
			double tv = 0;
			if (mass() == INF || other->mass() == 0) {
				tv += xvel;
				if (other->mass() == INF || mass() == 0) goto oinfx;
			}
			else if (other->mass() == INF || mass() == 0) {
				oinfx:
				tv += other->xvel;
			}
			else {
				tv = (xvel * mass() + other->xvel * other->mass())
				   / (mass() + other->mass());
			}
			coord oldxv = xvel;
			coord oldoxv = other->xvel;
			double time = collision_time(other, dir);
			xvel = tv - (xvel - tv)*elasticity;
			other->xvel = tv - (other->xvel - tv)*elasticity;
			x += (xvel - oldxv) * (1-time);
			other->x += (other->xvel - oldoxv) * (1-time);
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
