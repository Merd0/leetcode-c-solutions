# #0566 - Reshape the Matrix

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Matrix, Simulation
- Companies: Not tracked in this repo
- Hint: A reshape is possible only when `old_rows * old_cols == r * c`.
- Solved: 2026-05-21
- LeetCode: https://leetcode.com/problems/reshape-the-matrix/

## Problem Statement

TR: `mat` adinda `m x n` boyutlu bir matris ve iki tamsayi `r`, `c` verilir. Matrisi ayni satir-satir okuma sirasini koruyarak `r x c` boyutuna donustur. Eger bu donusum eleman sayisi yuzunden mumkun degilse orijinal matrisi dondur.

EN: Given an `m x n` matrix `mat` and two integers `r` and `c`, reshape the matrix into `r x c` while preserving row-traversing order. If the reshape is not possible, return the original matrix shape.

## Starter Code (C)

```c
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {

}
```

## Parameters

- `mat`: Input matrix.
- `matSize`: Number of rows in `mat`.
- `matColSize`: Column count for each row.
- `r`: Requested row count.
- `c`: Requested column count.
- `returnSize`: Output row count of the returned matrix.
- `returnColumnSizes`: Output column sizes of the returned matrix.

## Return

TR: Yeni matris pointer'i. Donus boyutlari `returnSize` ve `returnColumnSizes` ile verilir.

EN: Return a pointer to the result matrix. Returned dimensions are written through `returnSize` and `returnColumnSizes`.

## Examples

### Example 1

```text
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]
Explanation:
The original matrix has 4 values and the requested shape also has 4 cells.
The values keep their row-traversing order.
```

### Example 2

```text
Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]
Explanation:
A 2 x 4 result needs 8 cells, but the original matrix has only 4 cells.
The reshape is not legal, so the original matrix shape is returned.
```

## Constraints

- `m == mat.length`
- `n == mat[i].length`
- `1 <= m, n <= 100`
- `-1000 <= mat[i][j] <= 1000`
- `1 <= r, c <= 300`

## Approach

TR: Once toplam eleman sayisini kontrol et. Donusum mumkunse matrisi tek boyutlu row-major akista dusun ve her `index` degerini yeni satir/sutun konumuna cevir.

EN: First check the total number of cells. If reshape is possible, treat the matrix as one row-major sequence and map each flat `index` into the new row/column position.

## Solution

- [solution.c](solution.c)
