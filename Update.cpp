#include "stdafx.h"
#include "Engine.h"
#include <SFML/Graphics.hpp>
#include <sstream>

using namespace sf;

void Engine::update(float dtAsSeconds)
{
	if (m_Playing)
	{
		// Count down the time the player has left
		m_TimeRemaining -= dtAsSeconds;

		// Has the Player run out of time?
		if (m_TimeRemaining <= 0)
		{
			m_NewLevelRequired = true;
		}
	} // End if playing
}