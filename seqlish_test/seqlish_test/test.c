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
	SeqListPopBack(&s1);
	SeqListPrint(&s1);
}
int main()
{
	TestSeqList();

}


