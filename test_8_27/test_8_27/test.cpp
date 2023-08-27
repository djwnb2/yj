#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    bool isletter(char ch)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            return true;
        }
        if (ch >= 'A' && ch <= 'Z')
        {
            return true;
        }
        return false;

    }
    string reverseOnlyLetters(string s) {
        if (s.empty())
        {
            return s;
        }
        int begin = 0, end = s.size() - 1;
        while (begin < end)
        {
            while (begin < end && !isletter(s[begin]))
            {
                begin++;
            }
            while (begin < end && !isletter(s[end]))
            {
                end--;
            }
            swap(s[begin], s[end]);
            begin++;
            end--;
        }

        return s;
    }
};