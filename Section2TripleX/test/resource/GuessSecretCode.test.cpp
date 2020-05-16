#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/usecase/GenerateCode.h"
#include "../../src/resource/GuessSecretCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class GenerateCodeMock : public GenerateCode {
public:
	Code Get() override {
		return Code(-1, -1, -1);
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(Given_GuessCorrect_When_IsGuessCorrect_Then_ReturnTrue)
		{
			std::shared_ptr<GenerateCode> generateCodeMock = std::make_shared<GenerateCodeMock>();
			Assert::IsTrue(GuessSecretCode(generateCodeMock).IsGuessCorrect(Code(-1, -1, -1)));
		}

		TEST_METHOD(Given_GuessIncorrect_When_IsGuessCorrect_Then_ReturnFalse)
		{
			std::shared_ptr<GenerateCode> generateCodeMock = std::make_shared<GenerateCodeMock>();
			Assert::IsFalse(GuessSecretCode(generateCodeMock).IsGuessCorrect(Code(0, 0, 0)));
		}
	};
}