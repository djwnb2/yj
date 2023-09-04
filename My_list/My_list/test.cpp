#define _CRT_SECURE_NO_WARNINGS

#include<assert.h>
#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
using namespace std;
#include"list.h"
void test_List1()
{
	list<int> s1;
	s1.push_back(1);
	s1.push_back(1);
	s1.push_back(1);
	list<int>::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : s1)
	{
		cout << e << " ";
	}
	cout << endl;
}
void test_list2()
{
	list<int> lt;
	lt.push_back(1);
	lt.push_back(2);
	lt.push_back(3);
	lt.push_back(4);
	lt.push_back(5);

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//lt.reverse();

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;

	//sort(lt.begin(), lt.end());

	//  < less
	//lt.sort(); 
	//  > greater
	//greater<int> gt;
	//lt.sort(gt);
	lt.sort(greater<int>());

	for (auto e : lt)
	{
		cout << e << " ";
	}
	cout << endl;
}

void test_list3()
{
	list<int> s1;
	s1.push_back(1);
	s1.push_back(1); 
	s1.push_back(1);
	s1.push_back(1);
	for (auto e: s1)
	{
		cout << e << " ";

	}
	s1.unique();
	for (auto e : s1)
	{
		cout << e << " ";

	}
	//splice ½«Ò»¸ö

}
void test_op()
{
	srand(time(0));
	const int N = 10000;

	list<int> lt1;
	list<int> lt2;

	for (int i = 0; i < N; ++i)
	{
		auto e = rand();
		lt1.push_back(e);
		lt2.push_back(e);
	}

	int begin1 = clock();
	// vector

	vector<int> v(lt2.begin(), lt2.end());
	// 
	sort(v.begin(), v.end());

	// lt2
	lt2.assign(v.begin(), v.end());

	int end1 = clock();

	int begin2 = clock();
	lt1.sort();
	int end2 = clock();

	printf("list copy vector sort copy list sort:%d\n", end1 - begin1);
	printf("list sort:%d\n", end2 - begin2);
}

int main()
{
	yj::test_list4();

}