#include "stdafx.h"
#include "Engine.h"

void Engine::input()
{
	Event event;
	while (m_Window.pollEvent(event))
	{
		if (event.type == Event::KeyPressed)
		{
			// Handle the Player Quitting
			if (Keyboard::isKeyPressed(Keyboard::Escape))
			{
				m_Window.close();
			}

			// Handle the Player Starting the Game
			if (Keyboard::isKeyPressed(Keyboard::Return))
			{
				m_Playing = true;
			}
		}
	}
}