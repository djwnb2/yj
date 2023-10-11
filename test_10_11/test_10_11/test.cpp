#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        return max(nums[0] + rob1(nums, 2, n - 2), rob1(nums, 1, n - 1));
    }
    int rob1(vector<int>& nums, int left, int right)
    {
        if (left > right) return 0;

        int n = nums.size();
        vector<int> f(n);
        auto g = f;
        f[left] = nums[left];
        for (int i = left; i <= right; i++)
        {
            f[i] = g[i - 1] + nums[i];
            g[i] = max(f[i - 1], g[i - 1]);
        }
        return max(f[right], g[right]);


    }
};