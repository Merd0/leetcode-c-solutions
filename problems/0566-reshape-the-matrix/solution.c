#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced,
 * assume caller calls free().
 */
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

    /* Eger eleman sayisi esit degilse reshape yapilamaz. */
    if (oldRow * oldCol != r * c) {
        *returnSize = oldRow;
        *returnColumnSizes = malloc((size_t)oldRow * sizeof(int));

        for (int i = 0; i < oldRow; ++i) {
            (*returnColumnSizes)[i] = oldCol;
        }

        return mat;
    }

    /* Yeni matrix olustur. */
    int **result = malloc((size_t)r * sizeof(int *));

    *returnSize = r;
    *returnColumnSizes = malloc((size_t)r * sizeof(int));

    for (int i = 0; i < r; ++i) {
        result[i] = malloc((size_t)c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    int index = 0;

    /* Eski matrix'i satir satir gezip yeni matrix'e koy. */
    for (int i = 0; i < oldRow; ++i) {
        for (int j = 0; j < oldCol; ++j) {
            result[index / c][index % c] = mat[i][j];
            ++index;
        }
    }

    return result;
}
