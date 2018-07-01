#include "..\Headers\GameLoop.h"

sf::Event event;
sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_TITLE);

void GameLoop::load()
{

}

void GameLoop::update()
{
	while (window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			window.close();
			break;
		}
	}
}

void GameLoop::render()
{
	window.clear();

	window.display();
}