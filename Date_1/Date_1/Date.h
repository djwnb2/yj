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

	// ��������
	// ���������
	// ++d1 -> d1.operator++()
	Date& operator++();

	// d1++ -> d1.operator++(0)
	// ��һ��int����������ռλ����ǰ��++���ɺ������ؽ�������
	// ���ʺ���++���ã��������������⴦��
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	int operator-(const Date& d);
private:
	int _year;
	int _month;
	int _day;
};