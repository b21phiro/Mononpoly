#include "Game.h"

void Game::init()
{
	window.create(sf::VideoMode(1280, 800), "Mononpoly");
};

void Game::run()
{

	// Initializes the game first.
	init();

	while (window.isOpen())
	{

		// Checks for incoming events.
		sf::Event event;

		while (window.pollEvent(event))
		{
			// Closes the window.
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			// Clears the window.
			window.clear(sf::Color::Black);

			window.display();

		}

	}

};