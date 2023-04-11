#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
typedef int SLTDataType;

struct SListNode
{
	SLTDataType data;
	struct SListNode* Next;


  };
typedef struct SListNode SLTNode;
void SListPushPrint(SLTNode* phead, SLTDataType x);
void SListPushBack(SLTNode*phead,SLTDataType x);
void SListPushFront(SLTNode* phead, SLTDataType x);