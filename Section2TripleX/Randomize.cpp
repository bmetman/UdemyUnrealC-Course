#include "Randomize.h"

#include <time.h>
#include <stdlib.h>

Randomize::Randomize() {
	srand(static_cast<unsigned int>(time(nullptr)));
}

int Randomize::GenerateRandomInt(const int& from, const int& to)
{
	return rand() % to + from;
}
