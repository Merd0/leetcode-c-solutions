#include <stdlib.h>

static int compare_int(const void* a, const void* b) {
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int maxOperations(int* nums, int numsSize, int k) {
    qsort(nums, numsSize, sizeof(int), compare_int);

    int left = 0;
    int right = numsSize - 1;
    int count = 0;

    while (left < right) {
        int sum = nums[left] + nums[right];

        if (sum == k) {
            count++;
            left++;
            right--;
        } else if (sum < k) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}
