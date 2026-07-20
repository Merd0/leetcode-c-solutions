#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decrypt(int* code, int codeSize, int k, int* returnSize) {
    int* result = malloc(codeSize * sizeof(int));
    *returnSize = codeSize;

    for (int i = 0; i < codeSize; i++) {
        int sum = 0;

        if (k > 0) {
            for (int step = 1; step <= k; step++) {
                int index = (i + step) % codeSize;
                sum += code[index];
            }
        } else if (k < 0) {
            for (int step = 1; step <= -k; step++) {
                int index = (i - step + codeSize) % codeSize;
                sum += code[index];
            }
        }

        result[i] = sum;
    }

    return result;
}
