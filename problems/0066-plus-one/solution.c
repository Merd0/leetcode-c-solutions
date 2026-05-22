#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }

        digits[i] = 0;
    }

    int *ans = calloc(digitsSize + 1, sizeof(int));
    ans[0] = 1;

    *returnSize = digitsSize + 1;
    return ans;
}
