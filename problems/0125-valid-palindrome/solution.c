#include <stdbool.h>
#include <string.h>

bool isAlphaNum(char c)
{
    if (c >= 'a' && c <= 'z') {
        return true;
    }
    if (c >= 'A' && c <= 'Z') {
        return true;
    }
    if (c >= '0' && c <= '9') {
        return true;
    }

    return false;
}

char toLowerChar(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }

    return c;
}

bool isPalindrome(char *s)
{
    int left = 0;
    int right = (int)strlen(s) - 1;

    while (left < right) {
        /* soldaki karakter harf/sayi degilse gec */
        while (left < right && !isAlphaNum(s[left])) {
            left++;
        }

        /* sagdaki karakter harf/sayi degilse gec */
        while (left < right && !isAlphaNum(s[right])) {
            right--;
        }

        char leftChar = toLowerChar(s[left]);
        char rightChar = toLowerChar(s[right]);

        if (leftChar != rightChar) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}
