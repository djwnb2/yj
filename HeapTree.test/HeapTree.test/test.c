#define _CRT_SECURE_NO_WARNINGS

#include"Heap.h"
int main()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 65,100,70,32,50,60 };
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		HeapPush(&hp, a[i]);
	}
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d ", hp.a[i]);
	}

	return 0;
}