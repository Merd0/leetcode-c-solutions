#include <stdlib.h>

typedef struct {
    int** prefix;
    int rows;
    int cols;
} NumMatrix;

NumMatrix* numMatrixCreate(int** matrix, int matrixSize,
                           int* matrixColSize) {
    NumMatrix* obj = malloc(sizeof(*obj));

    if (obj == NULL) {
        return NULL;
    }

    obj->rows = matrixSize;
    obj->cols = matrixColSize[0];
    obj->prefix = malloc((obj->rows + 1) * sizeof(int*));

    if (obj->prefix == NULL) {
        free(obj);
        return NULL;
    }

    for (int i = 0; i <= obj->rows; i++) {
        obj->prefix[i] = calloc(obj->cols + 1, sizeof(int));

        if (obj->prefix[i] == NULL) {
            for (int row = 0; row < i; row++) {
                free(obj->prefix[row]);
            }

            free(obj->prefix);
            free(obj);
            return NULL;
        }
    }

    for (int i = 1; i <= obj->rows; i++) {
        for (int j = 1; j <= obj->cols; j++) {
            // Add the upper and left areas, then remove their shared overlap.
            obj->prefix[i][j] = matrix[i - 1][j - 1]
                                + obj->prefix[i - 1][j]
                                + obj->prefix[i][j - 1]
                                - obj->prefix[i - 1][j - 1];
        }
    }

    return obj;
}

int numMatrixSumRegion(NumMatrix* obj, int row1, int col1,
                       int row2, int col2) {
    return obj->prefix[row2 + 1][col2 + 1]
           - obj->prefix[row1][col2 + 1]
           - obj->prefix[row2 + 1][col1]
           + obj->prefix[row1][col1];
}

void numMatrixFree(NumMatrix* obj) {
    if (obj == NULL) {
        return;
    }

    for (int i = 0; i <= obj->rows; i++) {
        free(obj->prefix[i]);
    }

    free(obj->prefix);
    free(obj);
}
