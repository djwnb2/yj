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
//	string _name = "peter"; // ����
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
//	string _name; // ����
//public:
//	 static int _count; // ͳ���˵ĸ�����
//};
//
//int Person::_count = 0;
//
//class Student : public Person
//{
//protected:
//	int _stuNum; // ѧ��
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
	string _name; // ����
	int _age;
	int _tel;
	// ...
};
class Student :virtual  public Person
{
protected:
	int _num; //ѧ��
};
class Teacher :virtual  public Person
{
protected:
	int _id; // ְ�����
};

class Assistant : public Student, public Teacher
{
protected:
	string _majorCourse; // ���޿γ�
};

void Test()
{
	// �������ж������޷���ȷ֪�����ʵ�����һ��
	Assistant a;
	a.Student::_name = "С��";
	a.Teacher::_name = "����";
	//a._name = "����";
}

int main()
{
	Test();

	return 0;
}


// ��̬������:
// 1���麯����д
// 2�������ָ���������ȥ�����麯��
// 
// �麯����д
// ���Ӽ̳й�ϵ�������麯������ͬ(������/����/����)
// virtualֻ�����γ�Ա
// ��ͬ(������/����/����)�����⣺Э��->����ֵ���Բ�ͬ�����Ǳ����Ǹ������ϵ��ָ���������
// ��������д���麯���������Բ���virtual(���鶼����)
