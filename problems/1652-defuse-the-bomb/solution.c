#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    int* result = malloc(codeSize * sizeof(int));
    *returnSize = codeSize;

    if (k == 0) {
        for (int i = 0; i < codeSize; i++) {
            result[i] = 0;
        }

        return result;
    }

    int sum = 0;

    if (k > 0) {
        for (int step = 1; step <= k; step++) {
            sum += code[step % codeSize];
        }

        for (int i = 0; i < codeSize; i++) {
            result[i] = sum;
            sum -= code[(i + 1) % codeSize];
            sum += code[(i + k + 1) % codeSize];
        }
    } else {
        int window = -k;

        for (int step = 1; step <= window; step++) {
            sum += code[(codeSize - step) % codeSize];
        }

        for (int i = 0; i < codeSize; i++) {
            result[i] = sum;
            sum -= code[(i - window + codeSize) % codeSize];
            sum += code[i];
        }
    }

    return result;
}
