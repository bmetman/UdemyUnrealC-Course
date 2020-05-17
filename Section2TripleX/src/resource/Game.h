#pragma once
#include<memory>

#include "../usecase/GetCode.h"

class Game {
public:
public:
	Game(std::shared_ptr<GetCode> uc = std::make_shared<GetCode>())
		: usecase(uc) {}
	Game Play();
	virtual bool IsPlayerGuessCorrect();
	bool DidPlayerWin();

private:

	void PrintCodeInformation(Code&);

	std::shared_ptr<GetCode> usecase;

	int Difficulty = 1;
	const int MaxDifficulty = 5;
	bool PlayerWon = false;
};