#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

LTNode* LTInit();
void LTPrint(LTNode* phead);

bool LTEmpty(LTNode* phead);
void LTPushBack(LTNode* phead, LTDataType x);
void LTPushFront(LTNode* phead, LTDataType x);
void LTPopBack(LTNode* phead);
void LTPopFront(LTNode* phead);

LTNode* LTFind(LTNode* phead, LTDataType x);

// 在pos之前插入
void LTInsert(LTNode* pos, LTDataType x);
// 删除pos位置的值
void LTErase(LTNode* pos);
void LTDestroy(LTNode* phead);
