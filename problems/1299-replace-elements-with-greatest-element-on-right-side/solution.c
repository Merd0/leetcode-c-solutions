#include <stdlib.h>

int* replaceElements(int* arr, int arrSize, int* returnSize) {
    int* result = malloc(arrSize * sizeof(*result));

    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = arrSize;
    int rightMax = -1;

    for (int i = arrSize - 1; i >= 0; i--) {
        // rightMax contains only values strictly to the right of index i.
        result[i] = rightMax;

        if (arr[i] > rightMax) {
            rightMax = arr[i];
        }
    }

    return result;
}
