#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"


#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SLPushFront(&plist, 1);
	SLPushFront(&plist, 2);
	SLPushFront(&plist, 3);
	SLPushFront(&plist, 4);

	SLTPrint(plist);
}

void Swapi(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void Swappi(int** pp1, int** pp2)
{
	int* tmp = *pp1;
	*pp1 = *pp2;
	*pp2 = tmp;
}

int main()
{
	TestSList1();

	int a = 0, b = 1;
	Swapi(&a, &b);

	int* px = &a, * py = &b;
	Swappi(&px, &py);

	return 0;
}