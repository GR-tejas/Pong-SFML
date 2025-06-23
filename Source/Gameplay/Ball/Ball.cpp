#include"../../../Header/Gameplay/Ball/Ball.h"

namespace Gameplay
{
	Ball::Ball()
	{
		ball_sprite.setRadius(radius);
		ball_sprite.setPosition(position_x, position_y);
	}

	void Ball::Update()
	{

	}

	void Ball::Render(RenderWindow* game_window)
	{
		game_window->draw(ball_sprite);
	}
}