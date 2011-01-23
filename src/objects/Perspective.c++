

template <class O>
struct Perspective : public O {
	virtual float scroll_factor() { return 0.5; }
	virtual void draw () {
		uint oldx = this->x;
		uint oldy = this->y;
		self->x += camera.x*(1-scroll_factor());
		self->y += camera.y*(1-scroll_factor());
		O::draw();
		this->x = oldx;
		this->y = oldy;
	}
};


