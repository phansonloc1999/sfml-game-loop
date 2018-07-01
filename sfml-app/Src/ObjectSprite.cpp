#include "..\Headers\GameLoop.h"

sf::Sprite getSprite(const char* texturePath)
{
	sf::Texture texture;
	if (!texture.loadFromFile(texturePath))
	{
		std::cout << "Unable to load texture!" << std::endl;
	}

	sf::Sprite sprite;
	sprite.setTexture(texture);

	return sprite;
}
