#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    struct KvCom
    {
        bool operator() (const pair<string, int>& kv1, const pair<string, int>& kv2)
        {
            return kv1.second > kv2.second || (kv1.second == kv2.second && kv1.first < kv2.first);
        }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> countMap;
        for (auto& str : words)
        {
            countMap[str]++;
        }
        vector<pair<string, int>> sortV(countMap.begin(), countMap.end());
        sort(sortV.begin(), sortV.end(), KvCom());
        for (auto& kv : sortV)
        {
            cout << kv.first << ":" << kv.second << endl;
        }
        vector<string> v;
        for (size_t i = 0; i < k; i++)
        {
            v.push_back(sortV[i].first);
        }
        return v;
    }

};