#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	//���ļ�
//	//���·��
//	FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\test2.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fputc д�ļ�
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//��26����ĸд���ļ���
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a'+i, pf);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//

//fgetc - ���ļ�����

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = 0;
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		ch = fgetc(pf);
//		printf("%c ", ch);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//



//fputs дһ������

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//дһ������ hello bit
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//fget - ��һ������
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��
//	char arr[20];
//	fgets(arr, 5, pf);
//	printf("%s\n", arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//��ʽ���Ķ�д
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fprintf(pf, "%d %f %s\n", s.n, s.f, s.arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//���� fscanf ����
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fscanf(pf, "%d %f %s", &(s.n), &(s.f), s.arr);
//
//	printf("%d %f %s\n", s.n, s.f, s.arr);
//
//	//�ر��ļ�
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
//	////���ļ�
//	//int ch = 0;
//	//int i = 0;
//	//for (i = 0; i < 26; i++)
//	//{
//	//	ch = fgetc(pf);
//	//	printf("%c ", ch);
//	//}
//
//	////�ر��ļ�
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
	//���л��ͷ����л���ʱ��

	struct S s = { 200, 3.5f, "wangwu" };
	//��һ���ṹ��ת�����ַ���
	char arr[200] = { 0 };
	sprintf(arr, "%d %f %s\n", s.n, s.f, s.arr);
	printf("�ַ��������ݣ�%s\n", arr);

	//��һ���ַ���ת���ɶ�Ӧ�ĸ�ʽ������
	struct S tmp = { 0 };
	sscanf(arr, "%d %f %s", &(tmp.n), &(tmp.f), tmp.arr);
	printf("��ʽ�������ݣ�%d %f %s\n", tmp.n, tmp.f, tmp.arr);

	return 0;
}