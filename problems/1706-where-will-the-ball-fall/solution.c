#include <stdlib.h>

int* findBall(int** grid, int gridSize, int* gridColSize,
              int* returnSize) {
    int cols = gridColSize[0];
    int* result = malloc(cols * sizeof(int));
    *returnSize = cols;

    for (int startCol = 0; startCol < cols; startCol++) {
        int col = startCol;

        for (int row = 0; row < gridSize; row++) {
            int direction = grid[row][col];
            int nextCol = col + direction;

            // The ball hits a wall or enters a V-shaped pair of boards.
            if (nextCol < 0 || nextCol >= cols ||
                grid[row][nextCol] != direction) {
                col = -1;
                break;
            }

            col = nextCol;
        }

        result[startCol] = col;
    }

    return result;
}
