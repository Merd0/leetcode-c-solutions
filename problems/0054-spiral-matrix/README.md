# #0054 - Spiral Matrix

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Matrix, Simulation
- Hint: Keep four boundaries and shrink them after each direction.
- Solved date: 2026-06-04
- Source: https://leetcode.com/problems/spiral-matrix/

## Problem Statement

TR: `m x n` boyutlu bir matrix verilir. Elemanlari spiral sirayla gezip tek
boyutlu bir array olarak dondur.

EN: Given an `m x n` matrix, return all elements in spiral order.

## Starter Code (C)

```c
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {

}
```

## Parameters / Return

- `matrix`: Input 2D matrix.
- `matrixSize`: Number of rows.
- `matrixColSize[0]`: Number of columns.
- `returnSize`: Output array length, equal to `rows * cols`.
- Returns a malloced array containing the spiral traversal.

## Examples

```text
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
```

```text
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
```

## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 10`
- `-100 <= matrix[i][j] <= 100`

## Approach

Use four boundaries: `top`, `bottom`, `left`, and `right`.

Each loop walks one layer in this order:

```text
left -> right
top -> bottom
right -> left
bottom -> top
```

After a direction is completed, shrink the related boundary. The extra `if`
checks prevent reading the same row or column twice when the remaining layer is
thin.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
