#include <stdlib.h>

int compare(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);

    return nums[numsSize / 2];
}
