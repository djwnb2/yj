#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int ans = 0;
        int prev = -1;
        for (int i = 0; i < forts.size(); i++)
        {
            if (forts[i])
            {
                if (prev >= 0 && forts[prev] != forts[i])
                {
                    ans = max(ans, i - prev - 1);
                }
                prev = i;
            }

        }
        return ans;
    }

};