#define _CRT_SECURE_NO_WARNINGS

#include"Date.h"
void TestDate4()
{
	Date d1(2023, 7, 27);
	d1 -= 20000;
	d1.Print();

	Date d2(2023, 7, 27);
	d2 += -200;
	d2.Print();

	Date d3(2023, 7, 27);
	d3 -= -200;
	d3.Print();
}

void TestDate5()
{
	Date d1(2023, 7, 27);
	d1++;
	d1.Print();
}
void TestDate6()
{
	Date d1(2023, 7, 27);
	Date d2(2003, 1, 1);

	cout << d1 - d2 << endl;
}
void TestDate7()
{
	Date d1(2023, 7, 1);
	cout << d1;
}
int main()
{
	TestDate7();
	return 0;
}