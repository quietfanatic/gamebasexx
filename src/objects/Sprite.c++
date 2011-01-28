#ifndef _HAVE_SPRITE_CPP
#define _HAVE_SPRITE_CPP

#include "objects/Sprite.h"

inline void Sprite::move () {
	x += xvel;
	y += yvel;
}

inline side Sprite::collision_direction (Object* other) {
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

side Sprite::contact (Object* other, side dir) {
	if (collision(other)) {
		dir &= collision_direction(other);
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

side Sprite::bounce (Object* other, side dir) {
	if (collision(other)) {
		dir &= collision_direction(other);
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

side Sprite::kinetic_bounce (Sprite* other, side dir) {
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

template <class Type>
inline Type** Sprite::get_collisions (bool order_by_hit) {
	return (Type**) get_collisions_obj(ot<Type>, order_by_hit);
}

Object** Sprite::get_collisions_obj (object_type T, bool order_by_hit) {
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
			if (Sprite* m = dynamic_cast<Sprite*>(other)) {
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



#endif
