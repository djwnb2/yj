#define _CRT_SECURE_NO_WARNINGS

#include<stdlib.h>

#pragma once

#include<stdlib.h>

namespace bit
{
	/*void StackInit()
	{
		cout << "void StackInit()" << endl;
	}

	namespace bit2
	{
		int rand = 0;
	}*/

	typedef struct Stack
	{
		int* a;
		int top;
		int capacity;
	}ST;

	// �����������Ͷ���ͬʱ��ȱʡ����
	// �����������岻��
	void StackInit(ST* ps, int N = 4);
	void StackPush(ST* ps, int x);
}