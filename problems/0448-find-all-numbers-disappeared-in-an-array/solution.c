#include <stdlib.h>

int *findDisappearedNumbers(int *nums, int numsSize, int *returnSize)
{
    /*
     * Values are in range 1..n.
     * Mark nums[value - 1] as negative when value appears.
     */
    int *missing = malloc((size_t)numsSize * sizeof(*missing));

    if (missing == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = 0;

    for (int i = 0; i < numsSize; ++i) {
        int index = abs(nums[i]) - 1;

        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    }

    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] > 0) {
            missing[*returnSize] = i + 1;
            ++(*returnSize);
        }
    }

    return missing;
}
