#define _CRT_SECURE_NO_WARNINGS

#include"Sort.h"
#include<time.h>

void TestInsertSort()
{
	//int a[] = { 4,7,1,9,3,4,5,8,3,2 };
	int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
	PrintArray(a, sizeof(a) / sizeof(int));
	InsertSort(a, sizeof(a) / sizeof(int));
	PrintArray(a, sizeof(a) / sizeof(int));
}

//void TestBubbleSort()
//{
//	int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//	BubbleSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}
//
//void TestSelectSort()
//{
//	//int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
//	int a[] = { 9,7,1,3,3,0,5,8,3,2,3 };
//	PrintArray(a, sizeof(a) / sizeof(int));
//	SelectSort(a, sizeof(a) / sizeof(int));
//	PrintArray(a, sizeof(a) / sizeof(int));
//}

void TestQuickSort()
{
	//int a[] = { 4,7,1,9,3,6,5,8,3,2,0 };
	int a[] = { 6,1,2,7,9,3,4,5,10,8 };

	
	QuickSort(a, 0, sizeof(a) / sizeof(int) - 1);
	PrintArray(a, sizeof(a) / sizeof(int));
}

//void TestOP()
//{
//	srand(time(0));
//	const int N = 100000;
//	int* a1 = (int*)malloc(sizeof(int) * N);
//	int* a2 = (int*)malloc(sizeof(int) * N);
//	int* a3 = (int*)malloc(sizeof(int) * N);
//	int* a4 = (int*)malloc(sizeof(int) * N);
//	int* a5 = (int*)malloc(sizeof(int) * N);
//	int* a6 = (int*)malloc(sizeof(int) * N);
//
//	for (int i = 0; i < N; ++i)
//	{
//		a1[i] = rand();
//		a2[i] = a1[i];
//		a3[i] = a1[i];
//		a4[i] = a1[i];
//		a5[i] = a1[i];
//		a6[i] = a1[i];
//	}
//
//	int begin1 = clock();
//	InsertSort(a1, N);
//	int end1 = clock();
//
//	int begin2 = clock();
//	ShellSort(a2, N);
//	int end2 = clock();
//
//	int begin3 = clock();
//	BubbleSort(a3, N);
//	int end3 = clock();
//
//	int begin4 = clock();
//	SelectSort(a4, N);
//	int end4 = clock();
//
//	printf("InsertSort:%d\n", end1 - begin1);
//	printf("ShellSort:%d\n", end2 - begin2);
//	printf("BubbleSort:%d\n", end3 - begin3);
//	printf("SelcetSort:%d\n", end4 - begin4);
//
//	free(a1);
//	free(a2);
//	free(a3);
//	free(a4);
//	free(a5);
//	free(a6);
//}

int main()
{
	//TestInsertSort();
	//TestShellSort();
	//TestBubbleSort();
	//TestSelectSort();
	
	TestQuickSort();


	return 0;
}
