#include <stdlib.h>

int **transpose(int **matrix,
                int matrixSize,
                int *matrixColSize,
                int *returnSize,
                int **returnColumnSizes)
{
    int rowCount = matrixSize;
    int colCount = matrixColSize[0];

    int **result = malloc((size_t)colCount * sizeof(int *));
    *returnColumnSizes = malloc((size_t)colCount * sizeof(int));
    *returnSize = colCount;

    for (int i = 0; i < colCount; ++i) {
        result[i] = malloc((size_t)rowCount * sizeof(int));
        (*returnColumnSizes)[i] = rowCount;
    }

    /* Transpose rule: old [row][col] becomes new [col][row]. */
    for (int row = 0; row < rowCount; ++row) {
        for (int col = 0; col < colCount; ++col) {
            result[col][row] = matrix[row][col];
        }
    }

    return result;
}
