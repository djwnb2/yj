#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (auto& it : tokens)
        {
            if (it == "+" ||
                it == "-" ||
                it == "*" ||
                it == "/")
            {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                switch (it[0])
                {
                case '+':
                    st.push(right + left);
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
                st.push(stoi(it));
            }

        }
        return st.top();
    }
};