#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int aL = strlen(a) - 1;
    int bL = strlen(b) - 1;

    int lenA = strlen(a);
    int lenB = strlen(b);
    int maxLen = lenA > lenB ? lenA : lenB;

    char* result = malloc(maxLen + 2);
    result[maxLen + 1] = '\0';

    int k = maxLen;
    int carry = 0;

    while (aL >= 0 || bL >= 0 || carry) {
        int bit1 = 0;
        int bit2 = 0;

        if (aL >= 0) {
            bit1 = a[aL] - '0';
            aL--;
        }

        if (bL >= 0) {
            bit2 = b[bL] - '0';
            bL--;
        }

        int sum = bit1 + bit2 + carry;

        result[k] = (sum & 1) + '0';
        carry = sum >> 1;
        k--;
    }

    /*
     * If there was no final carry, result[0] is unused.
     * Shift left so callers can safely free the original malloc pointer.
     */
    int start = k + 1;
    if (start > 0) {
        int write = 0;

        while (result[start] != '\0') {
            result[write] = result[start];
            write++;
            start++;
        }

        result[write] = '\0';
    }

    return result;
}
