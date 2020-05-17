#include "Game.h"
#include <iostream>

Game Game::Play()
{
	while (Difficulty <= MaxDifficulty) {
		std::cout << std::endl << "#########################" << std::endl;
		std::cout << "## HACKING INTO DOOR " << Difficulty << " ##" << std::endl;
		std::cout << "#########################" << std::endl << std::endl;

		PlayerWon = IsPlayerGuessCorrect();
		if (!PlayerWon) return *this;
		Difficulty++;
	}
	return *this;
}

bool Game::IsPlayerGuessCorrect()
{
	auto SecretCode = usecase->GetSecretCode(Difficulty);
	PrintCodeInformation(SecretCode);

	auto UserGuess = usecase->GetPlayerCode();
	std::cout << "Your guess is: " << UserGuess << std::endl << std::endl;

	return UserGuess == SecretCode;
}

bool Game::DidPlayerWin()
{
	return PlayerWon;
}

void Game::PrintCodeInformation(Code& code)
{
	std::cout << "The sum of three numbers of the door code is " << code.GetSumOfNumbers() << "." << std::endl;
	std::cout << "The product of the three numbers of the door code is " << code.GetMultipliedNumbers() << "." << std::endl << std::endl;
}
