#pragma once
#include <memory>
#include "../domain/SecretCode.h"
#include "../domain/SecretCodeRepository.h"

class GenerateSecretCode
{
public:
	GenerateSecretCode(std::shared_ptr<SecretCodeRepository> r = std::make_shared<SecretCodeRepository>()) : repo(r) {}
	SecretCode Get();
private:
	std::shared_ptr<SecretCodeRepository> repo;
};

