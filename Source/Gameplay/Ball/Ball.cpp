#include"../../../Header/Gameplay/Ball/Ball.h"

namespace Gameplay
{
	Ball::Ball()
	{
		LoadTexture();
		InitializeVariables();
	}

	void Ball::Update(Paddle* player1, Paddle* player2, TimeService* timeService)
	{
		Move(timeService);
		OnCollision(player1, player2);
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

	void Ball::Move(TimeService* time_service)
	{
		pong_ball_sprite.move(velocity * (time_service->GetDeltaTime() * speed_multiplier));
		std::cout << time_service->GetDeltaTime()<<"\n";
		//pong_ball_sprite.move(velocity.x * speed_multiplier, velocity.y * speed_multiplier);
	}

	void Ball::HandlePaddleCollision(Paddle* player1, Paddle* player2)
	{
		const RectangleShape& player1Paddle = player1->GetPaddleSprite();
		const RectangleShape& player2Paddle = player2->GetPaddleSprite();

		FloatRect ball_bounds = pong_ball_sprite.getGlobalBounds();
		FloatRect player1_bounds = player1Paddle.getGlobalBounds();
		FloatRect player2_bounds = player2Paddle.getGlobalBounds();

		if (ball_bounds.intersects(player1_bounds) && velocity.x < 0)
		{
			velocity.x = -velocity.x;
		}
		if (ball_bounds.intersects(player2_bounds) && velocity.x > 0)
		{
			velocity.x = -velocity.x;
		}
	}

	void Ball::HandleBoudaryCollision()
	{
		FloatRect ball_bounds = pong_ball_sprite.getGlobalBounds();

		if ((ball_bounds.top <= top_boundary && velocity.y < 0) ||
			(ball_bounds.top + ball_bounds.height >= bottom_boundary && velocity.y > 0))
		{
			velocity.y = -velocity.y;
		}
	}

	void Ball::HandleOutofBoundCollision()
	{
		FloatRect ball_bounds = pong_ball_sprite.getGlobalBounds();

		if (ball_bounds.left <= left_boundary)
		{
			Reset();
		}
		else if (ball_bounds.left + ball_bounds.width >= right_boundary)
		{
			Reset();
		}
	}

	void Ball::Reset()
	{
		pong_ball_sprite.setPosition(center_position_x, center_position_y);
		velocity = Vector2f(ball_speed, ball_speed);
	}

	void Ball::OnCollision(Paddle* player1, Paddle* player2)
	{
		HandleBoudaryCollision();
		HandlePaddleCollision(player1, player2);
		HandleOutofBoundCollision();
	}
}