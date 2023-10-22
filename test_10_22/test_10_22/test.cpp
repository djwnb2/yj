#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for (auto& x : moves)
        {
            if (x == 'L') cnt1++;
            if (x == 'R') cnt2++;
            if (x == '_') cnt3++;
        }
        return cnt1 > cnt2 ? cnt1 - cnt2 + cnt3 : cnt2 - cnt1 + cnt3;
    }
};