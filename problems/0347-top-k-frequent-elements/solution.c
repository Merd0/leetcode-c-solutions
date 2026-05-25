#include <stdlib.h>

typedef struct {
    int value;
    int count;
} Pair;

int compareInt(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int comparePairByCount(const void* a, const void* b) {
    Pair x = *(Pair*)a;
    Pair y = *(Pair*)b;

    if (x.count > y.count) return -1;
    if (x.count < y.count) return 1;
    return 0;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {

    qsort(nums, numsSize, sizeof(int), compareInt);

    Pair* pairs = malloc(numsSize * sizeof(Pair));
    int uniqueSize = 0;

    int i = 0;

    // Equal values are adjacent after sorting, so count each block.
    while (i < numsSize) {
        int current = nums[i];
        int count = 0;

        while (i < numsSize && nums[i] == current) {
            count++;
            i++;
        }

        pairs[uniqueSize].value = current;
        pairs[uniqueSize].count = count;
        uniqueSize++;
    }

    qsort(pairs, uniqueSize, sizeof(Pair), comparePairByCount);

    int* result = malloc(k * sizeof(int));
    *returnSize = k;

    for (int i = 0; i < k; i++) {
        result[i] = pairs[i].value;
    }

    free(pairs);

    return result;
}
