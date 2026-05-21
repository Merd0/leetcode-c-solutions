#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int x = *(const int *)a;
    int y = *(const int *)b;

    return x - y;
}

int arrayPairSum(int *nums, int numsSize)
{
    qsort(nums, (size_t)numsSize, sizeof(int), compare);

    int sum = 0;

    for (int i = 0; i < numsSize; i += 2) {
        sum += nums[i];
    }

    return sum;
}
