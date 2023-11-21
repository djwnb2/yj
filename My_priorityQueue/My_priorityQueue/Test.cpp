#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<deque>
#include<stack>
#include<queue>
#include<algorithm>
#include<array>
using namespace std;
#include"priorityQueue.h"

template<class T>
class Less
{
public:
    bool operator()(const T& x, const T& y)
    {
        return x < y;
    }
};
template<class T>
class Greater
{
public:
    bool operator()(const T& x, const T& y)
    {
        return x > y;
    }
};
void test_priority_queue()
{
    // 插入删除数据效率 logN
   // pq::priority_queue<int> q; // 大堆
   // pq::priority_queue<int, vector<int>, less<int>> q; // 大堆
    pq::priority_queue<int, vector<int>, greater<int>> q; // 小堆

    q.push(3);
    q.push(1);
    q.push(5);
    q.push(4);

    //bit::priority_queue<int> copy(q);

    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;

    int a[] = { 1,2,6,2,1,5,9,4 };
    sort(a, a + 8, greater<int>());
    //greater<int> gt;
    //sort(a, a + 8, gt);
}

//#define N 100
template <class T,size_t N>
class stack
{
private:
    T _a[N]
};
int main()
{
    //test_priority_queue();
    stack<int,10>st1;
}