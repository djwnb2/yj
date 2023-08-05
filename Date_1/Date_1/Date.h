#define _CRT_SECURE_NO_WARNINGS

#pragma once

#include<iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d);
	friend istream& operator>>(istream& in, Date& d);
public:
	int GetMonthDay(int year, int month);
	Date(int year = 1, int month = 1, int day = 1);
	void Print() const;

	bool operator<(const Date& d);
	bool operator==(const Date& d);
	bool operator<=(const Date& d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);
	bool operator!=(const Date& d);

	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);

	// 函数重载
	// 运算符重载
	// ++d1 -> d1.operator++()
	Date& operator++();

	// d1++ -> d1.operator++(0)
	// 加一个int参数，进行占位，跟前置++构成函数重载进行区分
	// 本质后置++调用，编译器进行特殊处理
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	int operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};