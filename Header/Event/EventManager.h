#pragma once
#include<SFML/Graphics.hpp>

using namespace sf;

namespace EventSpace
{
	class EventManager
	{
	public:
		void PollEvents(RenderWindow* gameWindow);
		bool IsKeyPressed(Keyboard::Key key);
	};
}