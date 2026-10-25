#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.2_it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void findMinMax(const int a[], int n, int& iMin, int& iMax);

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMinMax)
        {
            int a[] = { 8, 3, 15, 6, 1 };
            int iMin, iMax;

            findMinMax(a, 5, iMin, iMax);

            Assert::AreEqual(4, iMin);
            Assert::AreEqual(2, iMax);
        }

        TEST_METHOD(TestEqual)
        {
            int a[] = { 5, 5, 5, 5 };
            int iMin, iMax;

            findMinMax(a, 4, iMin, iMax);

            Assert::AreEqual(0, iMin);
            Assert::AreEqual(0, iMax);
        }

        TEST_METHOD(TestNegative)
        {
            int a[] = { -3, -10, -1, -7 };
            int iMin, iMax;

            findMinMax(a, 4, iMin, iMax);

            Assert::AreEqual(1, iMin);
            Assert::AreEqual(2, iMax);
        }
    };
}