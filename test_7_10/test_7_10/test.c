#define _CRT_SECURE_NO_WARNINGS
//125. 验证回文串
bool isPalindrome(char* s) {
    int i = 0, j = 0;
    while (s[i]) {
        if (s[i] >= 48 && s[i] <= 57)
            s[j++] = s[i];
        else if (s[i] >= 65 && s[i] <= 90) {
            s[i] += 32;
            s[j++] = s[i];
        }
        else if (s[i] >= 97 && s[i] <= 122)
            s[j++] = s[i];
        i++;
    }
    int left = 0, right = j - 1;
    while (left < right) {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}


