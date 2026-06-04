#include <stdlib.h>

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    *returnSize = rows * cols;

    int* answer = malloc((*returnSize) * sizeof(int));
    int index = 0;

    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    while (top <= bottom && left <= right) {
        // 1) left to right
        for (int j = left; j <= right; j++) {
            answer[index++] = matrix[top][j];
        }
        top++;

        // 2) top to bottom
        for (int i = top; i <= bottom; i++) {
            answer[index++] = matrix[i][right];
        }
        right--;

        // 3) right to left
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                answer[index++] = matrix[bottom][j];
            }
            bottom--;
        }

        // 4) bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                answer[index++] = matrix[i][left];
            }
            left++;
        }
    }

    return answer;
}
