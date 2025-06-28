#pragma once
#include <SFML/Graphics.hpp>
#include "../Core/GameWindowManager.h"
#include "../Event/EventManager.h"
#include "../Gameplay/GameplayManager.h"
#include "../Utility/TimeService.h"
#include"../Sound/SoundManager.h"

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
		SoundManager* sound_manager;

	public:
		void Initialize();

		bool IsGameRunning();
		void PollEvent();
		void Update();
		void Render();
	};
}