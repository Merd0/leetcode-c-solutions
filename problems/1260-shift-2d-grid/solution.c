#include <stdlib.h>

int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k,
                int* returnSize, int** returnColumnSizes) {
    *returnSize = 0;
    *returnColumnSizes = NULL;

    if (gridSize == 0) {
        return NULL;
    }

    int rows = gridSize;
    int cols = gridColSize[0];
    int total = rows * cols;
    int** shifted = malloc(rows * sizeof(*shifted));
    int* columnSizes = malloc(rows * sizeof(*columnSizes));

    if (shifted == NULL || columnSizes == NULL) {
        free(shifted);
        free(columnSizes);
        return NULL;
    }

    for (int row = 0; row < rows; row++) {
        shifted[row] = malloc(cols * sizeof(*shifted[row]));

        if (shifted[row] == NULL) {
            for (int allocated = 0; allocated < row; allocated++) {
                free(shifted[allocated]);
            }

            free(shifted);
            free(columnSizes);
            return NULL;
        }

        columnSizes[row] = cols;
    }

    k %= total;

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int oldIndex = row * cols + col;
            int newIndex = (oldIndex + k) % total;
            int newRow = newIndex / cols;
            int newCol = newIndex % cols;

            shifted[newRow][newCol] = grid[row][col];
        }
    }

    *returnSize = rows;
    *returnColumnSizes = columnSizes;
    return shifted;
}
