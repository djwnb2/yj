#define _CRT_SECURE_NO_WARNINGS

class ret
{
public:
    ret()
    {
        sum += num;
        num++;
    }
    static int Get()
    {
        return sum;
    }
private:
    static int num;
    static int sum;
};
int ret::num = 1;
int ret::sum = 0;
class Solution {
public:
    int Sum_Solution(int n) {
        ret a[n];
        return ret::Get();

    }
};