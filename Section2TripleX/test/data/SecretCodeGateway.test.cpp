#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/data/SecretCodeGateway.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:
		TEST_METHOD(Given_RangeBetween1And2_When_GenerateRandomNumber_Then_ReturnIntBetween1And2)
		{
			Assert::IsTrue(SecretCodeGateway().GenerateNumber(1, 2) > 0);
			Assert::IsTrue(SecretCodeGateway().GenerateNumber(1, 2) < 3);
		}
	};
}