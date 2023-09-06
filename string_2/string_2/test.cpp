#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
#include<list>
#include<string>

using namespace std;

int Add(int left, int right)
{
    return left + right;
}

// 通用加法函数
template<class T>
T Add(T left, T right)
{
    return left + right;
}

template<class T>
T* func(int n)
{
    return new T[n];
}

//int main()
//{
//	int x = 0, y = 1;
//	swap(x, y);
//
//	double a = 1.1, b = 2.2;
//	swap(a, b);
//
//	cout << Add(x, y) << endl;
//
//	cout << Add<int>(x, y) << endl;
//
//	int* ptr = func<int>(10);
//
//	return 0;
//}

template<class T>
class Vector
{
public:
    Vector(size_t capacity = 10)
        : _pData(new T[capacity])
        , _size(0)
        , _capacity(capacity)
    {}

    // 使用析构函数演示：在类中声明，在类外定义。
    ~Vector();

    void PushBack(const T& data);
    void PopBack();
    // ...

    size_t Size() { return _size; }

    T& operator[](size_t pos)
    {
        //assert(pos < _size);
        return _pData[pos];
    }

private:
    T* _pData;
    size_t _size;
    size_t _capacity;
};

template<class T>
Vector<T>::~Vector()
{
    delete[] _pData;
    _pData = nullptr;
}

// 类名 ： Vector
// 类型 ： Vector<T>

//int main()
//{
//    //Vector<int> v;
//
//    vector<int> v;
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);
//    v.reserve(100);
//
//    list<int> lt;
//    lt.push_back(1);
//
//
//
//    return 0;
//}
void test_string8()
{
    string s("hello world");
    s += "hhh";
    cout << s << endl;
}
void test_string9()
{
    //insert 和erase 能不用就尽量不用

    std::string str("hello world");
    str.insert(str.begin(), 'a');
    cout << str << endl;
    string s1;
   
}
void test_string10()
{
    string s1("test.cpp");
    int i = s1.find('.');
    string s2 = s1.substr(i);
    cout << s2 << endl;
}
void test_string11()
{
    string s1("test.cpp.tar.zip");
    //size_t i = s1.find('.');
    size_t i = s1.rfind('.');

    string s2 = s1.substr(i);
    cout << s2 << endl;

    //string s3("https://legacy.cplusplus.com/reference/string/string/rfind/");
    string s3("ftp://www.baidu.com/?tn=65081411_1_oem_dg");
    // 协议
    // 域名
    // 资源名

    string sub1, sub2, sub3;
    size_t i1 = s3.find(':');
    if (i1 != string::npos)
        sub1 = s3.substr(0, i1);
    else
        cout << "没有找到i1" << endl;

    size_t i2 = s3.find('/', i1 + 3);
    if (i2 != string::npos)
        sub2 = s3.substr(i1 + 3, i2 - (i1 + 3));
    else
        cout << "没有找到i2" << endl;

    sub3 = s3.substr(i2 + 1);

    cout << sub1 << endl;
    cout << sub2 << endl;
    cout << sub3 << endl;
}
void test_string12()
{
    //是abc的`        
    /*std::string str("Please, replace the vowels in this sentence by asterisks.");
    std::size_t found = str.find_first_not_of("abc");
    while (found != std::string::npos)
    {
        str[found] = '*';
        found = str.find_first_not_of("abcdefg", found + 1);
    }

    std::cout << str << '\n';*/

    std::string str("Please, replace the vowels in this sentence by asterisks.");
    std::size_t found = str.find_first_of("abcd");
    while (found != std::string::npos)
    {
        str[found] = '*';
        found = str.find_first_of("abcd", found + 1);
    }

    std::cout << str << '\n';

}

int main()
{
    char str1[] = "hello world";
    char str2[] = "比特";
    cout << sizeof(str2) << endl;
    wchar_t ch1;

}