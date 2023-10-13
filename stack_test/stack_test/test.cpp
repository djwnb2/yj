#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void test_stack1()
{
	stack<int> st;
	st.push(1);
	st.push(2);
	cout << st.top() << " ";
	st.pop();
	st.push(3);
	st.push(4);
	st.push(5);
	while (!st.empty())
	{
		cout << st.top() << " ";
		st.pop();
	}
}       
void test_queue()
{
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
}
#int main()
{
	test_stack1();
}