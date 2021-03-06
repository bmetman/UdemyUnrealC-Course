#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/data/ParseInput.h"
#include "../../src/data/CodeGateway.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

class ParseInputMock : public ParseInput {
public:
	std::string GetUserInput() override {
		return "input";
	}

	std::optional<int> ParseInt(std::string input) override {
		return -1;
	}
};

namespace test
{
	TEST_CLASS(test)
	{
	public:
		TEST_METHOD(Given_RangeBetween1And2_When_GenerateRandomNumber_Then_ReturnIntBetween1And2)
		{
			Assert::IsTrue(CodeGateway().GenerateNumber(1, 2) > 0);
			Assert::IsTrue(CodeGateway().GenerateNumber(1, 2) < 3);
		}

		TEST_METHOD(When_AskPlayerForNumber_Then_ParseInputCalled)
		{
			std::shared_ptr<ParseInput> parseInput = std::make_shared<ParseInputMock>();
			Assert::AreEqual(-1, CodeGateway(parseInput).AskPlayerForNumber());
		}
	};
}