# #0059 - Spiral Matrix II

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Matrix, Simulation
- Hint: Fill the matrix layer by layer while increasing the current number.
- Solved date: 2026-06-04
- Source: https://leetcode.com/problems/spiral-matrix-ii/

## Problem Statement

TR: Pozitif bir `n` verilir. `1`'den `n^2`'ye kadar sayilari spiral sirayla
yerlestiren `n x n` matrix olustur.

EN: Given a positive integer `n`, create an `n x n` matrix filled with numbers
from `1` to `n^2` in clockwise spiral order.

## Starter Code (C)

```c
int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {

}
```

## Parameters / Return

- `n`: Matrix side length.
- `returnSize`: Number of returned rows.
- `returnColumnSizes`: Column count for each returned row.
- Returns a malloced `n x n` matrix.

## Examples

```text
Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]
```

```text
Input: n = 1
Output: [[1]]
```

## Constraints

- `1 <= n <= 20`

## Approach

First allocate the result matrix and the `returnColumnSizes` array required by
LeetCode's C interface.

Then use the same boundary model as Spiral Matrix:

- fill the top row from left to right,
- fill the right column downward,
- fill the bottom row from right to left,
- fill the left column upward.

After each direction, shrink the used boundary and continue until all numbers
are written.

## Solution

- [solution.c](solution.c)
