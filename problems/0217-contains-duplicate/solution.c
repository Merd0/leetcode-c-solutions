#include <stdbool.h>
#include <stdlib.h>

static int compare_ints(const void *left, const void *right)
{
    int a = *(const int *)left;
    int b = *(const int *)right;

    return (a > b) - (a < b);
}

bool containsDuplicate(int *nums, int numsSize)
{
    /*
     * Sort first.
     * If a duplicate exists, equal values become neighbors.
     */
    qsort(nums, (size_t)numsSize, sizeof(*nums), compare_ints);

    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }

    return false;
}
