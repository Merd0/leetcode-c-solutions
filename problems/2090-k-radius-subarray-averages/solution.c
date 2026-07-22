#include <stdlib.h>

int* getAverages(int* nums, int numsSize, int k, int* returnSize) {
    int* averages = malloc(numsSize * sizeof(*averages));

    if (averages == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        averages[i] = -1;
    }

    long long requiredWindowSize = 2LL * k + 1;

    if (requiredWindowSize > numsSize) {
        return averages;
    }

    int windowSize = (int)requiredWindowSize;
    long long sum = 0;

    for (int i = 0; i < windowSize; i++) {
        sum += nums[i];
    }

    // The first complete window [0, 2*k] is centered at index k.
    averages[k] = sum / windowSize;

    for (int right = windowSize; right < numsSize; right++) {
        sum += nums[right];
        sum -= nums[right - windowSize];

        // The new window ends at right, so its center is right - k.
        averages[right - k] = sum / windowSize;
    }

    return averages;
}
