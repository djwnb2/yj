#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int firstUniqChar(string s) {
        int numd[26] = { 0 };
        for (auto ch : s)
        {
            numd[ch - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (numd[s[i] - 'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};