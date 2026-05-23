# #0867 - Transpose Matrix

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Matrix, Simulation
- Companies: Not tracked in this repo
- Hint: Cell `(row, col)` in the old matrix becomes `(col, row)` in the new matrix.
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/transpose-matrix/

## Problem Statement

TR: Bir matris verilir. Matrisin transpozunu dondur; yani eski satirlar yeni sutun, eski sutunlar yeni satir olur.

EN: Given a matrix, return its transpose, where old rows become new columns and old columns become new rows.

## Starter Code (C)

```c
int** transpose(int** matrix, int matrixSize, int* matrixColSize,
                int* returnSize, int** returnColumnSizes) {

}
```

## Parameters

- `matrix`: Input matrix.
- `matrixSize`: Number of rows in `matrix`.
- `matrixColSize`: Column count for each input row.
- `returnSize`: Output row count.
- `returnColumnSizes`: Output column sizes for each returned row.

## Return

TR: Heap uzerinde ayrilmis transpoz matris.

EN: Return a heap-allocated transposed matrix.

## Examples

### Example 1

```text
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]
```

### Example 2

```text
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
```

## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 1000`
- `1 <= m * n <= 10^5`
- `-10^9 <= matrix[i][j] <= 10^9`

## Approach

TR: Yeni matrisin satir sayisi eski sutun sayisi, sutun sayisi eski satir sayisi olur. Her `matrix[row][col]` degeri `result[col][row]` konumuna yazilir.

EN: The new matrix has as many rows as the old column count and as many columns as the old row count. Write each `matrix[row][col]` into `result[col][row]`.

## Solution

- [solution.c](solution.c)
