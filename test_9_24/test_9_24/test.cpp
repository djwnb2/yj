#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> nums;
        int n = digits.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i == j || i == k || j == k)
                    {
                        continue;
                    }
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (num >= 100 && num % 2 == 0)
                    {
                        nums.insert(num);
                    }
                }
            }
        }
        vector<int> arr;
        for (auto& num : nums)
        {
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());
        return arr;

    }
};