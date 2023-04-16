#include"SeqList.h"

//void SLInit(SL* psl)
//{
//	psl->a = NULL;
//	psl->capacity = 0;
//	psl->size = 0;
//}

void SLInit(SL* psl)
{
	psl->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);
	if (psl->a == NULL)
	{
		perror("malloc fail");
		return;
	}

	psl->capacity = 4;
	psl->size = 0;
}

void SLDestroy(SL* psl)
{
	free(psl->a);
	psl->a = NULL;
	psl->size = 0;
	psl->capacity = 0;
}

void SLPrint(SL* psl)
{
	for (int i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->a[i]);
	}
	printf("\n");
}

void SLCheckCapacity(SL* psl)
{
	if (psl->size == psl->capacity)
	{
		SLDatatype* tmp = (SLDatatype*)realloc(psl->a, sizeof(SLDatatype) * psl->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}

		psl->a = tmp;
		psl->capacity *= 2;
	}
}

void SLPushBack(SL* psl, SLDatatype x)
{
	//psl->a[psl->size] = x;
	//psl->size++;

	SLCheckCapacity(psl);

	psl->a[psl->size++] = x;
}

void SLPushFront(SL* psl, SLDatatype x)
{
	SLCheckCapacity(psl);
	int end = psl->size - 1;
	while (end>=0)
	{
		psl->a[end + 1] = psl->a[end - 1];
		end--;
	}
	psl->a[0] = x;
	psl->size++;

}
void SLPopBack(SL* psl)
{
	assert(psl > 0);
	psl->size--;

}
void SLPopFront(SL* psl)
{
	int start = 1;
	while (start < psl->size)
	{
		psl->a[start - 1] = psl->a[start];
		start++;
		
	}
	psl->size--;
}
