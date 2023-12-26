#define _CRT_SECURE_NO_WARNINGS

#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashtable;
    for (int i = 0; i < nums.size(); ++i) {
        auto it = hashtable.find(target - nums[i]);
        if (it != hashtable.end()) {
            return { it->second, i };
        }
        hashtable[nums[i]] = i;
    }
    return {};
}

int main() {
    vector<int> nums = { 2, 5,7, 11, 15 };
    int target = 9;
    vector<int> indices = twoSum(nums, target);
    if (!indices.empty()) {
        cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
    }
    else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}
