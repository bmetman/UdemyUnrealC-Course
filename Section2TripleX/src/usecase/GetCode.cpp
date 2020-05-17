#include "GetCode.h"
#include <iostream>

Code GetCode::GetSecretCode()
{
	return repo->GetRandomCode();
}

Code GetCode::GetPlayerCode()
{
	std::cout << "\nEnter a number." << std::endl;
	return repo->GetCodeFromPlayer();
}
