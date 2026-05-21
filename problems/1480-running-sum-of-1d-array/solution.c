#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *runningSum(int *nums, int numsSize, int *returnSize)
{
    int *yDizi = malloc((size_t)numsSize * sizeof(int));

    *returnSize = numsSize;

    int sum = 0;

    for (int i = 0; i < numsSize; ++i) {
        sum += nums[i];
        yDizi[i] = sum;
    }

    return yDizi;
}
