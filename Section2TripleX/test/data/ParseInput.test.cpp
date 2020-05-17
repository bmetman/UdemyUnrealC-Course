#include "../pch.h"
#include "CppUnitTest.h"
#include "../../src/data/ParseInput.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(Given_InputIsValidInt_When_ParseInt_Then_ReturnInt)
		{
			Assert::AreEqual(10, ParseInput().ParseInt("10").value());
		}

		TEST_METHOD(Given_InputIsInvalidInt_When_ParseInt_Then_ReturnNullopt)
		{
			Assert::IsFalse(ParseInput().ParseInt("ten").has_value());
		}
	};
}
