#include <stdlib.h>

int *getConcatenation(int *nums, int numsSize, int *returnSize)
{
    /*
     * Copy the same array twice into a new array.
     */
    int *answer = malloc((size_t)(numsSize * 2) * sizeof(*answer));

    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < numsSize; ++i) {
        answer[i] = nums[i];
        answer[i + numsSize] = nums[i];
    }

    *returnSize = numsSize * 2;
    return answer;
}
