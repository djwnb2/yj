#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	//打开文件
//	//相对路径
//	FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\test2.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fputc 写文件
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//把26个字母写到文件中
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a'+i, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fgetc - 读文件操作

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	int ch = 0;
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		ch = fgetc(pf);
//		printf("%c ", ch);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//



//fputs 写一行数据

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写一行数组 hello bit
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//fget - 读一行数据
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//格式化的读写
//fprintf
//fscanf

//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};

//int main()
//{
//	struct S s = { 100, 3.14f, "zhangsan" };
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fprintf(pf, "%d %f %s\n", s.n, s.f, s.arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//测试 fscanf 函数
//
//struct S
//{
//	int n;
//	float f;
//	char arr[20];
//};

//int main()
//{
//	struct S s = {0};
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
//	fscanf(pf, "%d %f %s", &(s.n), &(s.f), s.arr);
//
//	printf("%d %f %s\n", s.n, s.f, s.arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL)
//	//{
//	//	perror("fopen");
//	//	return 1;
//	//}
//	////读文件
//	//int ch = 0;
//	//int i = 0;
//	//for (i = 0; i < 26; i++)
//	//{
//	//	ch = fgetc(pf);
//	//	printf("%c ", ch);
//	//}
//
//	////关闭文件
//	//fclose(pf);
//	//pf = NULL;
//	//stdin FILE*
//	//stdou FILE*
//	//stderr FILE*
//	//int ch = fgetc(stdin);
//	//printf("%c\n", ch);
//	//fputc('a', stdout);
//	//fputc('b', stdout);
//	//fputc('c', stdout);
//	//fputc('d', stdout);
//
//	//struct S s = { 1000, 3.666f, "hehe" };
//	//fprintf(stdout, "%d %f %s\n", s.n, s.f, s.arr);
//	//struct S s = { 0 };
//	//fscanf(stdin, "%d %f %s", &(s.n), &(s.f), s.arr);
//	//fprintf(stdout, "%d %f %s\n", s.n, s.f, s.arr);
//
//	return 0;
//}
//



struct S
{
	int n;
	float f;
	char arr[20];
};
int main()
{
	//序列化和反序列化的时候

	struct S s = { 200, 3.5f, "wangwu" };
	//把一个结构体转换成字符串
	char arr[200] = { 0 };
	sprintf(arr, "%d %f %s\n", s.n, s.f, s.arr);
	printf("字符串的数据：%s\n", arr);

	//把一个字符串转换成对应的格式化数据
	struct S tmp = { 0 };
	sscanf(arr, "%d %f %s", &(tmp.n), &(tmp.f), tmp.arr);
	printf("格式化的数据：%d %f %s\n", tmp.n, tmp.f, tmp.arr);

	return 0;
}