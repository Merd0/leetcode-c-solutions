#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* maxSlidingWindow(int* nums, int numsSize, int k, int* returnSize) {
    *returnSize = numsSize - k + 1;

    int* result = malloc(sizeof(int) * (*returnSize));

    // The deque stores indices, not values.
    int* deque = malloc(sizeof(int) * numsSize);
    int front = 0;
    int back = -1;

    for (int i = 0; i < numsSize; i++) {

        // 1) Remove indices outside the current window.
        if (front <= back && deque[front] <= i - k) {
            front++;
        }

        // 2) Remove smaller values from the back.
        while (front <= back && nums[deque[back]] < nums[i]) {
            back--;
        }

        // 3) Add the new index.
        deque[++back] = i;

        // 4) Write the maximum once the first full window exists.
        if (i >= k - 1) {
            result[i - k + 1] = nums[deque[front]];
        }
    }

    free(deque);
    return result;
}
