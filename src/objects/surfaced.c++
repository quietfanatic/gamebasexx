#ifndef _HAVE_SURFACED_CPP
#define _HAVE_SURFACED_CPP




template <class O>
class Surfaced : public O {
	SDL_Surface* surface;
	virtual coord surface_x () { return - out l(); }
	virtual coord surface_y () { return - out t(); }

	virtual void draw () {
		draw_surface(surface, out x + surface_x(), out y + surface_y());
		O::draw();
	}
}







#endif
