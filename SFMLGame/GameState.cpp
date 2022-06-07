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

}

void GameState::update(const float &dt)
{
	LOG(INFO) << "Hello from gamestate.";
}

void GameState::render(sf::RenderTarget *target)
{

}