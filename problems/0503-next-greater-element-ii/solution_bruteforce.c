#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int* answer = malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        answer[i] = -1;
    }

    for (int i = 0; i < numsSize; i++) {
        int curr = (i + 1) % numsSize;

        // Walk circularly until we come back to the starting index.
        while (curr != i) {
            if (nums[curr] > nums[i]) {
                answer[i] = nums[curr];
                break;
            }

            curr = (curr + 1) % numsSize;
        }
    }

    return answer;
}
