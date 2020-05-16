#pragma once
#include<memory>

#include "../usecase/GenerateCode.h"

class GuessSecretCode {
public:
public:
	GuessSecretCode(std::shared_ptr<GenerateCode> uc = std::make_shared<GenerateCode>())
		: usecase(uc), SecretCode(usecase->Get()) {}
	virtual bool IsGuessCorrect(const Code&);
private:
	std::shared_ptr<GenerateCode> usecase;
	const Code SecretCode;
};