#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize)
{
    int* result = malloc((size_t)numsSize * sizeof(int));
    *returnSize = numsSize;

    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) {
            result[index] = nums[i];
            index++;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == pivot) {
            result[index] = nums[i];
            index++;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > pivot) {
            result[index] = nums[i];
            index++;
        }
    }

    return result;
}
