#include"../../Header/Event/EventManager.h"

namespace EventSpace
{
	void EventManager::PollEvents(RenderWindow* gameWindow)
	{
		Event event;

		while (gameWindow->pollEvent(event))
		{
			if (EventManager::IsKeyPressed(sf::Keyboard::Escape))
				gameWindow->close();
		}
	}

	bool EventManager::IsKeyPressed(Keyboard::Key key)
	{
		return sf::Keyboard::isKeyPressed(key);
	}
}