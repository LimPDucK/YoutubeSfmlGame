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
#include <vector>
#include <stack>
#include <map>

class State
{
private:
	sf::RenderWindow *window;
	std::vector<sf::Texture> textures;

	bool quit;

public:
	State(sf::RenderWindow *window);
	virtual ~State();

	const bool& getQuit() const;

	virtual void checkForQuit();

	virtual void endState() = 0;
	virtual void updateKeybinds(const float &dt) = 0;
	virtual void update(const float &dt) = 0;
	virtual void render(sf::RenderTarget *target = nullptr) = 0;
};

#endif