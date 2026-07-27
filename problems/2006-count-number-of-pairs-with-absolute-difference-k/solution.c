#include <stdlib.h>

int countKDifference(int* nums, int numsSize, int k) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            int difference = abs(nums[i] - nums[j]);

            if (difference == k) {
                count++;
            }
        }
    }

    return count;
}
