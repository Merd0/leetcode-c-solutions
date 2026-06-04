int countLive(int** board, int rows, int cols, int i, int j) {
    int count = 0;

    for (int r = i - 1; r <= i + 1; r++) {
        for (int c = j - 1; c <= j + 1; c++) {
            // Do not count the cell itself.
            if (r == i && c == j) {
                continue;
            }

            // Stay inside the matrix.
            if (r >= 0 && r < rows && c >= 0 && c < cols) {
                // Values 1 and 2 were live in the original board.
                if (board[r][c] == 1 || board[r][c] == 2) {
                    count++;
                }
            }
        }
    }

    return count;
}

void gameOfLife(int** board, int boardSize, int* boardColSize) {
    int rows = boardSize;
    int cols = boardColSize[0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int live = countLive(board, rows, cols, i, j);

            if (board[i][j] == 1) {
                // Live cell dies by underpopulation or overpopulation.
                if (live < 2 || live > 3) {
                    board[i][j] = 2;
                }
            } else {
                // Dead cell becomes live with exactly three live neighbors.
                if (live == 3) {
                    board[i][j] = 3;
                }
            }
        }
    }

    // Convert temporary values to final real states.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            board[i][j] = board[i][j] % 2;
        }
    }
}
