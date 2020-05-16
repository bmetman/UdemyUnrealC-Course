#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/usecase/GenerateSecretCode.h"
#include "../../src/resource/GuessSecretCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class GenerateSecretCodeMock : public GenerateSecretCode {
public:
	SecretCode Get() override {
		return SecretCode(-1, -1, -1);
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(Given_GuessCorrect_When_IsGuessCorrect_Then_ReturnTrue)
		{
			std::shared_ptr<GenerateSecretCode> generateSecretCodeMock = std::make_shared<GenerateSecretCodeMock>();
			Assert::IsTrue(GuessSecretCode(generateSecretCodeMock).IsGuessCorrect(SecretCode(-1, -1, -1)));
		}

		TEST_METHOD(Given_GuessIncorrect_When_IsGuessCorrect_Then_ReturnFalse)
		{
			std::shared_ptr<GenerateSecretCode> generateSecretCodeMock = std::make_shared<GenerateSecretCodeMock>();
			Assert::IsFalse(GuessSecretCode(generateSecretCodeMock).IsGuessCorrect(SecretCode(0, 0, 0)));
		}
	};
}