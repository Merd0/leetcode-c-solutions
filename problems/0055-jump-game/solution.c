#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    if (nums[0] == 0 && numsSize > 1) {
        return false;
    }

    int farthest = 0;

    for (int i = 0; i < numsSize; i++) {
        if (i > farthest) {
            return false;
        }

        int reach = i + nums[i];

        if (reach > farthest) {
            farthest = reach;
        }
    }

    return true;
}
