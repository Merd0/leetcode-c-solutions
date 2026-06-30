#include <stdlib.h>

int maxOperations(int* nums, int numsSize, int k) {
    int* used = calloc((size_t)numsSize, sizeof(int));
    int count = 0;

    if (used == NULL) {
        return 0;
    }

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == k && used[i] != 1 && used[j] != 1) {
                used[i] = 1;
                used[j] = 1;
                count++;
            }
        }
    }

    free(used);
    return count;
}
