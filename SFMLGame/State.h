#ifndef STATE_H
#define STATE_H

#include "SFML\audio.hpp"
#include "SFML\Graphics.hpp"
#include "SFMl\System.hpp"
#include "SFML\Window.hpp"
#include "SFML\Network.hpp"

#include "glog\logging.h"

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <vector>
#include <stack>
#include <map>

class State
{
private:
	sf::RenderWindow *window;
	std::vector<sf::Texture> textures;

public:
	State(sf::RenderWindow *window);
	virtual ~State();

	virtual void endState() = 0;

	virtual void update(const float &dt) = 0;
	virtual void render(sf::RenderTarget *target = nullptr) = 0;
};

#endif