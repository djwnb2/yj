#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<assert.h>
using namespace std;

//void func(int i, double d)
////int func(double d, int i)
//{
//	cout << "void func(int i, double d)" << endl;
//
//}
//
//int func(double d, int i)
//{
//	
//	cout << "void func(double d, int i)" << endl;
//	
//}
//
//// ���������ι���
//int main()
//{
//	func(1, 1.1);   // call  _Z4funcid(?)
//
//
//	func(1.1, 1);   // call  _Z4funcdi(?)
//
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int& b = a; // ����
//
//	cout << &a << endl;
//	cout << &b << endl;
//
//	b++;
//	a++;
//
//	return 0;
//}

//typedef struct ListNode{
//    int val;
//    struct ListNode* next;
//}ListNode, *PListNode;

// c���Զ���ָ����淨
//void PushBack(ListNode** pphead, int x)
//{
//    ListNode* newnode;
//    if (*pphead == NULL)
//    {
//        *pphead = newnode;
//    }
//    else
//    {
//
//    }
//}
//
//int main()
//{
//    ListNode* plist = NULL;
//    PushBack(&plist, 1);
//    PushBack(&plist, 2);
//    PushBack(&plist, 3);
//
//    return 0;
//}

//typedef struct ListNode {
//    int val;
//    struct ListNode* next;
//}ListNode, *PListNode;

// 16:15����
// 
// CPP�����õ��淨
//void PushBack(ListNode*& phead, int x)
////void PushBack(PListNode& phead, int x)
//{
//    ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
//    // ...
//    if (phead == NULL)
//    {
//        phead = newnode;
//    }
//    else
//    {
//
//    }
//}
//
//int main()
//{
//    ListNode* plist = NULL;
//    PushBack(plist, 1);
//    PushBack(plist, 2);
//    PushBack(plist, 3);
//
//    return 0;
//}




//int& Count()
//{
//	int n = 0;
//	n++;
//	
//	// ...
//	return n;
//}
//int main()
//{
//	int ret = Count();
//	// �����ӡ�Ľ��������1��Ҳ���������ֵ
//	cout << ret << endl;
//	cout << ret << endl;
//}



//int& Count()
//{
//	// int a[1000];
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


//struct SeqList
//{
//	int a[10];
//	int size;
//};
//
//// C�Ľӿ����
// //��ȡ��i��λ�õ�ֵ
//int SLAT(struct SeqList* ps, int i)
//{
//	assert(i < ps->size);
//	// ...
//	return ps->a[i];
//}
// //�޸ĵ�i��λ�õ�ֵ
//void SLModify(struct SeqList* ps, int i, int x)
//{
//	assert(i < ps->size);
//
//	// ...
//	ps->a[i] = x;
//}
//
//// CPP�ӿ����
//
//// �� or �޸ĵ�i��λ�õ�ֵ
// //17:30����
//int& SLAT(struct SeqList& ps, int i)
//{
//	assert(i < ps.size);
//	// ...
//	return (ps.a[i]);
//}

//int main()
//{
//	struct SeqList s;
//	s.size = 3;
//	// ...
//	SLAT(s, 0) = 10;
//	SLAT(s, 1) = 20;
//	SLAT(s, 2) = 30;
//	cout << SLAT(s, 0) << endl;
//	cout << SLAT(s, 1) << endl;
//	cout << SLAT(s, 2) << endl;
//
//	return 0;
//}


#define N 4
struct  Seqlist
{
	//��Ա����
	int& at(int i)
	{
		assert(i < N);
		return a[i];
	}
	//��Ա����
	int a[N];
};
int main()
{
	//Ȩ�޵ķŴ�
	//const int a = 0;
	//int& b = a;
	//const int& b = a;
	/*int a = 0;
	
	const int& b = a;*/
	//��ʿ����ת��

	double a = 0;
	const int& b = a;
	
}