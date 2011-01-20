#ifndef _HAVE_MOVING_CPP
#define _HAVE_MOVING_CPP



typedef uint32 collide_flags;
#define COLL_ONLYON 1<<8
#define COLL_CONTACT 1<<9
#define COLL_STOP 1<<10
#define COLL_BOUNCE 1<<11
#define COLL_REFLECT 1<<12
#define COLL_KINETIC 1<<13
#define COLL_ONLYNEW 1<<14




template <class O>
struct Moving : public O {
	coord xvel;
	coord yvel;
	Moving () : xvel(0), yvel(0) { }
	virtual void move () {
		this->x += xvel;
		this->y += yvel;
		O::move();
	}

	side collision_direction (Object* other) {
		if (other->geom() == GEOM_BOUNDARY) {
			return this->detect_side(other);
		}
		side r = 0;
		coord xv = xvel;
		coord yv = yvel;
		Moving* m = dynamic_cast<Moving*>(other);
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
			y_xv = (this->B() - other->T()) * (long_coord) xv;
			if (xvel > 0) {  // Going right
				x_yv = (this->R() - other->L()) * (long_coord) yv;
				if (x_yv >= y_xv) r |= TOP;
				if (x_yv <= y_xv) r |= LEFT;
			}
			else {  // Going left
				x_yv = (other->R() - this->L()) * (long_coord) yv;
				if (x_yv >= -y_xv) r |= TOP;
				if (x_yv <= -y_xv) r |= RIGHT;
			}
		}
		else {  // Going up
			y_xv = other->B() - this->T() * (long_coord) xv;
			if (xvel > 0) {  // Going right
				x_yv = this->R() - other->L() * (long_coord) yv;
				if (-x_yv >= y_xv) r |= BOTTOM;
				if (-x_yv <= y_xv) r |= LEFT;
			}
			else {  // Going left
				x_yv = other->R() - this->L() * (long_coord) yv;
				if (-x_yv >= -y_xv) r |= BOTTOM;
				if (-x_yv <= -y_xv) r |= RIGHT;
			}
		}
		return r;
	}

	side collide (Object* other, collide_flags flags) {
		coord oxv, oyv;
		Moving* m = dynamic_cast<Moving*>(other);
		if (m != NULL) {
			oxv = m->xvel;
			oyv = m->yvel;
		}
		else
			oxv = oyv = 0;
		if (!(flags&COLL_ONLYON)) flags |= ALLSIDES;
		side dir = collision_direction(other);
		dir &= (flags&ALLSIDES);
		if (this->collision(other)) {
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
	side contact (Object* other) { return collide(other, COLL_CONTACT|COLL_STOP); }
	side bounce (Object* other) { return collide(other, COLL_BOUNCE|COLL_REFLECT); }
};






#endif
