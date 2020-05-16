#include "pch.h"
#include "CppUnitTest.h"
#include "../Randomize.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:

		TEST_METHOD(Given_RangeBetween1And2_When_GenerateRandomInt_Then_ReturnIntBetween1And2)
		{
			Assert::IsTrue(Randomize().GenerateRandomInt(1, 2) > 0);
			Assert::IsTrue(Randomize().GenerateRandomInt(1, 2) < 3);
		}
	};
}
