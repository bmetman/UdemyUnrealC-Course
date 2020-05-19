#pragma once
#include <memory>
#include "../domain/Code.h"
#include "../domain/CodeRepository.h"

class GuessCode
{
public:
	GuessCode(std::shared_ptr<CodeRepository> r = std::make_shared<CodeRepository>()) : repo(r) {}
	virtual Code GetSecretCode(const int& Difficulty = 1);
	virtual Code GetPlayerCode();
private:
	std::shared_ptr<CodeRepository> repo;
};

