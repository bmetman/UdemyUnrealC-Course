#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/domain/CodeRepository.h"
#include "../../src/usecase/GuessCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class DifferentCodes : public CodeRepository {
public:
	virtual Code GetRandomCode(const int&) override {
		return Code(-1, -1, -1);
	}

	virtual Code GetCodeFromPlayer() override {
		return Code(0, 0, 0);
	}
};

class SameCodes : public CodeRepository {
public:
	virtual Code GetRandomCode(const int&) override {
		return Code(0, 0, 0);
	}

	virtual Code GetCodeFromPlayer() override {
		return Code(0, 0, 0);
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:
		TEST_METHOD(When_GetSecretCode_Then_CodeRepositoryCalled)
		{
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<DifferentCodes>();
			Assert::IsTrue(Code(-1, -1, -1) == GuessCode(RepositoryMock).GetSecretCode());
		}

		TEST_METHOD(When_GetPlayerCode_Then_CodeRepositoryCalled)
		{
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<DifferentCodes>();
			Assert::IsTrue(Code(0, 0, 0) == GuessCode(RepositoryMock).GetPlayerCode());
		}

		TEST_METHOD(Given_DifferentCodes_When_Guess_Then_ReturnFalse)
		{
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<DifferentCodes>();
			Assert::IsFalse(GuessCode(RepositoryMock).Guess());
		}

		TEST_METHOD(Given_SameCodes_When_Guess_Then_ReturnTrue)
		{
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<SameCodes>();
			Assert::IsTrue(GuessCode(RepositoryMock).Guess());
		}
	};
}