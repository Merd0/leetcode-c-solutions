#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y) {
        return -1;
    }
    if (x > y) {
        return 1;
    }
    return 0;
}

int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    int *result = malloc(numsSize * sizeof(int));

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        result[i] = nums[i] * nums[i];
    }

    qsort(result, numsSize, sizeof(int), compare);

    return result;
}
