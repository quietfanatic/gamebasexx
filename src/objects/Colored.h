#ifndef _HAVE_COLORED_H
#define _HAVE_COLORED_H




template <class O>
class Colored : public O {
public:
	uint32 color;
	Colored ();
	virtual void draw ();
};



#endif
