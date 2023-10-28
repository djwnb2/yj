#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string>
#include<deque>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

#include"Stack.h"
#include"Queue.h"


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        Mystack::stack<int> st;
        //bit::stack<int, list<int>> st;
      

        for (auto& str : tokens)
        {
            if (str == "+"
                || str == "-"
                || str == "*"
                || str == "/")
            {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                switch (str[0])
                {
                case '+':
                    st.push(left + right);
                    break;
                case '-':
                    st.push(left - right);
                    break;
                case '*':
                    st.push(left * right);
                    break;
                case '/':
                    st.push(left / right);
                    break;
                }
            }
            else
            {
                st.push(stoi(str));
            }
        }

        return st.top();
    }
};
void test_queue()
{
    Myqueue::queue<int, deque<int>> q;
    q.push(1);
    q.push(3);
    q.push(2);
    q.push(7);
    q.push(5);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}



int main()
{
   /* vector<string> v = { "4","13","5","/","+" };
    cout << Solution().evalRPN(v) << endl;*/

    test_queue();
    return 0;
}