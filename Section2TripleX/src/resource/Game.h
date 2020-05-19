#pragma once
#include<memory>

#include "../usecase/GuessCode.h"

class Game {
public:
public:
	Game(std::shared_ptr<GuessCode> uc = std::make_shared<GuessCode>())
		: usecase(uc) {}
	Game Play();
	virtual bool PlayerGuessedCorrectly();
	bool DidPlayerWin();

private:

	void PrintCodeInformation(Code&);

	std::shared_ptr<GuessCode> usecase;

	int Difficulty = 1;
	const int MaxDifficulty = 5;
	bool PlayerWon = false;
};