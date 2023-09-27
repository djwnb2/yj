#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int num = 0;
        sort(arr2.begin(), arr2.end());
        for (int i = 0; i < arr1.size(); i++)
        {
            int l = 0;
            int r = arr2.size() - 1;
            while (l <= r)
            {
                int mid = l + r >> 1;
                if (arr2[mid] >= arr1[i] - d && arr2[mid] <= arr1[i] + d)
                {
                    break;
                }
                else if (arr2[mid] < arr1[i] - d) l = mid + 1;
                else if (arr2[mid] > arr1[i] + d) r = mid - 1;
            }
            if (l > r) num++;
        }
        return num;
    }
};