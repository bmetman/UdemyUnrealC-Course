#include "pch.h"
#include "CppUnitTest.h"
#include "../MultiplyCode.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(20, MultiplyCode::Multiply(10, 2));
		}
	};
}
