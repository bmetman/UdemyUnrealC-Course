#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/data/CodeGateway.h"
#include "../../src/domain/CodeRepository.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class CodeGatewayMock : public CodeGateway {
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

		TEST_METHOD(When_GenerateCode_Then_CodeGatewayCalled)
		{
			std::shared_ptr<CodeGateway> GatewayMock = std::make_shared<CodeGatewayMock>();
			Assert::AreEqual(
				Code(-1, -1, -1).GetSumOfNumbers(),
				CodeRepository(GatewayMock).Get().GetSumOfNumbers()
			);
		}
	};
}