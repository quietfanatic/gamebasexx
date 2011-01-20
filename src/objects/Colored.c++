#ifndef _HAVE_COLORED_CPP
#define _HAVE_COLORED_CPP




template <class O>
class Colored : public O {
public:
	uint32 color;
	Colored () : color(0xffffff) { }
	virtual void draw () {
		draw_color(color, this);
		O::draw();
	}
};



#endif
