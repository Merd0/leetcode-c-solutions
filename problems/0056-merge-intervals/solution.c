#include <stdlib.h>

static int compareIntervals(const void* a, const void* b) {
    int* intervalA = *(int**)a;
    int* intervalB = *(int**)b;

    if (intervalA[0] < intervalB[0]) {
        return -1;
    }

    if (intervalA[0] > intervalB[0]) {
        return 1;
    }

    return 0;
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced.
 */
int** merge(int** intervals, int intervalsSize, int* intervalsColSize,
            int* returnSize, int** returnColumnSizes) {
    (void)intervalsColSize;

    qsort(intervals, intervalsSize, sizeof(int*), compareIntervals);

    int** result = malloc(intervalsSize * sizeof(int*));
    *returnColumnSizes = malloc(intervalsSize * sizeof(int));
    *returnSize = 0;

    int currentStart = intervals[0][0];
    int currentEnd = intervals[0][1];

    for (int i = 1; i < intervalsSize; i++) {
        int nextStart = intervals[i][0];
        int nextEnd = intervals[i][1];

        if (nextStart <= currentEnd) {
            if (nextEnd > currentEnd) {
                currentEnd = nextEnd;
            }
        } else {
            // The active interval is closed; write one result row.
            result[*returnSize] = malloc(2 * sizeof(int));
            result[*returnSize][0] = currentStart;
            result[*returnSize][1] = currentEnd;
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++;

            currentStart = nextStart;
            currentEnd = nextEnd;
        }
    }

    // Flush the final active interval; no later interval exists to close it.
    result[*returnSize] = malloc(2 * sizeof(int));
    result[*returnSize][0] = currentStart;
    result[*returnSize][1] = currentEnd;
    (*returnColumnSizes)[*returnSize] = 2;
    (*returnSize)++;

    return result;
}
