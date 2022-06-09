#include "GameState.h"

GameState::GameState(sf::RenderWindow *window)
	: State(window)
{

}

GameState::~GameState()
{

}

void GameState::endState()
{
	std::cout << "End GameState." << std::endl;
}

void GameState::updateKeybinds(const float& dt)
{
	this->checkForQuit();


}

void GameState::update(const float& dt)
{
	this->updateKeybinds(dt);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		std::cout << "A is press." << std::endl;

}

void GameState::render(sf::RenderTarget *target)
{

}