#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/usecase/GuessCode.h"
#include "../../src/resource/Game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class GuessCodeWrong : public GuessCode {
public:
	virtual bool Guess(const int&) {
		return false;
	}
};

class GuessCodeRight : public GuessCode {
public:
	virtual bool Guess(const int&) {
		return true;
	}
};


namespace test
{
	TEST_CLASS(test)
	{
	public:
		TEST_METHOD(Given_PlayerGuessesFalse_When_Play_Then_PlayerDidNotWin)
		{
			std::shared_ptr<GuessCode> GuessCodeMock = std::make_shared<GuessCodeWrong>();		
			Assert::IsFalse(Game(GuessCodeMock).Play().DidPlayerWin());
		}

		TEST_METHOD(Given_PlayerGuessesRightFiveTimes_When_Play_Then_PlayerDidWin)
		{
			std::shared_ptr<GuessCode> GuessCodeMock = std::make_shared<GuessCodeRight>();
			Assert::IsTrue(Game(GuessCodeMock).Play().DidPlayerWin());
		}
	};
}