#ifndef STATE_H
#define STATE_H

#include "SFML\audio.hpp"
#include "SFML\Graphics.hpp"
#include "SFMl\System.hpp"
#include "SFML\Window.hpp"
#include "SFML\Network.hpp"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>

class State
{
private:
	std::vector<sf::Texture> textures;

public:
	State();
	virtual ~State();

	virtual void update() = 0;
	virtual void render() = 0;
};

#endif