#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    int* evenOdd = malloc(2 * sizeof(int));

    evenOdd[0] = 0;
    evenOdd[1] = 0;

    *returnSize = 2;

    int bas = 0;

    while (n > 0) {
        if ((n & 1) == 1) {
            if (bas % 2 == 0) {
                evenOdd[0]++;
            } else {
                evenOdd[1]++;
            }
        }

        bas++;
        n = n >> 1;
    }

    return evenOdd;
}
