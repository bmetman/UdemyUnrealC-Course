#pragma once
#include <memory>
#include "../domain/Code.h"
#include "../domain/CodeRepository.h"

class GuessCode
{
public:
	GuessCode(std::shared_ptr<CodeRepository> r = std::make_shared<CodeRepository>()) : repo(r) {}
	virtual bool Guess(const int& Difficulty = 1);
	Code GetSecretCode(const int& = 1);
	Code GetPlayerCode();
private:
	std::shared_ptr<CodeRepository> repo;
	void PrintCodeInformation(Code& code);
};

