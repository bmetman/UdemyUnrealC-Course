#include "GetCode.h"
#include <iostream>

Code GetCode::GetSecretCode()
{
	return repo->GetRandomCode();
}

Code GetCode::GetPlayerCode()
{
	return repo->GetCodeFromPlayer();
}
