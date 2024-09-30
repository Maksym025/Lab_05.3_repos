#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.3/Lab_05.3.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double k(const double x);
			int z = 3;
			double m = k(pow(z, 2) + 1) - k(pow(z, 2) - 1) + 2 * k(z);
		    Assert::AreEqual(m, 10026 , 0.1);
		}
	};
}
