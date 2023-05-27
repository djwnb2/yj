#define _CRT_SECURE_NO_WARNINGS
#include"Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->phead = NULL;
	pq->ptail = NULL;
	pq->size = 0;
}

void QueueDestory(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->phead;
	while (cur)
	{
		QNode* Next = cur->next;
		free(cur);
		cur = Next;
	}
	pq->phead = pq->ptail = NULL;
	pq->size = 0;
}

// 队尾入
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		perror("malloc fail\n");
		return;
	}
	newnode->data = x;
	newnode->next = NULL;
	if (pq->ptail == NULL)
	{
		assert(pq->phead == NULL);
		pq->phead = newnode;
		pq->ptail = newnode;
	}
	else
	{
		pq->ptail->next = newnode;
		pq->ptail = newnode;
	}
	pq->size++;
}

// 队头出
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	QNode* oldHead = pq->phead;
	pq->phead = pq->phead->next;
	free(oldHead);
	if (pq->phead == NULL)
		pq->ptail = NULL;
	pq->size--;
}

QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->phead);
	return pq->phead->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->ptail);
	return pq->ptail->data;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->phead;
	while (cur)
	{
		cur = cur->next;
		size++;
	}
	return size;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->phead == NULL;
}
