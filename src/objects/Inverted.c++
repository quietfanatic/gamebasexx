#ifndef _HAVE_BOUNDARY_CPP
#define _HAVE_BOUNDARY_CPP


template <class O>
class Inverted : public O {
	virtual coord l () { return -O::r(); }
	virtual coord t () { return -O::b(); }
	virtual coord r () { return -O::l(); }
	virtual coord b () { return -O::t(); }
	virtual geometry geom () { return GEOM_BOUNDARY; }
};




#endif
