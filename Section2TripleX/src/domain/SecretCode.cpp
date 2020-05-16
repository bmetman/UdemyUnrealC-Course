#include "SecretCode.h"

int SecretCode::GetMultipliedNumbers()
{
	return Number1 * Number2 * Number3;
}

int SecretCode::GetSumOfNumbers()
{
	return Number1 + Number2 + Number3;
}

bool SecretCode::operator==(const SecretCode& that) const
{
	return Number1 == that.Number1 &&
		Number2 == that.Number2 &&
		Number3 == that.Number3;
}
