#define _CRT_SECURE_NO_WARNINGS
#include"List.h"

LTNode* BuyLTNode(LTDataType x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	if (newnode == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(-1);
	phead->next = phead;
	phead->prev = phead;

	return phead;
}

void LTPrint(LTNode* phead)
{
	assert(phead);
	printf("List<==>");
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d<==>", cur->data);
		cur = cur->next;

	}
	printf("List\n");
}

void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	LTNode* tail = phead->prev;
	LTNode* newnode = BuyLTNode(x);

	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = phead;
	phead->prev = newnode;
}
void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* newnode = BuyLTNode(x);
	newnode->next = phead->next;
	phead->next->prev = newnode;
	phead->next = newnode;
	newnode->prev = phead;
}
bool LTEmpty(LTNode* phead)
{
	assert(phead);
	return phead->next == phead;
}

void LTPopBack(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));
	LTNode* tail = phead->prev;
	LTNode* tailprev = tail->prev;
	free(tail);
	tailprev->next = phead;
	phead->prev = tailprev;
}
void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(!LTEmpty(phead));
	LTNode* head = phead->next;
	LTNode* Next = head->next;
	free(head);
	Next->prev = phead;
	phead->next = Next;
}

LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* Next = phead->next;
	while (Next != phead)
	{
		if (Next->data == x)
		{
			return Next;
		}
		Next = Next->next;
	}
	return NULL;
}

void LTInsert(LTNode* pos, LTDataType x)
{
	LTNode* before = pos->prev;
	LTNode* newnode = BuyLTNode(x);
	before->next = newnode;
	newnode->prev = before;
	newnode->next = pos;
	pos->prev = newnode;

}
void LTErase(LTNode* pos)
{
	assert(pos);
	LTNode* before = pos->prev;
	LTNode* behind = pos->next;
	free(pos);
	before = behind->prev;
	behind = before->next;
}

void LTDestroy(LTNode* phead)
{
	assert(phead);

	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}


	free(phead);
}
