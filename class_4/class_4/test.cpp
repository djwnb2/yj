#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Date
//{
//public:
//	// ��ʼ���б���ÿ����Ա����ĵط�
//	// ������д��д��ÿ����Ա��Ҫ�߳�ʼ���б�
//	Date(int year, int month, int day, int& i)
//		: _year(year)
//		, _month(month)
//	    , _x(1)
//		,_refi(i)
//	{
//		// ��ֵ
//		_day = day;
//	}
//
//	void func()
//	{
//		++_refi;
//		++_refi;
//	}
//
//private:
//	int _year;  // ÿ����Ա����
//	int _month = 1;
//	int _day = 1;
//	// C++11֧�ָ�ȱʡֵ�����ȱʡֵ����ʼ���б�
//	// �����ʼ���б�û����ʾ��ֵ���������ȱʡֵ
//	// �����ʾ��ֵ�ˣ��Ͳ������ȱʡֵ
//
//	// ���붨��ʱ��ʼ��
//	const int _x = 10;
//	int& _refi;
//	
//};
//
//int main()
//{
//	int n = 0;
//	Date d1(2023, 7, 28, n);
//	d1.func();
//	cout << n << endl;
//}

// �ۻ������˶��ٸ�����  


// ����ʹ�õĻ��ж��ٸ�����


//class A
//{
//public:
//	A()
//	{
//		++n;
//		++m;
//	}
//
//	A(const A& t)
//	{
//		++n;
//		++m;
//	}
//
//	~A() 
//	{
//		--m;
//	}
//	//��̬��Ա����û��thisָ��
//	static void Print()
//	{
//		//���ܷ��ʷǾ�̬
//		cout << m << n << endl;
//	}
//private:
//	static int m;
//	static int n;
//};
//int A::m = 0;
//int A::n = 0;
//
////A& Func(A& aa)
//A Func(A aa)
//{
//	return aa;
//}
//
//int main()
//{
//	A aa1;
//	A aa2;
//	cout << n << " " << m << endl;
//	
//	// ���ܱ����������޸�
//	//--n;
//	//++m;
//	A();
//	cout << n << " " << m << endl;
//
//
//	Func(aa1);
//	cout << n << " " << m << endl;
//
//
//	return 0;
//

//int main()
//{
//	int* p2 = (int*)malloc(sizeof(int));
//	int* p5 = new int[10];
//	delete[] p5;
//	int* p6 = new int(10);


class CBase {
private: int nPrivate;   //˽�г�Ա
public:  int nPublic;    //���г�Ա
protected: int nProtected;   // ������Ա
};
class CDerived :
    public CBase
{
    void AccessBase()
    {
        nPublic = 1;      // OK
        nPrivate = 1;    // �����ܷ��ʻ���˽�г�Ա
        nProtected = 1;  // OK�����ʴӻ���̳е�protected��Ա
        CBase f;
        f.nProtected = 1; //��f���Ǻ��������õĶ���
    }
};
int main()
{
    CBase b;
    CDerived d;
    int n = b.nProtected;  //�������������Ա�����ڣ����ܷ��ʻ��ౣ����Ա
    n = d.nPrivate;          //���˴����ܷ���d��˽�г�Ա
    int m = d.nPublic;      //OK
    return 0;
}