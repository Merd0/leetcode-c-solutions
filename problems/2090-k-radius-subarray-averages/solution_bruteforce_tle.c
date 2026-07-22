#include <stdlib.h>

int* getAverages(int* nums, int numsSize, int k, int* returnSize) {
    int* averages = malloc(numsSize * sizeof(*averages));

    if (averages == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = numsSize;

    for (int center = 0; center < numsSize; center++) {
        int left = center - k;
        int right = center + k;

        if (left < 0 || right >= numsSize) {
            averages[center] = -1;
            continue;
        }

        long long sum = 0;

        // Correct, but overlapping windows repeatedly sum the same elements.
        for (int i = left; i <= right; i++) {
            sum += nums[i];
        }

        averages[center] = sum / (2 * k + 1);
    }

    return averages;
}
