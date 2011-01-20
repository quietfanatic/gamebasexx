
#include "gamebase.c++"
#include "objects/colored.c++"



class Q : public Colored<Object> {
	virtual coord r () { return 64; }
	virtual coord b () { return 64; }
};




int main() {
	Q q;
	q.x = 32;
	q.y = 32;
	q.c = 0xffffff;
	q.insert();
	game_play();
	return 0;
}

