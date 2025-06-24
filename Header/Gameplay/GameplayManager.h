#pragma once
#include <SFML/Graphics.hpp>
#include"../../Header/Event/EventManager.h"
#include"../../Header/Utility/TimeService.h"
#include"Boundary/Boundary.h"
#include"Paddle/Paddle.h"
#include"Ball/Ball.h"

using namespace EventSpace;
using namespace Utility;

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

		Boundary* boundary;
		Ball* ball;
		Paddle* player1;
		Paddle* player2;
		TimeService* time_service;

		void Initialize();

	public:
		GameplayManager(EventManager* manager, TimeService* time_service);
		//GameplayManager();
		void Update(TimeService* timeService);
		void Render(RenderWindow* game_window);
	};
}