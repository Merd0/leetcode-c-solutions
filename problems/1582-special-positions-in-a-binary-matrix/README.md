# #1582 - Special Positions in a Binary Matrix

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Matrix
- Hint: A cell with `1` is special only if its whole row and whole column contain no other `1`.
- Solved date: 2026-06-25
- Source: https://leetcode.com/problems/special-positions-in-a-binary-matrix/
- Note: Matrix / 2D array essential

## Problem Statement

TR: Binary matrix icinde oyle `1` hucrelerini say ki bulundugu satirda ve
bulundugu sutunda baska hic `1` olmasin.

EN: Count the cells equal to `1` whose row and column each contain exactly one
`1`.

## Starter Code (C)

```c
int numSpecial(int** mat, int matSize, int* matColSize) {

}
```

## Parameters / Return

- `mat`: Binary matrix.
- `matSize`: Number of rows.
- `matColSize`: Column count for each row.
- Returns the number of special positions.

## Examples

```text
Input: mat = [[1,0,0],[0,0,1],[1,0,0]]
Output: 1
Explanation: Only mat[1][2] is the single 1 in both its row and column.
```

```text
Input: mat = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3
Explanation: Every diagonal 1 is alone in its row and column.
```

## Constraints

- `1 <= mat.length, mat[i].length <= 100`
- `mat[i][j]` is `0` or `1`

## Approach

Scan every cell. When a cell is `1`, count:

- how many `1`s exist in the same row
- how many `1`s exist in the same column

If both counts are exactly `1`, that cell is special.

This direct version is easy to reason about and keeps row/column indexing
visible.

## Complexity

- Time: `O(m * n * (m + n))`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
