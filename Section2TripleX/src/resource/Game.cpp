#include "Game.h"
#include <iostream>

Game Game::Play()
{
	while (Difficulty <= MaxDifficulty) {
		PrintDoor();
		if (!usecase->Guess()) return *this;
		Difficulty++;
	}
	PlayerWon = true;
	return *this;
}

bool Game::DidPlayerWin()
{
	return PlayerWon;
}

void Game::PrintDoor() {
	std::cout << std::endl << "#########################" << std::endl;
	std::cout << "## HACKING INTO DOOR " << Difficulty << " ##" << std::endl;
	std::cout << "#########################" << std::endl << std::endl;
}

