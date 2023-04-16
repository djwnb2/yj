#define _CRT_SECURE_NO_WARNINGS
#include "SeqList.h"

int main()
{
	SL s;
	SLInit(&s);
	SLPushBack(&s, 1);
	SLPushBack(&s, 2);
	SLPopFront(&s);
	SLPrint(&s);

	SLDestroy(&s);

	return 0;
}