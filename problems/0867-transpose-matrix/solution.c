#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced.
 */
int **transpose(int **matrix,
                int matrixSize,
                int *matrixColSize,
                int *returnSize,
                int **returnColumnSizes)
{
    int row = matrixSize;       /* eski satir sayisi */
    int col = matrixColSize[0]; /* eski sutun sayisi */

    /*
     * Transpose sonrasi:
     * yeni satir sayisi = eski sutun sayisi
     * yeni sutun sayisi = eski satir sayisi
     */
    *returnSize = col;

    int **result = malloc((size_t)col * sizeof(int *));
    *returnColumnSizes = malloc((size_t)col * sizeof(int));

    for (int i = 0; i < col; ++i) {
        result[i] = malloc((size_t)row * sizeof(int));
        (*returnColumnSizes)[i] = row;
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            result[j][i] = matrix[i][j];
        }
    }

    return result;
}
