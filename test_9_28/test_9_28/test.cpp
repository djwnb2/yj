#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    void subtract(vector<int>& nums, int x, int startIndex) {
        int len = nums.size();
        for (int i = startIndex; i < len; i++)
        {
            nums[i] -= x;
        }
    }
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            if (nums[i] > 0)
            {
                subtract(nums, nums[i], i);
                ans++;
            }

        }
        return ans;
    }
};