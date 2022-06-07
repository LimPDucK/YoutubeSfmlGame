#include "Game.h"

int main()
{
	Game game;
	LOG(INFO) << "Game Object create.";
	game.run();

	return EXIT_SUCCESS;
}