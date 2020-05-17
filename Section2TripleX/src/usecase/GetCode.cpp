#include "GetCode.h"
#include <iostream>


Code GetCode::GetSecretCode(const int& Difficulty)
{
	switch (Difficulty)
	{
	case 1:
		return repo->GetRandomCode(25);
	case 2:
		return repo->GetRandomCode(50);
	case 3:
		return repo->GetRandomCode(100);
	case 4:
		return repo->GetRandomCode(150);
	case 5:
		return repo->GetRandomCode(200);
	default:
		return repo->GetRandomCode();
	}
}

Code GetCode::GetPlayerCode()
{
	return repo->GetCodeFromPlayer();
}
