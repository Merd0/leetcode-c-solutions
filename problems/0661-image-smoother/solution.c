#include <stdlib.h>

int** imageSmoother(int** img, int imgSize, int* imgColSize,
                    int* returnSize, int** returnColumnSizes) {
    int rows = imgSize;
    int cols = imgColSize[0];

    int** result = malloc(rows * sizeof(int*));
    *returnColumnSizes = malloc(rows * sizeof(int));
    *returnSize = rows;

    for (int i = 0; i < rows; i++) {
        result[i] = malloc(cols * sizeof(int));
        (*returnColumnSizes)[i] = cols;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int sum = 0;
            int count = 0;

            // Scan the 3x3 neighborhood around the current pixel.
            for (int row = i - 1; row <= i + 1; row++) {
                for (int col = j - 1; col <= j + 1; col++) {
                    if (row >= 0 && row < rows &&
                        col >= 0 && col < cols) {
                        sum += img[row][col];
                        count++;
                    }
                }
            }

            result[i][j] = sum / count;
        }
    }

    return result;
}
