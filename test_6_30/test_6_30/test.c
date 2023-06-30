#define _CRT_SECURE_NO_WARNINGS
//2490. »Ø»·¾ä
bool isCircularSentence(char* sentence) {
    int num = strlen(sentence);
    for (int i = 0; i < num; i++)
    {
        if (sentence[i] == ' ')
        {
            if (sentence[i - 1] != sentence[i + 1])
            {
                return false;
            }
        }
    }
    return sentence[0] == sentence[num - 1];
}