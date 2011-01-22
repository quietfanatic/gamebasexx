#ifndef _HAVE_SURFACED_H
#define _HAVE_SURFACED_H




template <class O>
struct Surfaced : public O {
	SDL_Surface* surface;
	virtual coord surface_x ();
	virtual coord surface_y ();

	virtual void draw ();
};







#endif
