#include <stdlib.h>
#include <string.h>

int* executeInstructions(int n, int* startPos, int startPosSize,
                         char* s, int* returnSize) {
    (void)startPosSize;

    int length = strlen(s);
    int* result = malloc(length * sizeof(int));
    *returnSize = length;

    for (int i = 0; i < length; i++) {
        int row = startPos[0];
        int col = startPos[1];
        int steps = 0;

        for (int j = i; j < length; j++) {
            int nextRow = row;
            int nextCol = col;

            if (s[j] == 'U') {
                nextRow--;
            } else if (s[j] == 'D') {
                nextRow++;
            } else if (s[j] == 'L') {
                nextCol--;
            } else {
                nextCol++;
            }

            // Reject the move before committing a position outside the grid.
            if (nextRow < 0 || nextRow >= n ||
                nextCol < 0 || nextCol >= n) {
                break;
            }

            row = nextRow;
            col = nextCol;
            steps++;
        }

        result[i] = steps;
    }

    return result;
}
