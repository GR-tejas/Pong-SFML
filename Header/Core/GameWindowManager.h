#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

namespace Core
{
	class GameWindowManager
	{
	private:
		int gameWindowWidth = 1280;
		int gameWindowHight = 720;
		string gameTitle = "SFML-Pong";

		RenderWindow* gameWindow;

		void CreateGameWindow();

	public:
		void Initialize();
		RenderWindow* GetGameWindow();
		bool IsGameRunning();
		void DisplayGameWindow();
		void ClearGameWindow();
	};
}