#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#include"seqlist.h"
void TestSeqList()
{
	SeqList s1;
	SeqlistInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushFront(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPopFront(&s1);
	SeqListPopBack(&s1);

	SeqListInsert(&s1, 2, 2);
	SeqlistRemove(&s1, 2, 2);
	SeqListPrint(&s1);
	SeqListDestory(&s1);
}
int main()
{
	TestSeqList();

}


