#include"../../../Header/Gameplay/Ball/Ball.h"

namespace Gameplay
{
	Ball::Ball()
	{
		LoadTexture();
		InitializeVariables();
	}

	void Ball::Update()
	{
		Move();
	}

	void Ball::Render(RenderWindow* game_window)
	{
		game_window->draw(pong_ball_sprite);
	}

	void Ball::LoadTexture()
	{
		if (!pong_ball_texture.loadFromFile(texture_path))
		{
			throw std::runtime_error("Failed to load ball texture!");
		}
	}

	void Ball::InitializeVariables()
	{
		pong_ball_sprite.setTexture(pong_ball_texture);
		pong_ball_sprite.setScale(scale_x, scale_y);
		pong_ball_sprite.setPosition(position_x, position_y);
	}

	void Ball::Move()
	{
		pong_ball_sprite.move(velocity); //error
	}
}