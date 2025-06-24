#pragma once
#include <SFML/Graphics.hpp>
#include"../../../Header/Utility/TimeService.h"
using namespace sf;
using namespace Utility;

namespace Gameplay
{
	class Paddle
	{
	private:
		const float paddleSpeed = 50.0f;

		//void createPaddle(float position_x, float position_y);
		void MovePaddle(bool move_up_key_pressed, bool move_down_key_pressed, TimeService* time_service);

		RectangleShape paddle_sprite;

		const float paddle_width = 20.0f;
		const float paddle_height = 140.0f;

		float topBoundary = 20.0f;
		float bottomBoundary = 700.0f;

		int speedMultiplier = 10;

	public:
		void Update(bool move_up_key_pressed, bool move_down_key_pressed, TimeService* time_service);
		Paddle(float position_x, float position_y);
		RectangleShape GetPaddleSprite();
		void Render(RenderWindow* game_window);
		//void Reset(float position_x, float position_y);
	};
}