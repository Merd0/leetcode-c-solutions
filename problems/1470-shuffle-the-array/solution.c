#include <stdlib.h>

int *shuffle(int *nums, int numsSize, int n, int *returnSize)
{
    /*
     * nums = [x1..xn, y1..yn]
     * answer = [x1,y1,x2,y2,...]
     */
    int *answer = malloc((size_t)numsSize * sizeof(*answer));
    int write = 0;

    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    for (int i = 0; i < n; ++i) {
        answer[write] = nums[i];
        ++write;
        answer[write] = nums[i + n];
        ++write;
    }

    *returnSize = numsSize;
    return answer;
}
