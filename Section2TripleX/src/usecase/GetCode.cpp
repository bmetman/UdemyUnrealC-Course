#include "GetCode.h"
#include <iostream>


Code GetCode::GetSecretCode(const int& Difficulty)
{
	return repo->GetRandomCode(Difficulty * 50);
}

Code GetCode::GetPlayerCode()
{
	return repo->GetCodeFromPlayer();
}
