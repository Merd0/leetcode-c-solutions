#include <stdlib.h>

int** largestLocal(int** grid, int gridSize, int* gridColSize,
                   int* returnSize, int** returnColumnSizes) {
    (void)gridColSize;

    int outSize = gridSize - 2;

    int** result = malloc(outSize * sizeof(int*));
    *returnColumnSizes = malloc(outSize * sizeof(int));
    *returnSize = outSize;

    for (int i = 0; i < outSize; i++) {
        result[i] = malloc(outSize * sizeof(int));
        (*returnColumnSizes)[i] = outSize;
    }

    for (int i = 0; i < outSize; i++) {
        for (int j = 0; j < outSize; j++) {
            int maxValue = grid[i][j];

            // The output cell represents the 3x3 window starting at (i, j).
            for (int row = i; row <= i + 2; row++) {
                for (int col = j; col <= j + 2; col++) {
                    if (grid[row][col] > maxValue) {
                        maxValue = grid[row][col];
                    }
                }
            }

            result[i][j] = maxValue;
        }
    }

    return result;
}
