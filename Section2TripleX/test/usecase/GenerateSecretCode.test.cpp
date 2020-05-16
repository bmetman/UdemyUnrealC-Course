#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/domain/SecretCode.h"
#include "../../src/domain/SecretCodeRepository.h"
#include "../../src/usecase/GenerateSecretCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class SecretCodeRepositoryMock : public SecretCodeRepository {
public:
	virtual SecretCode Get() override {
		return SecretCode(-1, -1, -1);
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(When_GenerateSecretCode_Then_SecretCodeRepositoryCalled)
		{
			std::shared_ptr<SecretCodeRepository> RepositoryMock = std::make_shared<SecretCodeRepositoryMock>();
			Assert::AreEqual(
				SecretCode(-1, -1, -1).GetSumOfNumbers(),
				GenerateSecretCode(RepositoryMock).Generate().GetSumOfNumbers()
			);
		}
	};
}