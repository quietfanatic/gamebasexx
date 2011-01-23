#ifndef _HAVE_SURFACED_CPP
#define _HAVE_SURFACED_CPP

#include "objects/Surfaced.h"

#ifdef GAMEBASE_CAREFUL
static bool Surface_warning_called = false;
template <class O>
inline SDL_Surface* Surfaced<O>::surface () {
	printf("Warning: Surfaced object has no surface() method.\n");
	return NULL;
}
#else
template <class O>
inline SDL_Surface* Surfaced<O>::surface () { return NULL; }
#endif
template <class O>
inline coord Surfaced<O>::surface_x () { return - this->l(); }
template <class O>
inline coord Surfaced<O>::surface_y () { return - this->t(); }

template <class O>
inline void Surfaced<O>::draw () {
		O::draw();
		draw_surface(surface(), this->x + surface_x(), this->y + surface_y());
}





#endif
