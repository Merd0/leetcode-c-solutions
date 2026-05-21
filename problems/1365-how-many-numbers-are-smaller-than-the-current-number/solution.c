#include <stdlib.h>

int *smallerNumbersThanCurrent(int *nums, int numsSize, int *returnSize)
{
    /*
     * Values are between 0 and 100.
     * Count frequencies, then prefix counts tell how many are smaller.
     */
    int counts[101] = {0};
    int smaller_before[101] = {0};
    int *answer = malloc((size_t)numsSize * sizeof(*answer));

    for (int i = 0; i < numsSize; ++i) {
        ++counts[nums[i]];
    }

    for (int value = 1; value <= 100; ++value) {
        smaller_before[value] = smaller_before[value - 1] + counts[value - 1];
    }

    for (int i = 0; i < numsSize; ++i) {
        answer[i] = smaller_before[nums[i]];
    }

    *returnSize = numsSize;
    return answer;
}
