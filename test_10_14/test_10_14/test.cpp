#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;


int binarySearch(std::vector<int>& nums, int target) {
    int left = 0, right = nums.size();





    while (left < right) {
        int mid = left + (right - left) / 2;


        if (nums[mid] > target) {
            right = mid;
        }
        else {
            left = mid + 1;
        }
    }

    return left == nums.size() ? left + 1 : left;
}


int main() {
    int n, target;

    std::cin >> n >> target;

    std::vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    int pos = binarySearch(nums, target);
    cout << pos << endl;

    return 0;
}
