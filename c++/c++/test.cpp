#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<assert.h>
#include<stdlib.h>

using namespace std;
#include"Queue.h"
#include"Stack.h"
//int& Count()
//{
//	int a[1000];
//	int n = 0;
//	n++;
//
//	// ...
//	return n;
//}
//
//int main()
//{
//	int& ret = Count();
//	cout << ret << endl;
//	cout << ret << endl;
//
//	return 0;
//}
//namespace bit
//{
//	 int rand = 0;
//
//}
//
//
//int main()
//{
//	printf("hello world\n");
//	printf("%d\n", rand);
//}



//namespace bit
//{
//	// �����ռ��п��Զ������/����/����
//	int rand = 10;
//
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//
//	namespace xxx
//	{
//		int rand = 1;
//	}
//}
////int main()
////{
////	printf("%d", bit::Add(1, 2));
////}
////using namespace bit;
////int Add(int left, int right)
////{
////	return left + right;
////}
//
//int main()
//{
//	printf("%d", bit::xxx::rand);
//}





//int main()
//{
//	// << �����������
//	cout << "hello world" << endl;
//	cout << "hello world" << '\n';
//	cout << "hello world" << endl;
//
//	bit::StackInit();
//	bit::QueueInit();
//
//	// ����ȡ
//	int i = 0;
//	std::cin >> i;
//
//	return 0;
//}

//
//void Func(int a = 1)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Func(2);
//
//	Func();
//
//	return 0;
//


 //ȫȱʡ
void Func(int a = 10, int b = 20, int c = 30)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl << endl;
}

int main()
{
	Func();

	// ��ʾ���Σ�����������ʾ����
	Func(1);
	Func(1,2);
	Func(1, 2, 3);

	return 0;
}

int Add(int left, int right)
{
	cout << "int Add(int left, int right)" << endl;

	return left + right;
}

double Add(double left, double right)
{
	cout << "double Add(double left, double right)" << endl;

	return left + right;
}