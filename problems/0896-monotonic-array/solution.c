#include <stdbool.h>

bool isMonotonic(int* nums, int numsSize) {
    int direction = 0;
    //  0: no direction yet
    //  1: non-decreasing
    // -1: non-increasing

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > nums[i - 1]) {
            if (direction == -1) {
                return false;
            }

            direction = 1;
        } else if (nums[i] < nums[i - 1]) {
            if (direction == 1) {
                return false;
            }

            direction = -1;
        }
    }

    return true;
}
