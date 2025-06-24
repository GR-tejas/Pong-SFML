#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Gameplay/GameplayManager.h"
#include "../../Header/Utility/TimeService.h"

using namespace sf;
using namespace Core;
using namespace EventSpace;
using namespace Gameplay;
using namespace std;

namespace Core
{
	class GameLoop
	{
	private:
		GameWindowManager* game_window_manager;
		EventManager* event_manager;
		GameplayManager* gameplay_manager;
		TimeService* time_service;

	public:
		void Initialize();

		bool IsGameRunning();
		void PollEvent();
		void Update();
		void Render();
	};
}