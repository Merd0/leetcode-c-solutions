#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* result = malloc((n + 1) * sizeof(int));
    *returnSize = n + 1;

    for (int i = 0; i <= n; i++) {
        int temp = i;
        int bir = 0;

        while (temp > 0) {
            if ((temp & 1) == 1) {
                bir++;
            }

            temp = temp >> 1;
        }

        result[i] = bir;
    }

    return result;
}
