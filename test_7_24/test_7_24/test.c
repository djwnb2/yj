#define _CRT_SECURE_NO_WARNINGS

int numJewelsInStones(char* jewels, char* stones) {
    int jewelslen = strlen(jewels);
    int stoneslen = strlen(stones);
    int jewelsCount = 0;
    for (int i = 0; i < jewelslen; i++)
    {
        char jewelA = jewels[i];
        for (int j = 0; j < stoneslen; j++)
        {
            char stoneA = stones[j];
            if (stoneA == jewelA)
            {
                jewelsCount++;

            }
        }
    }
    return jewelsCount;
}