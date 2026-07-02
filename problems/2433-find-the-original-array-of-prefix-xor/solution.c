#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *findArray(int *pref, int prefSize, int *returnSize)
{
    int *arr = malloc((size_t)prefSize * sizeof(*arr));

    *returnSize = prefSize;

    if (arr == NULL) {
        *returnSize = 0;
        return NULL;
    }

    arr[0] = pref[0];

    for (int i = 1; i < prefSize; i++) {
        arr[i] = pref[i] ^ pref[i - 1];
    }

    return arr;
}
