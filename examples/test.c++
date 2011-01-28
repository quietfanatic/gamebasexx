
#include "gamebase.c++"



struct Q : public Object {
	virtual coord r () { return 64; }
	virtual coord b () { return 64; }
	virtual uint32 color () { return 0xffffff; }
};




int main() {
	Q q;
	q.x = 32;
	q.y = 32;
	q.insert();
	game_play();
	return 0;
}

