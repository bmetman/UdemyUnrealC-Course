#pragma once
#include<memory>

#include "../usecase/GetCode.h"

class GuessSecretCode {
public:
public:
	GuessSecretCode(std::shared_ptr<GetCode> uc = std::make_shared<GetCode>())
		: usecase(uc), SecretCode(usecase->Generate()) {}
	virtual bool IsGuessCorrect(const Code&);
private:
	std::shared_ptr<GetCode> usecase;
	const Code SecretCode;
};