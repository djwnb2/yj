#define _CRT_SECURE_NO_WARNINGS

#include"Heap.h"
//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	int a[] = { 65,100,70,32,50,60 };
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		printf("%d ", hp.a[i]);
//	}
//
//	return 0;
//}
//过于繁琐的方法
void HeapSort(int* a, int n)
{
	HP hp;
	HeapInit(&hp);
	for (int i = 0; i < n; ++i)
	{
		HeapPush(&hp, a[i]);
	}

	
	int i = 0;
	while (!HeapEmpty(&hp))
	{
		int top = HeapTop(&hp);
		a[i++] = top;
		HeapPop(&hp);
	}
}

//int main()
//{
//	HP hp;
//	HeapInit(&hp);
//	int a[] = { 65,100,70,32,50,60 };
//	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
//	{
//		HeapPush(&hp, a[i]);
//	}
//
//	// 10:42继续
//	while (!HeapEmpty(&hp))
//	{
//		int top = HeapTop(&hp);
//		printf("%d\n", top);
//		HeapPop(&hp);
//	}
//
//	return 0;
//}
int main()
{
	int a[] = { 65,100,70,32,50,60 };
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	int i = 0;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d\n", a[i]);
	}
}