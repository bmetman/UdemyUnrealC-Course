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

	virtual int AskPlayerForNumber() override {
		return 0;
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:
		TEST_METHOD(When_GetRandomCode_Then_CodeGatewayCalled)
		{
			std::shared_ptr<CodeGateway> GatewayMock = std::make_shared<CodeGatewayMock>();
			Assert::IsTrue(Code(-1, -1, -1) == CodeRepository(GatewayMock).GetRandomCode());
		}

		TEST_METHOD(When_GetCodeFromUserInput_Then_CodeGatewayCalled)
		{
			std::shared_ptr<CodeGateway> GatewayMock = std::make_shared<CodeGatewayMock>();
			Assert::IsTrue(Code(0, 0, 0) == CodeRepository(GatewayMock).GetCodeFromPlayer());
		}

		TEST_METHOD(Given_MaxMultipliedOf10_When_GetRandomCode_Then_CodeMultipliedLowerOrEqualThan27)
		{
			Assert::IsTrue(CodeRepository().GetRandomCode(10).GetMultipliedNumbers() <= 27);
		}
	};
}