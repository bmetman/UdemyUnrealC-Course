#include "GuessSecretCode.h"

bool GuessSecretCode::IsGuessCorrect(const SecretCode& guess)
{
	return guess.Number1 == secretCode.Number1 &&
		guess.Number2 == secretCode.Number2 &&
		guess.Number3 == secretCode.Number3;
}
