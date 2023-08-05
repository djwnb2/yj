#define _CRT_SECURE_NO_WARNINGS

#include"Date.h"

Date::Date(int year, int month, int day)
{
	_year = year;
	_month = month;
	_day = day;
	if (month < 1 || month>12
        ||day<1||day>GetMonthDay(year,month))
	   {
		cout << "非法日期“<<endl";
	   }
}
void Date:: Print() const
{
	cout << _year << "年" << _month << "月" << _day << "日" << endl;
}
bool Date::operator<(const Date& d)
{
	if (_year < d._day)
	{
		return true;
	}
	else if (_month < d._month)
	{
		return true;
	}
	else if (_day < d._day)
	{
		return true;
	}
	else
	{
		return false;
	}

}
bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}
//d1<=d2
bool Date::operator<=(const Date& d)
{
	return *this < d || *this == d;
}
bool Date::operator > (const Date& d)
{
	return !(*this <= d);
}
bool Date::operator>=(const Date& d)
{
	return !(*this < d);
}
bool Date::operator!=(const Date& d)
{
	return  !(*this == d);
}
int Date::GetMonthDay(int year, int month)
{
	const static int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		return 29;
	}
	return monthArray[month];

}
Date&Date:: operator+=(int day)
{
	if (day < 0)
	{
		return *this -= (-day);
	}
	_day += day;
	while (_day >GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}


	}
	return *this;
}

Date Date::operator+(int day)
{
	Date tmp(*this);
	tmp += day;
	return tmp;

}
Date& Date::operator-=(int day)
{
	if (day < 0)
	{
		return *this += (-day);
	}
	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			--_year;
			_month = 12;
		}
		_day += GetMonthDay(_year, _month);
	}
	return *this;
}
Date Date::operator-(int day)
{
	Date tmp(*this);
	tmp -= day;
	return tmp;
 }
Date& Date::operator++()
{
	*this+=1;
	return *this;
}
Date Date::operator++(int)
{
	Date tmp(*this);
	*this += 1;
	return tmp;
}


Date& Date::operator--()
{
	*this-= 1;
	return *this;
}
Date Date::operator--(int)
{
	Date tmp(*this);
	*this -= 1;
	return tmp;
}
//先看大小
int Date::operator-(const Date& d)
{
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d)
	{
		max = d;
		min = *this;
		flag = -1;

	}
	int n = 0;
	while (min != max)
	{
		min++;
		n++;
	}
	return n * flag;
}

ostream& operator<<(ostream& out, const Date& d)
{
	 out << d._year << "/" << d._month << "/" << d._day << endl;

	return out;
 }
istream& operator>>(istream& in, Date& d)
{
	in >> d._year >> d._month >> d._day;
	return in;
 }