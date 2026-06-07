#include <stdlib.h>

int* xorQueries(int* arr,
                int arrSize,
                int** queries,
                int queriesSize,
                int* queriesColSize,
                int* returnSize) {
    (void)arrSize;
    (void)queriesColSize;

    int* xorArr = malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;

    for (int i = 0; i < queriesSize; i++) {
        int left = queries[i][0];
        int right = queries[i][1];

        int xor = 0;

        for (int j = left; j <= right; j++) {
            xor = xor ^ arr[j];
        }

        xorArr[i] = xor;
    }

    return xorArr;
}
