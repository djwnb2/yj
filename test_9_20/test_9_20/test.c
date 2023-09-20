class Solution {
public:
    int minCount(vector<int>& coins) {
        int sum = 0;
        for (auto& e : coins)
        {
            sum += (e + 1) / 2;
        }
        return sum;
    }
};