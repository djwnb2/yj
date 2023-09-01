#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    string tmp;
    vector<string> board = { "", "", "abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz" };
    vector<string> ans;
    void dfs(int pos, string digits)
    {
        if (pos == digits.size())
        {
            ans.push_back(tmp);
            return;
        }
        int nums = digits[pos] - '0';
        for (int i = 0; i < board[nums].size(); i++)
        {
            tmp.push_back(board[nums][i]);
            dfs(pos + 1, digits);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0)
        {
            return ans;
        }
        dfs(0, digits);
        return ans;
    }
};