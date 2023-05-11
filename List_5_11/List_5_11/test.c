#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include"List.h"

void TestList1()
{
	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushFront(plist, 1);
	//LTPopFront(plist);
	LTPrint(plist);
	LTDestroy(plist);
	plist = NULL;
}


void TestList3()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 1);
	LTPushFront(plist, 2);
	LTPushFront(plist, 3);
	LTPushFront(plist, 4);
	LTPrint(plist);

	LTNode* pos = LTFind(plist, 3);
	if (pos)
	{
		LTInsert(pos, 30);
	}
	LTPrint(plist);

}
int main()
{
	//TestList1();
	TestList3();
	return 0;
}
