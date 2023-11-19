#define _CRT_SECURE_NO_WARNINGS
#include"BInarySearchTree.h"
int main()
{
	int a[] = { 8, 3, 1, 10, 6, 4, 7, 14, 13 };
	BSTree<int> bt;
	for (auto e : a)
	{
		bt.Insert(e);
	}
	bt.InOrder();
	bt.Insert(2);
	bt.InOrder();
	bt.Erase(1);
	bt.InOrder();



	return 0;
}