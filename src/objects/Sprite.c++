#ifndef _HAVE_SPRITE_CPP
#define _HAVE_SPRITE_CPP

#include "objects/Sprite.h"

Sprite::Sprite () : xvel(0*P), yvel(0*P) { }
inline void Sprite::move () {
	this->x += xvel;
	this->y += yvel;
}

inline side Sprite::collision_direction (Object* other) {
	if (other->geom() == GEOM_BOUNDARY) {
		return this->detect_side(other);
	}
	side r = 0;
	coord xv = xvel;
	coord yv = yvel;
	Sprite* m = dynamic_cast<Sprite*>(other);
	if (m != NULL) {
		xv -= m->xvel;
		yv -= m->yvel;
	}
	
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
		y_xv = (this->B() - other->T()) *(long_coord) xv;
		if (xvel > 0) {  // Going right
			x_yv = (this->R() - other->L()) *(long_coord) yv;
			if (x_yv >= y_xv) r |= TOP;
			if (x_yv <= y_xv) r |= LEFT;
		}
		else {  // Going left
			x_yv = (other->R() - this->L()) *(long_coord) yv;
			if (x_yv >= -y_xv) r |= TOP;
			if (x_yv <= -y_xv) r |= RIGHT;
		}
	}
	else {  // Going up
		y_xv = (other->B() - this->T()) *(long_coord) xv;
		if (xvel > 0) {  // Going right
			x_yv = (this->R() - other->L()) *(long_coord) yv;
			if (-x_yv >= y_xv) r |= BOTTOM;
			if (-x_yv <= y_xv) r |= LEFT;
		}
		else {  // Going left
			x_yv = (other->R() - this->L()) *(long_coord) yv;
			if (-x_yv >= -y_xv) r |= BOTTOM;
			if (-x_yv <= -y_xv) r |= RIGHT;
		}
	}
	return r;
}

inline side Sprite::collide (Object* other, collide_flags flags) {
	if (this->collision(other)) {
		coord oxv, oyv;
		Sprite* m = dynamic_cast<Sprite*>(other);
		if (m != NULL) {
			oxv = m->xvel;
			oyv = m->yvel;
		}
		else
			oxv = oyv = 0;
		if (!(flags&COLL_ONLYON)) flags |= ALLSIDES;
		side dir = collision_direction(other);
		dir &= (flags&ALLSIDES);
		if (flags&COLL_CONTACT) {  // Contact
			if      (dir&TOP)    this->y = other->T() - this->b();
			else if (dir&BOTTOM) this->y = other->B() + this->t();
			if      (dir&LEFT)   this->x = other->L() - this->r();
			else if (dir&RIGHT)  this->x = other->R() + this->l();
		}
		if (flags&COLL_STOP) {  // Stop (Useful with contact)
			if      (dir&TOP)    { SET_MAX(yvel, oyv); }
			else if (dir&BOTTOM) { SET_MIN(yvel, oyv); }
			if      (dir&LEFT)   { SET_MAX(xvel, oxv); }
			else if (dir&RIGHT)  { SET_MIN(xvel, oxv); }
		}
		if (flags&COLL_REFLECT) {  // Reverse speed
			if      (dir&(TOP|BOTTOM)) yvel = -yvel;
			else if (dir&(LEFT|RIGHT)) xvel = -xvel;
		}
		if (flags&COLL_BOUNCE) {  // Move away by distance that was overlapped
			if      (dir&TOP)    this->y = 2*(other->T() - this->b()) - this->y;
			else if (dir&BOTTOM) this->y = 2*(other->B() + this->t()) - this->y;
			if      (dir&LEFT)   this->x = 2*(other->L() - this->r()) - this->x;
			else if (dir&RIGHT)  this->x = 2*(other->R() + this->l()) - this->x;
		}
		if (flags&COLL_KINETIC) {  // Bounce two sprites away from eachother
			if      (dir&(TOP|BOTTOM)) {
				SWAP(yvel, oyv);
			}
			else if (dir&(LEFT|RIGHT)) {
				SWAP(xvel, oxv);
			}
		}
		return dir;
	}
	return 0;
}
inline side Sprite::contact (Object* other) { return collide(other, COLL_CONTACT|COLL_STOP); }
inline side Sprite::bounce (Object* other) { return collide(other, COLL_BOUNCE|COLL_REFLECT); }

template <class Type>
inline Type** Sprite::get_collisions (bool order_by_hit) {
	return (Type**) get_collisions_obj(ot<Type>, order_by_hit);
}

Object** Sprite::get_collisions_obj (object_type T, bool order_by_hit) {
	uint maxcolls = 8;
	uint ncolls = 0;
	Object** colls = (Object**) GC_malloc(sizeof(Object*) * maxcolls);
	FOR_ALL_OBJECTS(other) if (T(other)) {
		if (!this->collision(other)) continue;
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
