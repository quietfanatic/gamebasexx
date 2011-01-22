#ifndef _HAVE_SURFACED_CPP
#define _HAVE_SURFACED_CPP

#include "objects/Surfaced.h"

template <class O>
inline coord Surfaced<O>::surface_x () { return - this->l(); }
template <class O>
inline coord Surfaced<O>::surface_y () { return - this->t(); }

template <class O>
inline void Surfaced<O>::draw () {
		O::draw();
		draw_surface(surface, this->x + surface_x(), this->y + surface_y());
}





#endif
