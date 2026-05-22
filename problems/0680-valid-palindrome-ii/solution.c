#include <stdbool.h>
#include <string.h>

bool isPalindromeRange(char *s, int left, int right)
{
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

bool validPalindrome(char *s)
{
    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else {
            return isPalindromeRange(s, left + 1, right) ||
                   isPalindromeRange(s, left, right - 1);
        }
    }

    return true;
}
