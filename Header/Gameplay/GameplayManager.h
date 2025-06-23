#pragma once
#include"../../Header/Event/EventManager.h"
#include "Paddle/Paddle.h"
#include "Ball/Ball.h"

using namespace EventSpace;

namespace Gameplay
{
	class GameplayManager
	{
	private:
		EventManager* event_manager;

		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;

		Ball* ball;
		Paddle* player1;
		Paddle* player2;

		void Initialize();

	public:
		GameplayManager(EventManager* manager);
		GameplayManager();
		void Update();
		void Render(RenderWindow* game_window);
	};
}