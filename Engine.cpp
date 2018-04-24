#include "stdafx.h"
#include "Engine.h"

Engine::Engine()
{
	// Get the Screen Resolution and Create an SFML Window and View
	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	m_Window.create(VideoMode(resolution.x, resolution.y), "Boulderdash", Style::Fullscreen);

	// Initilize the Fullscreen View
	m_MainView.setSize(resolution);
	m_HudView.reset(FloatRect(0, 0, resolution.x, resolution.y));

	// Associate the Sprite with the Texture
	m_BackgroundSprite.setTexture(m_BackgroundTexture);
}

void Engine::run()
{
	// Timing
	Clock clock;

	while (m_Window.isOpen())
	{
		Time dt = clock.restart();
		// Update the Total Game Time
		m_GameTimeTotal += dt;
		// Make a Decimal Fraction from the Delta Time
		float dtAsSeconds = dt.asSeconds();
		// Call Each Part of the Game Loop in Turn
		input();
		update(dtAsSeconds);
		draw();
	}
}