#ifndef _HAVE_COLORED_CPP
#define _HAVE_COLORED_CPP

#include "objects/Colored.h"


template <class O>
inline uint32 Colored<O>::color () { return 0xffffff; }
template <class O>
inline void Colored<O>::draw () {
	O::draw();
	draw_color(color(), this);
}




#endif
