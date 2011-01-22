#ifndef _HAVE_RESIZABLE_H
#define _HAVE_RESIZABLE_H

template <class O>
struct Resizable : public O {
	coord w;
	coord h;
	virtual coord r ();
	virtual coord b ();
};




#endif
