#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <stdlib.h>
typedef int STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
// ��ջ
void StackPush(ST* ps, STDataType x);
// ��ջ
void StackPop(ST* ps);
STDataType StackTop(ST* ps);

int StackSize(ST* ps);
bool StackEmpty(ST* ps);