#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
    int *yDizi = malloc((size_t)(numsSize * 2) * sizeof(int));

    *returnSize = 2 * numsSize;

    for (int i = 0; i < numsSize; ++i) {
        yDizi[i] = nums[i];
    }

    for (int i = numsSize; i < 2 * numsSize; ++i) {
        yDizi[i] = nums[i - numsSize];
    }

    return yDizi;
}
