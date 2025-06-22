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

			if (IsLeftMouseButtonClicked())
			{
				sf::Vector2i position = sf::Mouse::getPosition(*gameWindow);

				// Log the mouse position
				std::cout << "Left mouse click at: " << position.x << ", " << position.y << std::endl;
			}
		}
	}

	bool EventManager::IsKeyPressed(Keyboard::Key key)
	{
		return sf::Keyboard::isKeyPressed(key);
	}

	bool EventManager::IsLeftMouseButtonClicked()
	{
		// Detect if the left mouse button is clicked
		return (sf::Mouse::isButtonPressed(sf::Mouse::Left));
	}
}