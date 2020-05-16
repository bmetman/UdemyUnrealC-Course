#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/data/SecretCodeGateway.h"
#include "../../src/domain/SecretCodeRepository.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class SecretCodeGatewayMock : public SecretCodeGateway {
public:
	virtual int GenerateNumber(const int&, const int&) override {
		return -1;
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(When_GenerateSecretCode_Then_SecretCodeGatewayCalled)
		{
			std::shared_ptr<SecretCodeGateway> GatewayMock = std::make_shared<SecretCodeGatewayMock>();
			Assert::AreEqual(
				SecretCode(-1, -1, -1).GetSumOfNumbers(),
				SecretCodeRepository(GatewayMock).Get().GetSumOfNumbers()
			);
		}
	};
}