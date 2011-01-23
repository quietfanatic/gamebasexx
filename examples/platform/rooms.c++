





#define U 32*P




struct room1 : public Room {
	room1 () {
		w = 40*U;
		h = 30*U;
		fps = 60;
		camera_start.x = 0;
		camera_start.y = 0;
		camera_start.w = 640*P;
		camera_start.h = 480*P;
	}

	VM(uint32 color, 0xc0c0c0);
	virtual void init () {
		Block* b;
		uint i;
		for (i=0; i <= 39; i++) { // Floor
			b = new Block; b->x = i*U; b->y = 29*U; b->insert();
		}
		b = new Block; b->x = 3*U; b->y = 29*U; b->insert();
		b = new Block; b->x = 2*U; b->y = 29*U; b->insert();
		b = new Block; b->x = 8*U; b->y = 21*U; b->insert();
		b = new Block; b->x = 8*U; b->y = 22*U; b->insert();
		b = new Block; b->x = 9*U; b->y = 22*U; b->insert();
		b = new Block; b->x = 9*U; b->y = 23*U; b->insert();
		b = new Block; b->x = 10*U; b->y = 23*U; b->insert();
		b = new Block; b->x = 10*U; b->y = 24*U; b->insert();
		b = new Block; b->x = 10*U; b->y = 25*U; b->insert();
		b = new Block; b->x = 10*U; b->y = 26*U; b->insert();
		b = new Block; b->x = 11*U; b->y = 26*U; b->insert();
		b = new Block; b->x = 12*U; b->y = 26*U; b->insert();
		b = new Block; b->x = 13*U; b->y = 26*U; b->insert();
		b = new Block; b->x = 14*U; b->y = 26*U; b->insert();
		b = new Block; b->x = 14*U; b->y = 25*U; b->insert();
		Character* c = new Character; c->x = 1*U; c->y = 16*U; c->insert();
		Mover* m = new Mover; m->x = 16*U; m->y = 16*U; m->insert();
		m = new Mover; m->x = 14*U; m->y = 12*U; m->insert();
		m = new Mover; m->x = 18*U; m->y = 8*U; m->insert();
		m = new Mover; m->x = 20*U; m->y = 9*U; m->insert();
	}
};
		




