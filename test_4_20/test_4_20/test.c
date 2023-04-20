#define _CRT_SECURE_NO_WARNINGS
//121. 买卖股票的最佳时机
int maxProfit(int* prices, int pricesSize) {
    int min = prices[0];
    int max = 0;
    for (int i = 0; i < pricesSize; i++)
    {
        if (min > prices[i])
        {
            min = prices[i];
        }
        if (max < prices[i] - min)
        {
            max = prices[i] - min;
        }
    }
    return max;

}