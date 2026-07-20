# #0048 - Rotate Image

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Matrix, In-Place
- Hint: A clockwise rotation can be done by transpose + row reverse.
- Solved date: 2026-06-04
- Source: https://leetcode.com/problems/rotate-image/

## Problem Statement

TR: `n x n` bir matrix, saat yonunde 90 derece dondurulmelidir. Islem in-place
yapilmali; yeni bir 2D matrix allocate edilmemelidir.

EN: Given an `n x n` matrix, rotate it 90 degrees clockwise in place.

## Starter Code (C)

```c
void rotate(int** matrix, int matrixSize, int* matrixColSize) {

}
```

## Parameters / Return

- `matrix`: Square matrix updated in place.
- `matrixSize`: Number of rows, also the side length.
- `matrixColSize`: Column sizes provided by LeetCode.
- Returns nothing.

## Examples

```text
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]
```

```text
Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
```

## Constraints

- `n == matrix.length == matrix[i].length`
- `1 <= n <= 20`
- `-1000 <= matrix[i][j] <= 1000`

## Approach

Rotate clockwise in two in-place steps:

1. Transpose the matrix across the main diagonal.
2. Reverse every row.

After transposition, columns become rows. Reversing each row then places every
value into its final clockwise-rotated position.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
