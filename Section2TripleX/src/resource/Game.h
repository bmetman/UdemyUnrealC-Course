#pragma once
#include<memory>

#include "../usecase/GetCode.h"

class Game {
public:
public:
	Game(std::shared_ptr<GetCode> uc = std::make_shared<GetCode>())
		: usecase(uc), SecretCode(usecase->GetSecretCode()) {}
	virtual bool Guess();
private:
	std::shared_ptr<GetCode> usecase;
	Code SecretCode;
};