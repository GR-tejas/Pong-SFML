#pragma once
#include<SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

namespace EventSpace
{
	class EventManager
	{
	public:
		void PollEvents(RenderWindow* gameWindow);
		bool IsKeyPressed(Keyboard::Key key);
		bool IsLeftMouseButtonClicked();
	};
}