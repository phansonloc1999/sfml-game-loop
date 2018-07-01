#pragma once
#include "SFML\Graphics.hpp"
#include <iostream>

class ObjectSprite
{
public:
	sf::Sprite getSprite(const char* texturePath);
};
