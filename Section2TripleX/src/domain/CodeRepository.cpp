#include "CodeRepository.h"

Code CodeRepository::Get()
{
	return Code(gateway->GenerateNumber(), gateway->GenerateNumber(), gateway->GenerateNumber());
}
