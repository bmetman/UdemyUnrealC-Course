#include "SecretCodeGateway.h"
#include <time.h>
#include <stdlib.h>

SecretCodeGateway::SecretCodeGateway() {
	srand(static_cast<unsigned int>(time(nullptr)));
}

int SecretCodeGateway::GenerateNumber(const int& from, const int& to)
{
	return rand() % to + from;
}
