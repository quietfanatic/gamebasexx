#ifndef _HAVE_COLORED_CPP
#define _HAVE_COLORED_CPP

#include "objects/Colored.h"


template <class O>
Colored<O>::Colored () : color(0xffffff) { }
template <class O>
inline void Colored<O>::draw () {
	O::draw();
	draw_color(color, this);
}




#endif
