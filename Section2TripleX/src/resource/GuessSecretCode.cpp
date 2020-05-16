#include "GuessSecretCode.h"

bool GuessSecretCode::IsGuessCorrect(const Code& guess)
{
	return guess.Number1 == SecretCode.Number1 &&
		guess.Number2 == SecretCode.Number2 &&
		guess.Number3 == SecretCode.Number3;
}
