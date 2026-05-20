#include <stdlib.h>

int *runningSum(int *nums, int numsSize, int *returnSize)
{
    /*
     * Prefix sum:
     * answer[i] = nums[0] + ... + nums[i].
     */
    int *answer = malloc((size_t)numsSize * sizeof(*answer));
    int sum = 0;

    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; ++i) {
        sum += nums[i];
        answer[i] = sum;
    }

    *returnSize = numsSize;
    return answer;
}
