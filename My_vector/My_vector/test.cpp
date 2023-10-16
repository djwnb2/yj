#define _CRT_SECURE_NO_WARNINGS

#include<iostream>;
#include<vector>
using namespace std;

#include"vector.h"
void func(const bit::vector<int>& lt)
{
	bit::vector<int>::const_reverse_iterator rit = lt.rbegin();
	while (rit != lt.rend())
	{
		//*rit += 1;

		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}
int main()
{
	bit::vector<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_back(5);

	bit::vector<int>::iterator it = lt.begin();
	while (it != lt.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	bit::vector<int>::reverse_iterator rit = lt.rbegin();
	while (rit != lt.rend())
	{
		*rit += 1;

		cout << *rit << " ";
		++rit;
	}
	cout << endl;

	//func(lt);

	//const A& r =  A(1);
	//A(1).Print(); // ÌØÊâ´¦Àí

	//int a = 10;
	//--a;
	//a - 1;

	//--10;
	//10 - 1;

	return 0;
}