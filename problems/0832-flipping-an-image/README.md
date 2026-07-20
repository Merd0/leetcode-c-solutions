# #0832 - Flipping an Image

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Two Pointers, Bit Manipulation, Matrix, Simulation
- Hint: Swap both ends of each row while inverting both values with XOR.
- Solved date: 2026-06-09
- Source: https://leetcode.com/problems/flipping-an-image/

## Problem Statement

TR: Binary matrix'in her satirini yatay olarak ters cevir, ardindan her biti
invert et: `0` degerini `1`, `1` degerini `0` yap.

EN: Reverse every row of a binary matrix horizontally, then invert every bit by
changing `0` to `1` and `1` to `0`.

## Starter Code (C)

```c
int** flipAndInvertImage(
    int** image,
    int imageSize,
    int* imageColSize,
    int* returnSize,
    int** returnColumnSizes
) {

}
```

## Parameters / Return

- `image`: Binary matrix updated in place.
- `imageSize`: Number of rows.
- `imageColSize[i]`: Number of columns in row `i`.
- `returnSize`: Set to `imageSize`.
- `returnColumnSizes`: Malloced array containing each returned row length.
- Returns the same matrix pointer after modifying its cells.

## Examples

```text
Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
```

```text
Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
```

## Constraints

- `n == image.length`
- `n == image[i].length`
- `1 <= n <= 20`
- Every matrix value is `0` or `1`

## Approach

Use two pointers on each row. The left cell receives the inverted right value,
and the right cell receives the inverted original left value:

```text
inverted bit = bit XOR 1
```

The loop uses `left <= right`. On an odd-length row, this makes the middle cell
meet itself and get inverted exactly once. Reversing and inverting are therefore
completed in the same pass without allocating a second matrix.

## Complexity

- Time: `O(n^2)` for an `n x n` matrix
- Extra working space: `O(1)`, excluding required return metadata

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
