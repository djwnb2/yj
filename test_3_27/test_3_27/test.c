#define _CRT_SECURE_NO_WARNINGS
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
#include<stdio.h>
//void Find(int *arr, int sz)
//{
//	int flag = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		flag = 1;
//		for (j = 0; j < sz; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			}
//			if (arr[i] == arr[j])
//			{
//				flag = 0;
//				break;
//			}
//			
//		}
//		if (1 == flag)
//		{
//			printf("%d ", arr[i]);
//		}
//		
//	}
//
//}
////void Find(const int* arr, size_t num)
////{
////	for (int i = 0; i < num; i++)
////	{
////		int flag = 1;
////
////		for (int j = 0; j < num; j++)
////		{
////			if (j == i)
////			{
////				continue;
////			} // 跳过元素自己与自己比较
////
////			if (arr[j] == arr[i])
////			{
////				flag = 0;
////				break;
////			}
////		}
////
////		if (1 == flag)
////		{
////			printf("%d ", arr[i]);
////		}
////	}
////}
//
//int main()
//{
//	int arr[10] = { 1, 1, 2, 2, 3, 3, 4, 7, 8, 8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find(arr, sz);
//
//}


//模拟strncpy
#include <stdio.h>
#include<string.h>
#include <assert.h>
//char My_strncpy(char*src,char*dest,size_t num)
//{
//	assert(src && dest);
//	char* ret = src;
//	while (num--)
//	{
//		*src++ = *dest++;
//	}
//	return ret;
//}
//
////dest为目标数组，src为源数组，n为要复制的字符个数
//int main()
//{
//	char arr1[] = "good  morning ";
//	char arr2[] = "great";
//	My_strncpy(arr1,arr2,5);
//	printf("%s", arr1);
//}


//模拟实现strncat
//char My_strncat(char*dest,char*src,size_t num)
//{
//	assert(dest && src);
//	char ret = dest;
//	while (*dest )
//	{
//		dest++;
//	}
//	while (num--&& (*dest++ = *src++))
//	{
//		;
//
//	}
//	return ret;
//}
//int main()
//{
//	char src[50], dest[50];
//
//	strcpy(src, "This is source");
//	strcpy(dest, "This is destination");
//
//	My_strncat(dest, src, 15);
//
//	printf("最终的目标字符串： %s", dest);
//
//	return(0);
//}

//模拟实现atoi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int My_atoi(const char* str)
{
	int res = 0;
	int flag = 1;
	if (*str == '-')
	{
		flag = -1;
		str++;

	}
	while (*str >= '0' && *str <= '9')
	{

		res = res * 10 + *str - '0';
		str++;
	}
	return res * flag;
}

int main()
{
	int val;
	char str[20];

	strcpy(str, "-98993489");
	val = My_atoi(str);
	printf("字符串值 = %s, 整型值 = %d\n", str, val);

	strcpy(str, "runoob.com");
	val = My_atoi(str);
	printf("字符串值 = %s, 整型值 = %d\n", str, val);

	return(0);
}