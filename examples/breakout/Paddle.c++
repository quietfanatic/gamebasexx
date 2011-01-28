
struct Paddle : public Object {
	Paddle () { x = 140; y = 232; }
	virtual coord l () { return 20; }
	virtual coord t () { return 2; }
	virtual coord r () { return 20; }
	virtual coord b () { return 2; }
	virtual uint32 color () { return 0xffffff; }

	virtual void before_move () {
		if (keypress[SDLK_RIGHT]) {
			if (!keypress[SDLK_LEFT]) {
				xvel =
				  xvel <= 0 ? 1
				: xvel <= 1 ? 2
				:             4;
			}
			else xvel = 0;
		}
		else if (keypress[SDLK_LEFT]) {
			xvel =
			  xvel >=  0 ? -1
			: xvel >= -1 ? -2
			:              -4;
		}
		else xvel = 0;
	}
	
	virtual void after_move () {
		contact(&game);  // Stop at edges of screen
	}
};



