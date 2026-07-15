#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int* answer = malloc(numsSize * sizeof(int));
    int* stack = malloc(numsSize * sizeof(int));

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        answer[i] = -1;
    }

    int top = -1;

    for (int i = 0; i < 2 * numsSize; i++) {
        int idx = i % numsSize;

        // The current value solves every smaller unresolved value on top.
        while (top >= 0 && nums[idx] > nums[stack[top]]) {
            answer[stack[top]] = nums[idx];
            top--;
        }

        // Push each original index once. The second pass only resolves wraparound.
        if (i < numsSize) {
            stack[++top] = idx;
        }
    }

    free(stack);
    return answer;
}
