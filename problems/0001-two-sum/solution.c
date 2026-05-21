#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    /*
     * Brute force:
     * Try every pair and return the pair whose sum is target.
     * Time: O(n^2)
     */
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int *answer = malloc(2 * sizeof(*answer));
                answer[0] = i;
                answer[1] = j;
                *returnSize = 2;
                return answer;
            }
        }
    }

    *returnSize = 0;
    return NULL;
}
