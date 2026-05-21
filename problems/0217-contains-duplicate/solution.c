#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    if (x < y) {
        return -1;
    }
    if (x > y) {
        return 1;
    }
    return 0;
}

bool containsDuplicate(int *nums, int numsSize)
{
    qsort(nums, (size_t)numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize - 1; ++i) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }

    return false;
}
