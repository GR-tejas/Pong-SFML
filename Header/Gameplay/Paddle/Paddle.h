#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

namespace Gameplay
{
	class Paddle
	{
	private:
		const float paddleSpeed = 0.1f;

		//void createPaddle(float position_x, float position_y);
		void MovePaddle(bool move_up_key_pressed, bool move_down_key_pressed);

		RectangleShape paddle_sprite;

		const float paddle_width = 20.0f;
		const float paddle_height = 140.0f;

		float topBoundary = 20.0f;
		float bottomBoundary = 700.0f;

	public:
		void Update(bool move_up_key_pressed, bool move_down_key_pressed);
		Paddle(float position_x, float position_y);
		RectangleShape GetPaddleSprite();
		void Render(RenderWindow* game_window);
		//void Reset(float position_x, float position_y);
	};
}