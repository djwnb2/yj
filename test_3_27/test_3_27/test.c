#define _CRT_SECURE_NO_WARNINGS
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
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
////			} // ����Ԫ���Լ����Լ��Ƚ�
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


//ģ��strncpy
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
////destΪĿ�����飬srcΪԴ���飬nΪҪ���Ƶ��ַ�����
//int main()
//{
//	char arr1[] = "good  morning ";
//	char arr2[] = "great";
//	My_strncpy(arr1,arr2,5);
//	printf("%s", arr1);
//}


//ģ��ʵ��strncat
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
//	printf("���յ�Ŀ���ַ����� %s", dest);
//
//	return(0);
//}

//ģ��ʵ��atoi
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
	printf("�ַ���ֵ = %s, ����ֵ = %d\n", str, val);

	strcpy(str, "runoob.com");
	val = My_atoi(str);
	printf("�ַ���ֵ = %s, ����ֵ = %d\n", str, val);

	return(0);
}