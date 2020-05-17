#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/domain/CodeRepository.h"
#include "../../src/usecase/GetCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class CodeRepositoryMock : public CodeRepository {
public:
	virtual Code GetRandomCode(const int&) override {
		return Code(-1, -1, -1);
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
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<CodeRepositoryMock>();
			Assert::IsTrue(Code(-1, -1, -1) == GetCode(RepositoryMock).GetSecretCode());
		}

		TEST_METHOD(Given_Difficulty1_When_GetSecretCode_Then_SecretCodeMultipliedLowerThanEqualTo25)
		{
			Assert::IsTrue(GetCode().GetSecretCode(1).GetMultipliedNumbers() <= 25);
		}

		TEST_METHOD(Given_Difficulty2_When_GetSecretCode_Then_SecretCodeMultipliedLowerThanEqualTo50)
		{
			Assert::IsTrue(GetCode().GetSecretCode(2).GetMultipliedNumbers() <= 50);
		}

		TEST_METHOD(Given_Difficulty3_When_GetSecretCode_Then_SecretCodeMultipliedLowerThanEqualTo100)
		{
			Assert::IsTrue(GetCode().GetSecretCode(3).GetMultipliedNumbers() <= 100);
		}

		TEST_METHOD(Given_Difficulty4_When_GetSecretCode_Then_SecretCodeMultipliedLowerThanEqualTo150)
		{
			Assert::IsTrue(GetCode().GetSecretCode(4).GetMultipliedNumbers() <= 150);
		}

		TEST_METHOD(Given_Difficulty5_When_GetSecretCode_Then_SecretCodeMultipliedLowerThanEqualTo200)
		{
			Assert::IsTrue(GetCode().GetSecretCode(5).GetMultipliedNumbers() <= 200);
		}


		TEST_METHOD(When_GetPlayerCode_Then_CodeRepositoryCalled)
		{
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<CodeRepositoryMock>();
			Assert::IsTrue(Code(0, 0, 0) == GetCode(RepositoryMock).GetPlayerCode());
		}
	};
}