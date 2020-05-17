#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/usecase/GetCode.h"
#include "../../src/resource/Game.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class GetCodeSame: public GetCode {
public:
	Code GetSecretCode() override {
		return Code(-1, -1, -1);
	}

	Code GetPlayerCode() override {
		return Code(-1, -1, -1);
	}
};

class GetCodeDifferent : public GetCode {
public:
	Code GetSecretCode() override {
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
			std::shared_ptr<GetCode> generateCodeMock = std::make_shared<GetCodeSame>();
			Assert::IsTrue(Game(generateCodeMock).Guess());
		}

		TEST_METHOD(Given_UserGuessInCorrect_When_Guess_Then_ReturnFalse)
		{
			std::shared_ptr<GetCode> generateCodeMock = std::make_shared<GetCodeDifferent>();
			Assert::IsFalse(Game(generateCodeMock).Guess());
		}
	};
}