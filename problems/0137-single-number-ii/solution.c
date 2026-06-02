#include <stdlib.h>

int cmp(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int singleNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize - 1; i += 3) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
    }

    return nums[numsSize - 1];
}
