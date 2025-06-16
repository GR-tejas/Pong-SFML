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
		gameWindow->create(VideoMode(gameWindowWidth, gameWindowHight), gameTitle);
	}

	bool GameWindowManager::IsGameRunning()
	{
		return gameWindow->isOpen();
	}

	void GameWindowManager::render()
	{

	}

	RenderWindow* GameWindowManager::GetGameWindow()
	{
		return gameWindow;
	}
}