#pragma once
#include <SFML/Graphics.hpp>
#include "TextureHolder.h"

using namespace sf;

class Engine
{
private:

	// The Texture Holder
	TextureHolder textureHolder;

	const int TILE_SIZE = 50;
	const int VERTS_IN_QUAD = 4;

	// A RenderWindow
	RenderWindow m_Window;

	// Main View
	View m_MainView;

	// View for the Background
	View m_BGMainView;

	View m_HudView;

	// Declare a Sprite and a Texture for the Background
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	// Is the Game Currently Playing?
	bool m_Playing = false;

	// How Much Time is Left in the Current Level
	float m_TimeRemaining = 60;
	Time m_GameTimeTotal;

	// Is it Time for a New/First Level?
	bool m_NewLevelRequired = true;
	// Private Functions for Internal use only
	void input();
	void update(float dtAsSeconds);
	void draw();
public:
	// The Engine Constructor
	Engine();
	// Run Will Call All the Private Functions
	void run();
};