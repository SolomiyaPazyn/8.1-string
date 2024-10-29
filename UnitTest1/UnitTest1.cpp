#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 8.1 string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string test = "Hello,- World";
			string expected = "Hello* World";
			Replace(test);
			Assert::AreEqual(expected, test);
		}
	};
}
