int diagonalSum(int **mat, int matSize, int *matColSize)
{
    (void)matColSize;

    int sum = 0;

    for (int i = 0; i < matSize; i++) {
        sum += mat[i][i];
        sum += mat[i][matSize - 1 - i];
    }

    if (matSize % 2 == 1) {
        int mid = matSize / 2;
        sum -= mat[mid][mid];
    }

    return sum;
}
