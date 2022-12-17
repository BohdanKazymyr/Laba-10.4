#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 10.4/Laba 10.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[100];
			CreateTXT(fname);
			PrintTXT(fname);
			int k = 0;
			int j = 0;
			int o = 0;
			Calc(fname, k, j, o);
		}
	};
}
