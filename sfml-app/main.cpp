#include "Headers\Constants.h"
#include "Headers\ObjectSprite.h"
#include "Headers\GameLoop.h"

//extern sf::RenderWindow window;
extern sf::Event event;
extern sf::RenderWindow window;

int main()
{
	GameLoop game;

	game.load();
	while (window.isOpen())
	{
		game.update();
		game.render();
	}
	return 0;
}