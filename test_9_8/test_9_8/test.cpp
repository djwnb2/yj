#define _CRT_SECURE_NO_WARNINGS

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> nums;   // Ŀ��ż������
        int n = digits.size();
        // ����������λ���±�
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    // �ж��Ƿ�����Ŀ��ż��������
                    if (i == j || j == k || i == k) {
                        continue;
                    }
                    int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                    if (num >= 100 && num % 2 == 0) {
                        nums.insert(num);
                    }
                }
            }
        }
        // ת��Ϊ�������������
        vector<int> res;
        for (const int num : nums) {
            res.push_back(num);
        }
        sort(res.begin(), res.end());
        return res;
    }
};

