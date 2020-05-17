#include "Game.h"
#include <iostream>

void Game::Play()
{
	std::cout << (IsPlayerGuessCorrect() ?
		"Correct! You got into the server room! It's filled with valuable data!" :
		"Wrong! You triggered the alarms and the hacker police has caught you!")
		<< std::endl;
}

bool Game::IsPlayerGuessCorrect()
{
	PrintSecretCodeInformation();

	auto UserGuess = usecase->GetPlayerCode();
	std::cout << "Your guess is: " << UserGuess << std::endl << std::endl;

	return UserGuess == SecretCode;
}

void Game::PrintSecretCodeInformation()
{
	std::cout << "The sum of three numbers of the door code is " << SecretCode.GetSumOfNumbers() << "." << std::endl;
	std::cout << "The product of the three numbers of the door code is " << SecretCode.GetMultipliedNumbers() << "." << std::endl << std::endl;
}
