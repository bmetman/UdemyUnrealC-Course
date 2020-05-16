#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/domain/CodeRepository.h"
#include "../../src/usecase/GetCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class CodeRepositoryMock : public CodeRepository {
public:
	virtual Code Get() override {
		return Code(-1, -1, -1);
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(When_GenerateCode_Then_CodeRepositoryCalled)
		{
			std::shared_ptr<CodeRepository> RepositoryMock = std::make_shared<CodeRepositoryMock>();
			Assert::AreEqual(
				Code(-1, -1, -1).GetSumOfNumbers(),
				GetCode(RepositoryMock).Generate().GetSumOfNumbers()
			);
		}
	};
}