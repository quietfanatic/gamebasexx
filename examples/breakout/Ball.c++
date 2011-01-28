

uint brick_count = 60;
SDL_Surface* ball_surface = NULL;

struct Ball : public Object {
	uint finish_timer;
	uint alive;
	virtual coord l () { return 3*P; }
	virtual coord t () { return 3*P; }
	virtual coord r () { return 3*P; }
	virtual coord b () { return 3*P; }
	virtual SDL_Surface* surface () { return ball_surface; }
	Ball () : finish_timer(0), alive(0) { }
	virtual void after_move () {
		if (finish_timer == 30) room_exit();
		if (finish_timer) finish_timer++;
		if (alive) {
			 // bounce off walls
			bounce(&game, LEFT|RIGHT|BOTTOM);
			 // restart at bottom
			if (out_of_room()) {
				alive = 0;
			}
			 // bounce off paddle
			if (bounce(paddle)) {
				xvel += (x - paddle->x) / 6.0;
				SET_MAX(xvel, 8*P);
				SET_MIN(xvel, -8*P);
			}
			 // destroy bricks
			FOR_ALL_OF_TYPE(other, Brick) {
				if (bounce(other)) {
					other->remove();
					brick_count--;
					if (brick_count == 0) finish_timer = 1;
				}
			}
		}
		else {
			x = paddle->x;
			y = paddle->y - 7*P;
			if (keypress[SDLK_UP]) {
				alive = 1;
				xvel = 3*P;
				yvel = -3*P;
			}
		}
	}
};








