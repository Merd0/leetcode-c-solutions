# #0867 - Transpose Matrix

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/transpose-matrix/
- Topics: Matrix, Simulation

## Problem

TR: Matrisi transpozla; yani satirlar sutun, sutunlar satir haline gelsin.

EN: Return the transpose of a matrix, where rows become columns and columns become rows.

## Starter Code (C)

```c
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {

}
```

## Parameters

- `matrix`: Input matrix.
- `matrixSize`: Number of rows.
- `matrixColSize`: Column count for each row.
- `returnSize`: Output row count.
- `returnColumnSizes`: Output column sizes for returned matrix.

## Return

TR: Transpoz matris pointer'i.

EN: Pointer to the transposed matrix.

## Example

```text
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]
```

## Approach

TR: Her `matrix[row][col]` degerini `answer[col][row]` konumuna yaz.

EN: Write each `matrix[row][col]` into `answer[col][row]`.

## Solution

- [solution.c](solution.c)
