int numSpecial(int** mat, int matSize, int* matColSize) {
    int answer = 0;
    int cols = matColSize[0];

    for (int i = 0; i < matSize; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] == 1) {
                int rowCount = 0;
                int colCount = 0;

                for (int col = 0; col < cols; col++) {
                    if (mat[i][col] == 1) {
                        rowCount++;
                    }
                }

                for (int row = 0; row < matSize; row++) {
                    if (mat[row][j] == 1) {
                        colCount++;
                    }
                }

                if (rowCount == 1 && colCount == 1) {
                    answer++;
                }
            }
        }
    }

    return answer;
}
