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

	RenderWindow* GameWindowManager::GetGameWindow()
	{
		return gameWindow;
	}

	void GameWindowManager::ClearGameWindow()
	{
		gameWindow->clear();
	}

	void GameWindowManager::DisplayGameWindow()
	{
		return gameWindow->display();
	}
}