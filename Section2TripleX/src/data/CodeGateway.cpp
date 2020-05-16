#include "CodeGateway.h"
#include <time.h>
#include <stdlib.h>

CodeGateway::CodeGateway() {
	srand(static_cast<unsigned int>(time(nullptr)));
}

int CodeGateway::GenerateNumber(const int& from, const int& to)
{
	return rand() % to + from;
}
