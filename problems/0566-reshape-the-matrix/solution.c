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

int **matrixReshape(int **mat,
                    int matSize,
                    int *matColSize,
                    int r,
                    int c,
                    int *returnSize,
                    int **returnColumnSizes)
{
    /*
     * Keep row-major order.
     * If total cell count is different, return matrix with original shape.
     */
    int old_rows = matSize;
    int old_cols = matColSize[0];
    int new_rows = r;
    int new_cols = c;

    if (old_rows * old_cols != r * c) {
        new_rows = old_rows;
        new_cols = old_cols;
    }

    int **answer = allocate_matrix(new_rows, new_cols, returnColumnSizes);
    if (answer == NULL) {
        *returnSize = 0;
        return NULL;
    }

    *returnSize = new_rows;

    for (int index = 0; index < old_rows * old_cols; ++index) {
        int old_row = index / old_cols;
        int old_col = index % old_cols;
        int new_row = index / new_cols;
        int new_col = index % new_cols;

        answer[new_row][new_col] = mat[old_row][old_col];
    }

    return answer;
}
