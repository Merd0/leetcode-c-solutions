#include <stdlib.h>

char* toHex(int num) {
    if (num == 0) {
        char* zero = malloc(2 * sizeof(char));
        zero[0] = '0';
        zero[1] = '\0';
        return zero;
    }

    char hex[] = "0123456789abcdef";
    char* result = malloc(9 * sizeof(char)); // 8 hex digit + '\0'

    unsigned int n = num;
    int index = 0;

    while (n != 0) {
        int digit = n & 0xF;          // son 4 biti al
        result[index++] = hex[digit]; // karşılık gelen hex char
        n = n >> 4;                   // 4 bit sağa kaydır
    }

    result[index] = '\0';

    // string şu an tersten, düzeltelim
    int left = 0;
    int right = index - 1;

    while (left < right) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;

        left++;
        right--;
    }

    return result;
}
