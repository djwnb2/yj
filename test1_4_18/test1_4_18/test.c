#define _CRT_SECURE_NO_WARNINGS
//35. 搜索插入位置
int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    int mid = left + (right - left) / 2;
    while (left <= right)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[left] < target)
        {
            left++;
        }
        else
        {
            right--;
        }

    }
    return left;
}

//13. 罗马数字转整数
int change(char s)
{
    if (s == 'I')return 1;
    else if (s == 'V')return 5;
    else if (s == 'X')return 10;
    else if (s == 'L')return 50;
    else if (s == 'C')return 100;
    else if (s == 'D')return 500;
    else return 1000;
}


int romanToInt(char* s) {
    int len = strlen(s);
    int i = 0;
    int res = 0;
    for (i = 0; i < len; i++)
    {
        if (i + 1 < len && s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
        {
            res += change(s[i + 1]) - change(s[i]);
            i++;
        }
        else if (i + 1 < len && s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
        {

            res += change(s[i + 1]) - change(s[i]);
            i++;
        }
        else if (i + 1 < len && s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
        {
            res += change(s[i + 1]) - change(s[i]);
            i++;
        }
        else
        {
            res += change(s[i]);
        }

    }
    return res;
}