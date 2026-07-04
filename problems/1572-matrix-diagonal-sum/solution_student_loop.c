int diagonalSum(int **mat, int matSize, int *matColSize)
{
    int count = 0;

    for (int i = 0; i < matSize; i++) {
        for (int j = i; j < matColSize[i]; j++) {
            count += mat[i][j];
            break;
        }
    }

    for (int i = 0; i < matSize; i++) {
        for (int j = matSize - 1 - i; j >= 0; j--) {
            count += mat[i][j];
            break;
        }
    }

    if (matSize % 2 == 1) {
        int mid = matSize / 2;
        count -= mat[mid][mid];
    }

    return count;
}
