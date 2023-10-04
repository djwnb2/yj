#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue pq(nums.begin(), nums.end());
        while (--k)
        {
            pq.pop();
        }
        return pq.top();
    }
};