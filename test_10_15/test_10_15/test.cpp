#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ret;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n;)
        {
            if (nums[i] > 0) break;
            int l = i + 1;
            int r = n - 1, target = -nums[i];
            while (l < r)
            {
                int sum = nums[r] + nums[l];
                if (sum > target) r--;
                else if (sum < target) l++;
                else
                {
                    ret.push_back({ nums[i],nums[l],nums[r] });
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;

                }
            }
            i++;
            while (i < n && nums[i] == nums[i - 1]) i++;

        }
        return ret;
    }
};