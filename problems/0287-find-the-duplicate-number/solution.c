#include <stdlib.h>

int findDuplicate(int* nums, int numsSize) {
    int* count = calloc((size_t)numsSize, sizeof(int));
    if (count == NULL) {
        return -1;
    }

    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;

        if (count[nums[i]] > 1) {
            int duplicate = nums[i];
            free(count);
            return duplicate;
        }
    }

    free(count);
    return -1;
}
