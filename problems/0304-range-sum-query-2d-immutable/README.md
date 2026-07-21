# #0304 - Range Sum Query 2D - Immutable

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Design, Matrix, Prefix Sum
- Hint: Store a summed-area table with a zero border so each rectangle query needs four lookups.
- Solved date: 2026-07-21
- Source: https://leetcode.com/problems/range-sum-query-2d-immutable/
- Note: Integral-image practice for repeated region queries

## Problem Statement

TR: Degismeyen bir integer matrisi icin cok sayida dikdortgen bolge toplami
sorgusunu hizli cevaplayan bir `NumMatrix` yapisi tasarla.

EN: Design a `NumMatrix` object that answers repeated inclusive rectangle-sum
queries on an immutable matrix.

## Starter Code (C)

```c
typedef struct {

} NumMatrix;

NumMatrix* numMatrixCreate(int** matrix, int matrixSize,
                           int* matrixColSize) {

}

int numMatrixSumRegion(NumMatrix* obj, int row1, int col1,
                       int row2, int col2) {

}

void numMatrixFree(NumMatrix* obj) {

}
```

## Example

```text
matrix = [[3,0,1,4,2],
          [5,6,3,2,1],
          [1,2,0,1,5],
          [4,1,0,1,7],
          [1,0,3,0,5]]

sumRegion(2,1,4,3) -> 8
sumRegion(1,1,2,2) -> 11
sumRegion(1,2,2,4) -> 12
```

## Approach

Build a prefix matrix with one extra zero row and column. `prefix[i][j]`
stores the sum from the source matrix's top-left corner through
`matrix[i - 1][j - 1]`:

```text
prefix[i][j] = current + above + left - shared top-left area
```

The subtraction removes the area counted once by `above` and again by `left`.
After preprocessing, an inclusive rectangle is found with four table values:

```text
whole area - area above - area left + overlap removed twice
```

The zero border keeps edge queries on the same formula. The object owns every
prefix row, the row-pointer array, and the struct itself, so `numMatrixFree`
releases them in that order.

Embedded-C connection: this table is an integral image. It makes repeated ROI
brightness sums and averages constant-time after one pass over the frame.

## Complexity

- Construction: `O(rows * cols)`
- Time per query: `O(1)`
- Space: `O(rows * cols)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
