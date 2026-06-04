# #0073 - Set Matrix Zeroes

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Matrix, In-Place
- Hint: Mark affected rows and columns before writing new zeroes.
- Solved date: 2026-06-04
- Source: https://leetcode.com/problems/set-matrix-zeroes/

## Problem Statement

TR: Bir matrix icinde herhangi bir hucre `0` ise, o hucrenin bulundugu tum
satiri ve sutunu `0` yap.

EN: Given a matrix, if a cell is `0`, set its entire row and column to `0`.

## Starter Code (C)

```c
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {

}
```

## Parameters / Return

- `matrix`: Matrix updated in place.
- `matrixSize`: Number of rows.
- `matrixColSize[0]`: Number of columns.
- Returns nothing.

## Examples

```text
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
```

```text
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
```

## Constraints

- `m == matrix.length`
- `n == matrix[0].length`
- `1 <= m, n <= 200`
- `-2^31 <= matrix[i][j] <= 2^31 - 1`

## Approach

Do not set rows and columns to zero during the first scan. That would create new
zeroes and incorrectly affect more rows/columns.

Instead:

1. Scan the matrix and mark which rows and columns must become zero.
2. Scan again and set `matrix[i][j] = 0` if its row or column is marked.
3. Free the temporary marker arrays.

This uses `O(rows + cols)` extra memory.

## Solution

- [solution.c](solution.c)
