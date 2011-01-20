#ifndef _HAVE_MOVING_CPP
#define _HAVE_MOVING_CPP



template <class O>
struct Moving : public O {
	Moving () : xvel(0), yvel(0) { }
	coord xvel;
	coord yvel;
	virtual void move () {
		this->x += xvel;
		this->y += yvel;
		O::move();
	}
};






#endif
