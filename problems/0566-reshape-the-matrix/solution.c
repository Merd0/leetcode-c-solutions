#include <stdlib.h>

int **matrixReshape(int **mat,
                    int matSize,
                    int *matColSize,
                    int r,
                    int c,
                    int *returnSize,
                    int **returnColumnSizes)
{
    int oldRow = matSize;
    int oldCol = matColSize[0];

    /* Reshape is impossible if total cell count changes. */
    if (oldRow * oldCol != r * c) {
        *returnSize = oldRow;
        *returnColumnSizes = malloc((size_t)oldRow * sizeof(int));

        for (int i = 0; i < oldRow; ++i) {
            (*returnColumnSizes)[i] = oldCol;
        }

        return mat;
    }

    int **result = malloc((size_t)r * sizeof(int *));
    *returnColumnSizes = malloc((size_t)r * sizeof(int));
    *returnSize = r;

    for (int i = 0; i < r; ++i) {
        result[i] = malloc((size_t)c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    /* Walk the old matrix row by row and place values into the new shape. */
    int index = 0;
    for (int i = 0; i < oldRow; ++i) {
        for (int j = 0; j < oldCol; ++j) {
            result[index / c][index % c] = mat[i][j];
            ++index;
        }
    }

    return result;
}
