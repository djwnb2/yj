#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Person {
//public:
//	 void BuyTicket() { cout << "��Ʊ-ȫ��" << endl; }
//};
//class Student : public Person {
//public:
//	 void BuyTicket() { cout << "��Ʊ-���" << endl; }
//	/*ע�⣺����д�����麯��ʱ����������麯���ڲ���virtual�ؼ���ʱ����ȻҲ���Թ�����д(��
//	Ϊ�̳к������麯�����̳������������������ɱ����麯������),���Ǹ���д�����Ǻܹ淶��������
//	����ʹ��*/
//	/*void BuyTicket() { cout << "��Ʊ-���" << endl; }*/
//};
//void Func(Person& p)
//{
//	p.BuyTicket();
//}
//int main()
//{
//	Person ps;
//	Student st;
//	Func(ps);
//	Func(st);
//	return 0;
//}
//
//
//



//����
//class Animal
//{
//protected:
//	char animalName[30];
//	int height;
//public:
//	Animal(char* name, int h)
//	{
//		strcpy_s(animalName, name);
//		height = h;
//	}
//
//	void info()
//	{
//		cout << "I am an animal" << endl;
//		cout << "My name is " << animalName << ", height: " << height << endl;
//	}
//};
//
////����
//class Dog :public Animal
//{
//private:
//	char voice[30];
//public:
//	Dog(char* name, int h, char* v) :Animal(name, h)
//	{
//		strcpy_s(voice, v);
//	}
//	void info()
//	{
//		cout << "I am a dog" << endl;
//		cout << "My name is " << animalName << ", height: " << height << endl;
//	}
//};
//
//int main()
//{
//	Animal a("cat", 20);
//	Dog d("dog", 40, "wang");
//	d.info();
//
//	system("pause");
//	return 0;
//}




//class A {};
//class B : public A {};
//class Person {
//public:
//	virtual A* f() { return new A; }
//};
//class Student : public Person {
//public:
//	virtual B* f() { return new B; }
//};
//int main()
//{
//	Person p;
//	Student s;
//    
//
//}


//class car
//{
//public:
//	virtual void Drive() = 0;
//};
//class Benz :public car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "����" << endl;
//	}
//};
//int main()
//{
//	Car c;
//	Benz b;
//}














class Base {
public:
	virtual void func1() { cout << "Base::func1" << endl; }
	virtual void func2() { cout << "Base::func2" << endl; }
private:
	int a;
};

class Derive :public Base {
public:
	virtual void func1() { cout << "Derive::func1" << endl; }
	virtual void func3() { cout << "Derive::func3" << endl; }
	virtual void func4() { cout << "Derive::func4" << endl; }
	void func5() { cout << "Derive::func5" << endl; }
private:
	int b;
};
class X :public Derive {
public:
	virtual void func3() { cout << "X::func3" << endl; }
};


typedef void (*VFUNC)();
//void PrintVFT(VFUNC a[])
void PrintVFT(VFUNC* a)
{
	for (size_t i = 0; a[i] != 0; i++)
	{
		printf("[%d]:%p->", i, a[i]);
		VFUNC f = a[i];
		f();
		//(*f)();
	}
	printf("\n");
}

int main()
{
	void (*f1)();
	VFUNC f2;

	cout << sizeof(long long) << endl;

	Base b;
	PrintVFT((VFUNC*)(*((long long*)&b)));

	Derive d;
	X x;

	// PrintVFT((VFUNC*)&d);
	PrintVFT((VFUNC*)(*((long long*)&d)));

	PrintVFT((VFUNC*)(*((long long*)&x)));

	return 0;
}