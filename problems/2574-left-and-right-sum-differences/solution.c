#include <stdlib.h>

int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    int* sums = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    int totalSum = 0;

    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    int rightSum = 0;
    int leftSum = 0;

    for (int i = 0; i < numsSize; i++) {
        rightSum = totalSum - leftSum - nums[i];
        sums[i] = abs(leftSum - rightSum);
        leftSum += nums[i];
    }

    return sums;
}
