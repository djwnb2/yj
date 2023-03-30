#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>


#define N 100
typedef int SQDataType;
typedef struct SeqList
{
	SQDataType* a;
	int size;//��Ч���ݵĸ���
	int cap;//�����ı���
}SeqList;
//��ɾ��ĵȽӿں���
void SeqlistInit(SeqList* ps);
void SeqListPrint(SeqList* ps);
void SeqListDestory(SeqList* ps);
//ͷ��
void SeqListPushBack(SeqList* ps, SQDataType x);
//β��
void SeqListPushFront(SeqList* ps, SQDataType x);
//ͷɾ
void SeqListPopBack(SeqList* ps);
//βɾ
void SeqListPopFront(SeqList* ps);
//
void SeqListInsert(SeqList* ps, int pos, SQDataType x);
void SeqlistRemove(SeqList* ps, int pos, SQDataType x);
int  SeqListFind(SeqList* ps, SQDataType x);
void SeqListModity(SeqList* ps,int pos ,SQDataType x);



