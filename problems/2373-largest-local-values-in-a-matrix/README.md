# #2373 - Largest Local Values in a Matrix

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Matrix
- Hint: Each output cell is the maximum of one valid 3x3 window.
- Solved date: 2026-07-20
- Source: https://leetcode.com/problems/largest-local-values-in-a-matrix/
- Note: Electro-optic local max-filter practice

## Problem Statement

TR: `n x n` matrix icinde her 3x3 bolgenin maksimum degerini bul ve `(n - 2) x
(n - 2)` boyutlu yeni matrix olarak dondur.

EN: For every 3x3 local window in an `n x n` matrix, return the maximum value in
that window.

## Starter Code (C)

```c
int** largestLocal(int** grid, int gridSize, int* gridColSize,
                   int* returnSize, int** returnColumnSizes) {

}
```

## Approach

The output is smaller because only full 3x3 windows are used:

```text
outSize = gridSize - 2
```

For each output cell `(i, j)`, scan:

```text
grid[i..i+2][j..j+2]
```

and write the largest value into `result[i][j]`.

MEOS connection: this is a local max filter, similar to detecting local bright
spots, hot regions, or simple features in an EO/thermal frame.

## Complexity

- Time: `O((n - 2)^2 * 9)`
- Space: `O((n - 2)^2)` for the returned matrix

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
