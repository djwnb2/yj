#define _CRT_SECURE_NO_WARNINGS

int dayOfYear(char* date) {
    int year = atoi(date);
    int month = atoi(date + 5);
    int day = atoi(date + 8);
    int amount[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        ++amount[1];
    }
    int ans = 0;
    for (int i = 0; i < month - 1; i++)
    {
        ans += amount[i];
    }
    return ans + day;

}