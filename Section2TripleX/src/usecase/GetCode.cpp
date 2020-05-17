#include "GetCode.h"
#include <iostream>

Code GetCode::GetSecretCode()
{
	return repo->Get();
}

Code GetCode::GetPlayerCode()
{
	std::cout << "\nEnter a number." << std::endl;
	return repo->Get();
}
