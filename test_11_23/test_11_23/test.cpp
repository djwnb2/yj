#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> dict;
        int res = -1;
        for (int i : nums) {
            int digitsSum = 0;
            int temp = i;
            while (temp > 0) {
                digitsSum += temp % 10;
                temp /= 10;
            }
            if (dict.count(digitsSum)) {
                res = max(res, dict[digitsSum] + i);
                dict[digitsSum] = max(dict[digitsSum], i);
            }
            else {
                dict[digitsSum] = i;
            }
        }
        return res;
    }
};

