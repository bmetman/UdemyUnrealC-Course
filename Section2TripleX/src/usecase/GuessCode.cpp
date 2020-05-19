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
