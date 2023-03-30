#define _CRT_SECURE_NO_WARNINGS
#include"seqlist.h"
void SeqlistInit(SeqList* ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->cap = 0;


}
void CheckCap(SeqList* ps)
{
	if (ps->size == ps->cap)
	{
		int newcapacity = ps->cap == 0 ? 4 : ps->cap * 2;
		SQDataType* tmp = (SQDataType*)realloc(ps->a, newcapacity * 2 * sizeof(SQDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->cap = newcapacity;
		}
	}

}
//Î²²å
void SeqListPushBack(SeqList* ps, SQDataType x)
{
	CheckCap(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPrint(SeqList* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d\n", ps->a[i]);
	}
}
//Í·²å
void SeqListPushFront(SeqList* ps, SQDataType x)
{
	CheckCap(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];

		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
//Î²É¾
void SeqListPopBack(SeqList* ps)
{
	assert(ps->size > 0);
	ps->size--;
}
//Í·É¾ ´ÓÇ°ÍùºóÅ²
void SeqListPopFront(SeqList* ps)
{
	int start = 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;
}
void SeqListInsert(SeqList* ps, int pos, SQDataType x)
{
	assert(pos < ps->size);
	CheckCap(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqlistRemove(SeqList* ps, int pos, SQDataType x)
{
	assert(pos <ps->size );
	CheckCap(ps);//À©ÈÝ
	int start = pos + 1;
	while (start < ps->size)
	{
		ps->a[start - 1] = ps->a[start];
		start++;
	}
	ps->size--;

}

void SeqListDestory(SeqList* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->cap = 0;
}

int  SeqListFind(SeqList* ps, SQDataType x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void SeqListModity(SeqList* ps,int pos, SQDataType x)
{
	assert(pos < ps->size);
	ps ->a[pos] = x;
}
