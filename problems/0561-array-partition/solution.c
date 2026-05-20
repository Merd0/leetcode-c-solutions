#include <stdlib.h>

static int compare_ints(const void *left, const void *right)
{
    int a = *(const int *)left;
    int b = *(const int *)right;

    return (a > b) - (a < b);
}

int arrayPairSum(int *nums, int numsSize)
{
    /*
     * Sort and pair neighbors.
     * The smaller value of each pair is at even indexes.
     */
    int sum = 0;

    qsort(nums, (size_t)numsSize, sizeof(*nums), compare_ints);

    for (int i = 0; i < numsSize; i += 2) {
        sum += nums[i];
    }

    return sum;
}
