#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *getMaximumXor(int *nums, int numsSize, int maximumBit, int *returnSize)
{
    int *answer = malloc((size_t)numsSize * sizeof(*answer));

    *returnSize = numsSize;

    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    int current_xor = 0;

    for (int i = 0; i < numsSize; i++) {
        current_xor ^= nums[i];
    }

    int mask = (1 << maximumBit) - 1;

    for (int i = numsSize - 1, out = 0; i >= 0; i--, out++) {
        answer[out] = current_xor ^ mask;
        current_xor ^= nums[i];
    }

    return answer;
}
