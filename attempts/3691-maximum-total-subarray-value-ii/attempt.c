#include <stdlib.h>

static int cmpDesc(const void* a, const void* b)
{
    int x = *(const int*)a;
    int y = *(const int*)b;

    if (x > y) return -1;
    if (x < y) return 1;
    return 0;
}

/*
 * Correct brute-force idea, but it receives TLE and requires too much memory.
 * Kept as a learning record, not as an accepted solution.
 */
long long maxTotalValue(int* nums, int numsSize, int k)
{
    int totalSubarrays = numsSize * (numsSize + 1) / 2;

    int* values = malloc((size_t)totalSubarrays * sizeof(int));
    int index = 0;

    for (int i = 0; i < numsSize; i++) {
        int max = nums[i];
        int min = nums[i];

        for (int j = i; j < numsSize; j++) {
            if (max < nums[j]) {
                max = nums[j];
            }

            if (min > nums[j]) {
                min = nums[j];
            }

            values[index] = max - min;
            index++;
        }
    }

    qsort(values, (size_t)totalSubarrays, sizeof(int), cmpDesc);

    long long totalMax = 0;

    for (int i = 0; i < k; i++) {
        totalMax += values[i];
    }

    free(values);

    return totalMax;
}
