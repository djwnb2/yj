#define _CRT_SECURE_NO_WARNINGS
//20. 有效的括号
typedef char STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
} ST;

void StackInit(ST* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->capacity = 4;
	ps->top = 0;
}

void StackDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)
{
	assert(ps);
	if (ps->top > 0)
		ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	if (ps->top > 0)
		return ps->a[ps->top - 1];
	return 0;  // 或者根据具体情况返回一个默认值
}

int StackSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

bool isValid(char* s)
{
	ST st;
	StackInit(&st);

	while (*s != '\0')
	{
		if (*s == '{' || *s == '[' || *s == '(')
		{
			StackPush(&st, *s);
		}
		else
		{
			if (StackEmpty(&st))
			{
				StackDestroy(&st);
				return false;
			}
			char top = StackTop(&st);
			StackPop(&st);
			if ((top == '{' && *s != '}') || (top == '[' && *s != ']') || (top == '(' && *s != ')'))
			{
				StackDestroy(&st);
				return false;
			}
		}
		s++;
	}

	bool ret = StackEmpty(&st);
	StackDestroy(&st);
	return ret;
}