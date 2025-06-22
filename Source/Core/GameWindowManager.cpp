#include "../../Header/Core/GameWindowManager.h"

namespace Core
{
	void GameWindowManager::Initialize()
	{
		gameWindow = new RenderWindow();

		CreateGameWindow();
	}

	void GameWindowManager::CreateGameWindow()
	{
		//gameWindow->create(VideoMode(gameWindowWidth, gameWindowHight), gameTitle);
		gameWindow->create(VideoMode::getDesktopMode(), gameTitle, Style::Fullscreen);
	}

	bool GameWindowManager::IsGameRunning()
	{
		return gameWindow->isOpen();
	}

	void GameWindowManager::render()
	{
		gameWindow->clear(Color(200, 50, 50, 255));

		//gameWindow->draw();

		gameWindow->display();
	}

	RenderWindow* GameWindowManager::GetGameWindow()
	{
		return gameWindow;
	}
}