#include "GuessCode.h"
#include <iostream>


Code GuessCode::GetSecretCode(const int& Difficulty)
{
	return repo->GetRandomCode(Difficulty * 50);
}

Code GuessCode::GetPlayerCode()
{
	return repo->GetCodeFromPlayer();
}

void GuessCode::PrintCodeInformation(Code& code)
{
	std::cout << "The sum of three numbers of the door code is " << code.GetSumOfNumbers() << "." << std::endl;
	std::cout << "The product of the three numbers of the door code is " << code.GetMultipliedNumbers() << "." << std::endl << std::endl;
}

bool GuessCode::Guess(const int& Difficulty) {

	Code SecretCode = GetSecretCode(Difficulty);
	PrintCodeInformation(SecretCode);

	Code UserGuess = GetPlayerCode();
	return UserGuess == SecretCode;
}



