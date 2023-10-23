#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<list>
#include<vector>
using namespace std;
//class Person
//{
//protected:
//	void Print()
//	{
//		cout << "name:" << _name << endl;
//		cout << "age:" << _age << endl;
//	}
//protected:
//	string _name = "peter"; // 姓名
//	int _age = 18; 
//};
//
//class Student :public Person
//{
//	void func()
//	{
//		Student st;
//		st.Print();
//	}
//protected:
//	int _stuid;
// };
//class Teacher :public Person
//{
//protected:
//	int _stuid;
//};
////int main()
////{
////	Student st;
////	Teacher te;
////	st.Print();
////}
//
//int main()
//
//{
//
//	int ar[] = { 0,1, 2, 3, 4,  5, 6, 7, 8, 9 };
//
//	int n = sizeof(ar) / sizeof(int);
//
//	list<int> mylist(ar, ar + n);
//
//	list<int>::iterator pos = find(mylist.begin(), mylist.end(), 5);
//
//
//	reverse(mylist.begin(), pos);
//
//	reverse(pos, mylist.end());
//
//	list<int>::const_reverse_iterator crit = mylist.crbegin();
//
//	while (crit != mylist.crend())
//
//	{
//
//		cout << *crit << " ";
//
//		++crit;
//
//	}
//
//	cout << endl;
//
//}


//class A
//
//{
//
//public:
//
//	void f() { cout << "A::f()" << endl; }
//
//	int a;
//
//};
//
//
//
//class B : public A
//
//{
//
//public:
//
//	void f(int a) { cout << "B::f()" << endl; }
//
//	int a;
//
//};
//
//
//
//int main()
//
//{
//
//	B b;
//
//	b.f();
//
//	return 0;
//
//}


//class A
//
//{
//
//public:
//
//	A() { cout << "A::A()" << endl; }
//
//	~A() { cout << "A::~A()" << endl; }
//
//	int a;
//
//};
//
//
//
//class B : public A
//
//{
//
//public:
//
//	B() { cout << "B::B()" << endl; }
//
//	~B() { cout << "B::~B()" << endl; }
//
//	int b;
//
//};



//void f()
//
//{
//
//	B b;
//
//}
//int main()
//{
//	f();
//}


//class Person
//{
//public:
//	Person() { ++_count; }
//protected:
//	string _name; // 姓名
//public:
//	 static int _count; // 统计人的个数。
//};
//
//int Person::_count = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // 学号
//};
//
//Student func()
//{
//	Student st;
//	return st;
//}
//
//int main()
//{
//	Person p;
//	Student s;
//	//func();
//
//	cout << &Student::_count << endl;
//	cout << &Person::_count << endl;
//
//	return 0;
//}



class Person
{
public:
	string _name; // 姓名
	int _age;
	int _tel;
	// ...
};
class Student :virtual  public Person
{
protected:
	int _num; //学号
};
class Teacher :virtual  public Person
{
protected:
	int _id; // 职工编号
};

class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; // 主修课程
};

void Test()
{
	// 这样会有二义性无法明确知道访问的是哪一个
	Assistant a;
	a.Student::_name = "小张";
	a.Teacher::_name = "老张";
	//a._name = "张三";
}

int main()
{
	Test();

	return 0;
}


// 多态的条件:
// 1、虚函数重写
// 2、父类的指针或者引用去调用虚函数
// 
// 虚函数重写
// 父子继承关系的两个虚函数，三同(函数名/参数/返回)
// virtual只能修饰成员
// 三同(函数名/参数/返回)的例外：协变->返回值可以不同，但是必须是父子类关系的指针或者引用
// 派生类重写的虚函数函数可以不加virtual(建议都加上)
