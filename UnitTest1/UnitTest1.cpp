#include "pch.h"
#include "CppUnitTest.h"
#include "../Algorythmization Lab 05_3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1;
			double resTest = 0;

			if (fabs(x) >= 1)
				resTest = (sin(x) + 1) / (1 + cos(x));
			else if (fabs(x) < 1) {
				double sum = 0;

				int i = 0;
				int a = 1;
				do {
					i++;
					a *= x / ((2 * i + 2) * (2 * i + 1));
					sum += a;
				} while (i <= 5);
				resTest = sum;
			}

			Assert::AreEqual(h(x), resTest);
		}

	};
}
