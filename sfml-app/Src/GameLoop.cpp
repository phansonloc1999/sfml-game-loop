#include "..\Headers\GameLoop.h"

sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), GAME_TITLE);
sf::Event event;

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
		case sf::Event::KeyPressed:
			if (event.key.code == sf::Keyboard::Enter)
			{
				enterPressed = true;
			}
			break;
		}
	}

	check();

	enterPressed = false;
}

void GameLoop::render()
{
	window.clear();

	window.display();
}

void check()
{
	if (enterPressed)
	{
		std::cout << "Entered!" << std::endl;
	}
}