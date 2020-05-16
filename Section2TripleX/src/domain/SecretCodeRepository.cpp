#include "SecretCodeRepository.h"

SecretCode SecretCodeRepository::Get()
{
	return SecretCode(gateway->GenerateNumber(), gateway->GenerateNumber(), gateway->GenerateNumber());
}
