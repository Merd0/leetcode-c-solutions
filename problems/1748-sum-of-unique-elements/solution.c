#include <stdlib.h>

int sumOfUnique(int* nums, int numsSize) {
    int* unique = calloc(101, sizeof(int));
    int uniqueNums = 0;

    for (int i = 0; i < numsSize; i++) {
        unique[nums[i]]++;
    }

    for (int i = 0; i < numsSize; i++) {
        if (unique[nums[i]] == 1) {
            uniqueNums += nums[i];
        }
    }

    free(unique);

    return uniqueNums;
}
