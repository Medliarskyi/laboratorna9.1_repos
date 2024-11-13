#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.1/var.h"
#include "../lab9.1/sum.h"
#include "../lab9.1/dod.h"
#include "../lab9.1/sum.cpp"
#include "../lab9.1/var.cpp"
#include "../lab9.1/dod.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
	TEST_CLASS(UnitTest91)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			nsVar::x = 1.2;
			nsVar::e = 0.0005;

			// Виклик функції обчислення суми
			nsSum::sum();

			// Перевірка значення змінної s для іншого діапазону
			Assert::AreEqual(0.875894, nsVar::s, 0.0005);
		}
	};
}
