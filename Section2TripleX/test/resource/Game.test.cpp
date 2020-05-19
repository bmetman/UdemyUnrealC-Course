#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/usecase/GuessCode.h"
#include "../../src/resource/Game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class GuessCodeCorrect: public GuessCode {
public:
	Code GetSecretCode(const int&) override {
		return Code(-1, -1, -1);
	}

	Code GetPlayerCode() override {
		return Code(-1, -1, -1);
	}
};

class GuessCodeIncorrect : public GuessCode {
public:
	Code GetSecretCode(const int&) override {
		return Code(0, 0, 0);
	}

	Code GetPlayerCode() override {
		return Code(-1, -1, -1);
	}
};


namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(Given_UserGuessCorrect_When_Guess_Then_ReturnTrue)
		{
			std::shared_ptr<GuessCode> generateCodeMock = std::make_shared<GuessCodeCorrect>();
			Assert::IsTrue(Game(generateCodeMock).PlayerGuessedCorrectly());
		}

		TEST_METHOD(Given_UserGuessInCorrect_When_Guess_Then_ReturnFalse)
		{
			std::shared_ptr<GuessCode> generateCodeMock = std::make_shared<GuessCodeIncorrect>();
			Assert::IsFalse(Game(generateCodeMock).PlayerGuessedCorrectly());
		}
	};
}