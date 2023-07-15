#define _CRT_SECURE_NO_WARNINGS

#include "Sort.h"
#include"Stack.h"

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


//void ShellSort(int* a, int n)
//{
//	int gap = 3;
//	for (int j = 0; j < gap; j++)
//	{
//		for (int i = j; i < n - gap; i+=gap)
//		{
//
//			int end = 0;
//			int tmp = a[end + gap];
//			while (end >= 0)
//			{
//				if (a[end] > tmp)
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//				a[end + gap] = tmp;
//			}
//		}
//		 
//	}
//
//}
void ShellSort(int* a, int n)
{
	// 1、gap > 1 预排序
	// 2、gap == 1 直接插入排序

	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;  // +1可以保证最后一次一定是1
		// gap = gap / 2;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
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
			}

			a[end + gap] = tmp;
		}
	}
}



void AdjustDwon(int* a, int n, int root) {
	int parent = root;
	int child = 2 * root + 1;  // 左子节点索引

	while (child < n) {
		
		if (child + 1 < n && a[child] < a[child + 1]) {
			child++;
		}

		
		if (a[child] > a[parent]) {
			int temp = a[child];
			a[child] = a[parent];
			a[parent] = temp;
			parent = child;
			child = 2 * parent + 1;
		}
		else {
			break;
		}
	}
}

void HeapSort(int* a, int n) {
	
	for (int i = n / 2 - 1; i >= 0; i--) {
		AdjustDwon(a, n, i);
	}

	for (int i = n - 1; i > 0; i--) {
		int temp = a[0];
		a[0] = a[i];
		a[i] = temp;
		AdjustDwon(a, i, 0);
	}
}
void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	while (begin < end)
	{
		int maxi = begin, mini = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}

			if (a[i] < a[mini])
			{
				mini = i;
			}
		}

		Swap(&a[begin], &a[mini]);
		// 如果maxi和begin重叠，修正一下即可
		if (begin == maxi)
		{
			maxi = mini;
		}

		Swap(&a[end], &a[maxi]);

		++begin;
		--end;
	}
}
void BubbleSort(int* a, int n)
{
	for (int j = 0; j < n; ++j)
	{
		bool exchange = false;
		for (int i = 1; i < n - j; i++)
		{
			if (a[i - 1] > a[i])
			{
				int tmp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = tmp;

				exchange = true;
			}
		}

		if (exchange == false)
		{
			break;
		}
	}

}
int GetMidIndex(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[mid])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[left] < a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	else // a[left] > a[mid]
	{
		if (a[mid] > a[right])
		{
			return mid;
		}
		else if (a[left] > a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
}

int OneSort(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[left], &a[midi]);
	int keyi = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[keyi])
		{
			right--;
		}
		while (left<right&&a[left] <= a[keyi])
		{
			left++;
		}
		
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}
int DoubleSort(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[left], &a[midi]);
	int key = a[left];//放值
	int hole = left;
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			right--;
		}
		a[hole] = a[right];
		hole = right;
		while (left < right && a[left] <= a[hole])
		{
			left++;
		}
		a[hole] = a[left];
		hole = left;

	}
	a[hole] = key;
	return hole;
}
 
int ThreeSort(int* a, int left, int right)
{
	int midi = GetMidIndex(a, left, right);
	Swap(&a[left], &a[midi]);
	int prev = left;//慢
	int  cur = left + 1;
	int key = left;
	while (cur <= right)
	{
		if (a[cur] < a[key] && prev++)
		{
			Swap(&a[prev], &a[cur]);
		}
		cur++;
	}
	Swap(&a[prev], &a[key]);
	key = prev;
	return key;

 }
void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
	{
		return;
    }
	//int keyi = OneSort(a, begin, end);
	//int keyi = DoubleSort(a, begin, end);
	int keyi = ThreeSort(a, begin, end);
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}



void QuickSortNonR(int* a, int begin, int end)
{
	ST st;
	StackInit(&st);
	StackPush(&st, end);
	StackPush(&st, begin);
	while (!StackEmpty(&st))
	{
		int left = StackTop(&st);
		StackPop(&st);
		int right = StackTop(&st);
		StackPop(&st);
		int key = OneSort(a, left, right);
		if (right > key + 1)
		{
			StackPush(&st, right);
			StackPush(&st, key + 1);
		}
		if (left < key - 1)
		{
			StackPush(&st, key - 1);
			StackPush(&st, left);
		}
	}
	StackDestory(&st);
}