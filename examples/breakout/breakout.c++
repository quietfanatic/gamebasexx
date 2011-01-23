
#include "gamebase.c++"

#include "Brick.c++"
#include "Paddle.c++"
Paddle* paddle;
#include "Ball.c++"
Ball* ball;



int main () {
	game.w = 320;
	game.h = 240;
	ball_surface = load_image("ball.png");
	brick_surface = load_image("brick.png");
	Brick* brick;
	for (uint x = 0; x < 320; x += 32)
	for (uint y = 24; y < 96; y += 12) {
		brick = new Brick;
		brick->x = x;
		brick->y = y;
		brick->insert();
	}
	paddle = new Paddle;
	paddle->insert();
	ball = new Ball;
	ball->insert();
	game_play();
	return 0;
}
