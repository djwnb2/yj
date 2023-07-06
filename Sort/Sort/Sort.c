#define _CRT_SECURE_NO_WARNINGS

#include "Sort.h"

void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}

		a[end + 1] = tmp;
	}
}


void ShellSort(int* a, int n)
{
	int gap = 3;
	for (int j = 0; j < gap; j++)
	{
		for (int i = j; i < n - gap; i+=gap)
		{

			int end = 0;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
				a[end + gap] = tmp;
			}
		}
		 
	}

}

void HeapSort(int* a, int n);
void SelectSort(int* a, int n);
void BubbleSort(int* a, int n);
void QuickSort(int* a, int begin, int end);