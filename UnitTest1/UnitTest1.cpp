#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_2Iterative.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestReverseOddSize)
		{
			int a[5] = { 1, 2, 3, 4, 5 };
			ReverseArray(a, 5);

			Assert::AreEqual(5, a[0]);
			Assert::AreEqual(4, a[1]);
			Assert::AreEqual(3, a[2]);
			Assert::AreEqual(2, a[3]);
			Assert::AreEqual(1, a[4]);
		}

		TEST_METHOD(TestReverseEvenSize)
		{
			int a[4] = { 1, 2, 3, 4 };
			ReverseArray(a, 4);

			Assert::AreEqual(4, a[0]);
			Assert::AreEqual(3, a[1]);
			Assert::AreEqual(2, a[2]);
			Assert::AreEqual(1, a[3]);
		}

		TEST_METHOD(TestReverseSingleElement)
		{
			int a[1] = { 7 };
			ReverseArray(a, 1);

			Assert::AreEqual(7, a[0]);
		}
	};
}