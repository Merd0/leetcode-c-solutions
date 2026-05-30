#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minBitwiseArray(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        ans[i] = -1;

        for (int x = 0; x <= nums[i]; x++) {
            if ((x | (x + 1)) == nums[i]) {
                ans[i] = x;
                break;
            }
        }
    }

    return ans;
}
