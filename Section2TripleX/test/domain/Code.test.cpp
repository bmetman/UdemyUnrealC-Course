#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/domain/Code.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(Given_Code_When_GetMultipliedNumbers_Then_ReturnMultiplicationOfAllNumbers)
		{
			Assert::AreEqual(24, Code(2, 3, 4).GetMultipliedNumbers());
		}

		TEST_METHOD(Given_SecretCode_When_GetSumOfNumbers_Then_ReturnSumOfAllNumbers)
		{
			Assert::AreEqual(9, Code(2, 3, 4).GetSumOfNumbers());
		}

		TEST_METHOD(Given_TwoCodesWithSameAmountOfNumbers_WhenCompare_Then_ReturnTrue)
		{
			Assert::IsTrue(Code(2, 3, 4) == Code(4, 3, 2));
		}

		TEST_METHOD(Given_TwoDifferentCodes_WhenCompare_Then_ReturnFalse)
		{
			Assert::IsFalse(&Code(2, 3, 3) == &Code(2, 3, 4));
		}

		TEST_METHOD(Given_Code_When_ToStream_Then_CorrectFormat)
		{
			std::ostringstream ss;
			ss << Code(1, 2, 3);
			Assert::AreEqual("1 2 3", ss.str().c_str());
		}
	};
}