#define _CRT_SECURE_NO_WARNINGS

#include "Stack.h"

void bit::StackInit(ST* ps, int N)
{
	ps->a = (int*)malloc(sizeof(int) * N);

	ps->top = 0;
	ps->capacity = 0;
}

void bit::StackPush(ST* ps, int x)
{
	// ...
}

