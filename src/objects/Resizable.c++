#ifndef _HAVE_RESIZABLE_CPP
#define _HAVE_RESIZABLE_CPP

template <class O>
struct Resizable : public O {
	coord w;
	coord h;
	virtual coord r () { return w; }
	virtual coord b () { return h; }
};




#endif
