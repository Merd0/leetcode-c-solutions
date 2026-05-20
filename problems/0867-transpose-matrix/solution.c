#include <stdlib.h>

static int **allocate_matrix(int rows, int cols, int **column_sizes)
{
    int **matrix = malloc((size_t)rows * sizeof(*matrix));

    *column_sizes = malloc((size_t)rows * sizeof(**column_sizes));
    if (matrix == NULL || *column_sizes == NULL) {
        free(matrix);
        free(*column_sizes);
        return NULL;
    }

    for (int row = 0; row < rows; ++row) {
        matrix[row] = malloc((size_t)cols * sizeof(**matrix));
        if (matrix[row] == NULL) {
            return NULL;
        }
        (*column_sizes)[row] = cols;
    }

    return matrix;
}

int **transpose(int **matrix,
                int matrixSize,
                int *matrixColSize,
                int *returnSize,
                int **returnColumnSizes)
{
    /*
     * Transpose rule:
     * answer[col][row] = matrix[row][col].
     */
    int rows = matrixSize;
    int cols = matrixColSize[0];
    int **answer = allocate_matrix(cols, rows, returnColumnSizes);

    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = cols;

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            answer[col][row] = matrix[row][col];
        }
    }

    return answer;
}
