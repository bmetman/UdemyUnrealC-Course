#include "GenerateSecretCode.h"

SecretCode GenerateSecretCode::Generate()
{
	return repo->Get();
}
