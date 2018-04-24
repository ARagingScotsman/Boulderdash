#include "stdafx.h"
#include "Engine.h"

void Engine::draw()
{
	//  Rub out the last frame
	m_Window.clear(Color::White);

	// Background View
	m_Window.setView(m_BGMainView);
	// Draw the Background
	m_Window.draw(m_BackgroundSprite);
	// Set MainView
	m_Window.setView(m_MainView);

	// Draw the HUD
	// Switch to m_HudView
	m_Window.setView(m_HudView);
	// Show Everything on Screen
	m_Window.display();
}

