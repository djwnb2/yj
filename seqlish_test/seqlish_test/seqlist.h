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
	int size;//有效数据的个数
	int cap;//容量的变量
}SeqList;
//增删查改等接口函数
void SeqlistInit(SeqList* ps);
void SeqListPrint(SeqList* ps);
void SeqListDestory(SeqList* ps);
//头插
void SeqListPushBack(SeqList* ps, SQDataType x);
//尾插
void SeqListPushFront(SeqList* ps, SQDataType x);
//头删
void SeqListPopBack(SeqList* ps);
//尾删
void SeqListPopFront(SeqList* ps);
//
void SeqListInsert(SeqList* ps, int pos, SQDataType x);
void SeqlistRemove(SeqList* ps, int pos, SQDataType x);
int  SeqListFind(SeqList* ps, SQDataType x);
void SeqListModity(SeqList* ps,int pos ,SQDataType x);



