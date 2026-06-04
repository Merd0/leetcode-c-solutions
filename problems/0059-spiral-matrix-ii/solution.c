#include <stdlib.h>

int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int** matrix = malloc(n * sizeof(int*));

    *returnSize = n;
    *returnColumnSizes = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(n * sizeof(int));
        (*returnColumnSizes)[i] = n;
    }

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = n - 1;

    int num = 1;

    while (top <= bottom && left <= right) {
        // Move right.
        for (int j = left; j <= right; j++) {
            matrix[top][j] = num++;
        }
        top++;

        // Move down.
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num++;
        }
        right--;

        // Move left.
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                matrix[bottom][j] = num++;
            }
            bottom--;
        }

        // Move up.
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num++;
            }
            left++;
        }
    }

    return matrix;
}
