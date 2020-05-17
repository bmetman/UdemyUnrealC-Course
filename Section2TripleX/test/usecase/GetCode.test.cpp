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

		TEST_METHOD(When_GetPlayerCode_Then_CodeRepositoryCalled)
		{
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<CodeRepositoryMock>();
			Assert::IsTrue(Code(0, 0, 0) == GetCode(RepositoryMock).GetPlayerCode());
		}
	};
}