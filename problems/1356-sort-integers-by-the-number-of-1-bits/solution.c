#include <stdlib.h>

int countBits(int n)
{
    int oneBit = 0;

    while (n > 0) {
        if (n & 1) {
            oneBit++;
        }

        n = n >> 1;
    }

    return oneBit;
}

int cmp(const void* a, const void* b)
{
    int x = *(int*)a;
    int y = *(int*)b;

    int bitX = countBits(x);
    int bitY = countBits(y);

    if (bitX != bitY) {
        return bitX - bitY;
    }

    return x - y;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortByBits(int* arr, int arrSize, int* returnSize)
{
    int* result = malloc(arrSize * sizeof(int));
    *returnSize = arrSize;

    for (int i = 0; i < arrSize; i++) {
        result[i] = arr[i];
    }

    qsort(result, arrSize, sizeof(int), cmp);

    return result;
}
