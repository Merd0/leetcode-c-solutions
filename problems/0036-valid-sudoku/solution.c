#include <stdbool.h>

bool isValidSudoku(char** board, int boardSize, int* boardColSize) {
    for (int row = 0; row < boardSize; row++) {
        int seen[9] = {0};

        for (int col = 0; col < boardColSize[row]; col++) {
            if (board[row][col] == '.') {
                continue;
            }

            int digit = board[row][col] - '1';
            seen[digit]++;

            if (seen[digit] == 2) {
                return false;
            }
        }
    }

    for (int col = 0; col < 9; col++) {
        int seen[9] = {0};

        for (int row = 0; row < 9; row++) {
            if (board[row][col] == '.') {
                continue;
            }

            int digit = board[row][col] - '1';
            seen[digit]++;

            if (seen[digit] == 2) {
                return false;
            }
        }
    }

    for (int boxRow = 0; boxRow < 9; boxRow += 3) {
        for (int boxCol = 0; boxCol < 9; boxCol += 3) {
            int seen[9] = {0};

            for (int row = boxRow; row < boxRow + 3; row++) {
                for (int col = boxCol; col < boxCol + 3; col++) {
                    if (board[row][col] == '.') {
                        continue;
                    }

                    int digit = board[row][col] - '1';
                    seen[digit]++;

                    if (seen[digit] == 2) {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}
