#include <limits.h>

int myAtoi(char* s) {
    long long toInt = 0;
    int negative = 0;
    int i = 0;

    // 1) Bastaki bosluklari gec.
    while (s[i] == ' ') {
        i++;
    }

    // 2) Isaret kontrolu.
    if (s[i] == '-') {
        negative = 1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    long long limit = negative ? -(long long)INT_MIN : INT_MAX;

    // 3) Rakamlari oku.
    while (s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        // 4) Overflow'u carpma/toplama yapmadan once yakala.
        if (toInt > (limit - digit) / 10) {
            return negative ? INT_MIN : INT_MAX;
        }

        toInt = toInt * 10 + digit;
        i++;
    }

    if (negative == 1) {
        return (int)-toInt;
    }

    return (int)toInt;
}
