#pragma once
#include<memory>

#include "../usecase/GenerateSecretCode.h"

class GuessSecretCode {
public:
public:
	GuessSecretCode(std::shared_ptr<GenerateSecretCode> uc = std::make_shared<GenerateSecretCode>())
		: usecase(uc), secretCode(usecase->Get()) {}
	virtual bool IsGuessCorrect(const SecretCode&);
private:
	std::shared_ptr<GenerateSecretCode> usecase;
	const SecretCode secretCode;
};