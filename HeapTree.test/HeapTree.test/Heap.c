#define _CRT_SECURE_NO_WARNINGS

#include"Heap.h"

void HeapInit(HP* php)
{
	assert(php);

	php->a = (HPDataType*)malloc(sizeof(HPDataType) * 4);
	if (php->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	php->size = 0;
	php->capacity = 4;
}
void HeapDestroy(HP* php)
{
	assert(php);
	free(php->a);
	php->a = NULL;
	php->size = 0;
	php->capacity = 0;
}

void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType x = *p1;
	*p1 = *p2;
	*p2 = x;
}
void AdjustUp(HPDataType* nums,int child)
{
	int parent = (child - 1) / 2;
	while (child>0)
	{
		if (nums[child] < nums[parent])
		{
			Swap(&nums[child], &nums[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
bool HeapEmpty(HP* php)
{
	assert(php);
	return php->size == 0;
}
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child<n)
	{
		if (a[child] > a[child + 1]&&child+1<n)
		{
			++child;
		}
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapPop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;
	AdjustDown(php->a, php->size, 0);
}


HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(!HeapEmpty(php));
	return php->a[0];
}


void HeapPush(HP* php, HPDataType x)
{
	assert(php);
	if (php->capacity == php->size)
	{
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * php->capacity * 2);
	
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		php->a = tmp;
		php->capacity *= 2;
	}
	php->a[php->size++] = x;
	AdjustUp(php->a, php->size - 1);
	
}  
int HeapSize(HP* php)
{
	assert(php);
	return php->size;

}