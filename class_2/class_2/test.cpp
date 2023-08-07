#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<assert.h>
using namespace std;

class Date
{
public:
	/*Date(int year = 1, int month = 1, int day = 1)
	{
		cout << "Date(int year = 1, int month = 1, int day = 1)" << endl;

		_year = year;
		_month = month;
		_day = day;
	}*/

	Date()
	{
		_month = 2;
		_day = 2;
	}

	void Print()
	{
		//cout << this << endl;

		cout << _year << "/" << _month << "/" << _day << endl;
	}

	~Date()
	{
		cout << "~Date()" << endl;
	}

private:
	int _year = 1;   // 声明给的缺省值
	int _month = 1;
	int _day = 1;
};

int main()
{
	Date t1;
	t1.Print();
	

}