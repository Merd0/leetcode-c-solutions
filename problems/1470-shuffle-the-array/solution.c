#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{
    int *yDizi = malloc((size_t)(2 * n) * sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < n; ++i) {
        yDizi[2 * i] = nums[i];
        yDizi[2 * i + 1] = nums[i + n];
    }

    return yDizi;
}
