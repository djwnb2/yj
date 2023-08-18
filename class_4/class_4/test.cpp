#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Date
//{
//public:
//	// 初始化列表是每个成员定义的地方
//	// 不管你写不写，每个成员都要走初始化列表
//	Date(int year, int month, int day, int& i)
//		: _year(year)
//		, _month(month)
//	    , _x(1)
//		,_refi(i)
//	{
//		// 赋值
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
//	int _year;  // 每个成员声明
//	int _month = 1;
//	int _day = 1;
//	// C++11支持给缺省值，这个缺省值给初始化列表
//	// 如果初始化列表没有显示给值，就用这个缺省值
//	// 如果显示给值了，就不用这个缺省值
//
//	// 必须定义时初始化
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

// 累积创建了多少个对象  


// 正在使用的还有多少个对象


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
//	//静态成员函数没有this指针
//	static void Print()
//	{
//		//不能访问非静态
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
//	// 可能被外面随意修改
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
private: int nPrivate;   //私有成员
public:  int nPublic;    //公有成员
protected: int nProtected;   // 保护成员
};
class CDerived :
    public CBase
{
    void AccessBase()
    {
        nPublic = 1;      // OK
        nPrivate = 1;    // 错，不能访问基类私有成员
        nProtected = 1;  // OK，访问从基类继承的protected成员
        CBase f;
        f.nProtected = 1; //错，f不是函数所作用的对象
    }
};
int main()
{
    CBase b;
    CDerived d;
    int n = b.nProtected;  //错，不在派生类成员函数内，不能访问基类保护成员
    n = d.nPrivate;          //错，此处不能访问d的私有成员
    int m = d.nPublic;      //OK
    return 0;
}