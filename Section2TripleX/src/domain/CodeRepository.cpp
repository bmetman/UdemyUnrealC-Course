#include "CodeRepository.h"

Code CodeRepository::GetRandomCode()
{
	return Code(gateway->GenerateNumber(), gateway->GenerateNumber(), gateway->GenerateNumber());
}

Code CodeRepository::GetCodeFromPlayer()
{
	return Code(gateway->AskPlayerForNumber(), gateway->AskPlayerForNumber(), gateway->AskPlayerForNumber());
}
