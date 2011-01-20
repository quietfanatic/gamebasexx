





template <class O>
class Colored : public O {
public:
	color c;
	virtual void draw () {
		draw_color(c, this);
		O::draw();
	}
};

