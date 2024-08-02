#include <SFML/Graphics.hpp>

#ifndef GAME_H
#define GAME_H

class Game 
{

	private:

		sf::RenderWindow window;

		void init();

	public:

		void run();

};

#endif
