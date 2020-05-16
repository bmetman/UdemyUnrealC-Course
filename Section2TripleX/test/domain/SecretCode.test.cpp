#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/domain/SecretCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(Given_SecretCode_When_GetMultipliedNumbers_Then_ReturnMultiplicationOfAllNumbers)
		{
			Assert::AreEqual(24, SecretCode(2, 3, 4).GetMultipliedNumbers());
		}

		TEST_METHOD(Given_SecretCode_When_GetSumOfNumbers_Then_ReturnSumOfAllNumbers)
		{
			Assert::AreEqual(9, SecretCode(2, 3, 4).GetSumOfNumbers());
		}
	};
}