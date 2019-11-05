#pragma once
#include <SFML/Graphics.hpp>
#include "GameTexture.h"

using namespace sf;

class Engine
{
private:
	// The texture holder
	GameTexture m_T;

	// The Level
	Levels m_L;

	// The Hud


	const int TILE_SIZE = 50;
	const int VERTS_IN_QUAD = 4;

	// The force pushing the characters down
	const int GRAVITY = 300;

	// A regular RenderWindow
	RenderWindow m_Window;
	
	// The main Views
	View m_MainView;
	View m_LeftView;
	View m_RightView;

	// Three views for the background
	View m_BGMainView;
	View m_BGLeftView;
	View m_BGRightView;

	View m_HudView;

	// Declare a sprite and a Texture for the background
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	// Is the game currently playing?
	bool m_Play = false;

	//Checking to see what player is focused on
	bool m_Player1 = true;

	//Start in full screen mode
	bool m_SplitScreen = false; 

	// How much time is left in the current level
	float m_TimeRemaining = 200;
	Time m_GameTimeTotal;

	// Is it time for a new/first level?
	bool m_NewLevelRequired = true;

	// The vertex array for the level design
	VertexArray m_VALevel;

	// The 2d array with the map for the level
	// A pointer to a pointer
	int** m_ArrayLevel = NULL;

	// Texture for the background and the level tiles
	Texture m_TextureTiles;

	// Where is the mouse in relation to world coordinates
	Vector2f mouseWorldPosition;
	
	// Where is the mouse in relation to screen coordinates
	Vector2i mouseScreenPosition;

	// What is the screen resolution
	Vector2f m_Resolution;

	// Private functions for internal use only
	void input();
	void update(float dtAsSeconds);
	void draw();

	// Load a new level
	void loadLevels();

	// Run will call all the private functions
	

public:
	// The Engine constructor
	Engine();
	
	
	// Run will call all the private functions
	void run();

	
};
