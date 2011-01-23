#ifndef _HAVE_COLORED_H
#define _HAVE_COLORED_H




template <class O>
class Colored : public O {
public:
	virtual uint32 color ();
	virtual void draw ();
};



#endif
