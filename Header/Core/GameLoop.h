#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"

using namespace sf;
using namespace Core;
using namespace EventSpace;
using namespace std;

namespace Core
{
	class GameLoop
	{
	private:
		GameWindowManager* game_window_manager;
		EventManager* event_manager;

	public:
		void Initialize();

		bool IsGameRunning();
		void PollEvent();
		void Update();
		void Render();
	};
}