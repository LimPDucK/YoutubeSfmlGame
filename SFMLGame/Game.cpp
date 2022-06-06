#include "Game.h"

// Static functionss
	

// Initialize functions
void Game::initWindow()
{
	/* Creates a SFML window using options from a window.ini file.*/

	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "C++ SFMl Game");

}

// Constructors/Destructors
Game::Game()
{
	this->initWindow();
}

Game::~Game()
{
	delete this->window;
}

// Functions
void Game::updateDt()
{
	/* Updates the dt variable with the time it takes to update and render one frame.*/
	this->dt = this->dtClock.restart().asSeconds();

}

void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent))
	{
		if (this->sfEvent.type == this->sfEvent.Closed)
			this->window->close();
	}
}

void Game::update()
{
	this->updateSFMLEvents();
}

void Game::render()
{
	this->window->clear();

	// Render items
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	this->window->draw(shape);

	this->window->display();
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}