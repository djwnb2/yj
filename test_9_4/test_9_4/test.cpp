#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> time(n);
        for (int i = 0; i < n; i++)
        {
            time[i] = (dist[i] - 1) / speed[i] + 1;
        }
        sort(time.begin(), time.end());
        for (int i = 0; i < n; i++)
        {
            if (time[i] <= i)
            {
                return i;
            }

        }
        return n;
    }

};