#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>
//int main()
//{
//
//	int a = 0;
//	int* p1 = &a;
//	int& ref = a;
//
//	++(*p1);
//	++ref;
//
//	return 0;
//}


inline int func()
{
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	int x4 = 0;

	int ret = 0;
	ret += x1;
	ret /= x1;
	ret /= x1; ret /= x1; ret /= x1;


	return ret;
}


//int main()
//{
//	int array[] = { 1, 2, 3, 4, 5 };
//
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//		array[i] *= 2;
//
//	for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
//		cout << array[i] << " ";
//	cout << endl;
//
//
//	for (auto&x : array)
//	{
//		x *= 2;
//	}
//		for (auto e : array)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//}

class stack
{

public:
	
		void Init()
		{
			a = nullptr;
			top = -1;

		}
private:
		int* a;
		int top;
		int cap;
	
};
	
class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year;  // year_  mYear
	int _month;
	int _day;
};

int main()
{
	struct stack st2;
	stack st2;
}