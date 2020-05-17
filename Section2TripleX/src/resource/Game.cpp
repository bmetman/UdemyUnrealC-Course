#include "Game.h"
#include <iostream>

bool Game::Guess()
{
	auto UserGuess = usecase->GetPlayerCode();
	std::cout << "Your guess is: " << UserGuess << std::endl;
	return UserGuess == SecretCode;
}
