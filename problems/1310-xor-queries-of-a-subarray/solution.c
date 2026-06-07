#include <stdlib.h>

int* xorQueries(int* arr,
                int arrSize,
                int** queries,
                int queriesSize,
                int* queriesColSize,
                int* returnSize) {
    (void)queriesColSize;

    int* answer = malloc(queriesSize * sizeof(int));
    *returnSize = queriesSize;

    int* prefix = malloc((arrSize + 1) * sizeof(int));

    prefix[0] = 0;

    for (int i = 0; i < arrSize; i++) {
        prefix[i + 1] = prefix[i] ^ arr[i];
    }

    for (int i = 0; i < queriesSize; i++) {
        int left = queries[i][0];
        int right = queries[i][1];

        answer[i] = prefix[right + 1] ^ prefix[left];
    }

    free(prefix);

    return answer;
}
