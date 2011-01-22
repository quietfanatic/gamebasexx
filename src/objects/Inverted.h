#ifndef _HAVE_BOUNDARY_H
#define _HAVE_BOUNDARY_H


template <class O>
struct Inverted : public O {
	virtual coord l ();
	virtual coord t ();
	virtual coord r ();
	virtual coord b ();
	virtual geometry geom ();
};




#endif
