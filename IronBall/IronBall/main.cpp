/**
*	@author			Mark Walsh & Matthew Smith
*	@creationDate	1/10/2019
*	@description	Ironball: a 2D platformer maze game
*/

#include "Engine.h"
#include <iostream>

int main()
{
	// Declare an instance of Engine
	Engine engine;

	RenderWindow window(VideoMode(600, 600), "IronBall");

	// Start the engine
	engine.run();

	// Quit in the usual way when the engine is stopped
	return 0;
}