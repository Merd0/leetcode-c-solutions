#include <stdlib.h>

int *buildArray(int *nums, int numsSize, int *returnSize)
{
    /*
     * Direct rule:
     * answer[i] = nums[nums[i]].
     */
    int *answer = malloc((size_t)numsSize * sizeof(*answer));

    for (int i = 0; i < numsSize; ++i) {
        answer[i] = nums[nums[i]];
    }

    *returnSize = numsSize;
    return answer;
}
