# #0074 - Search a 2D Matrix

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Binary Search, Matrix
- Hint: The matrix can be treated like one sorted 1D array.
- Solved date: 2026-07-12
- Source: https://leetcode.com/problems/search-a-2d-matrix/
- Note: Medium practice question

## Problem Statement

TR: Satirlari sirali olan ve her satirin ilk elemani onceki satirin son
elemanindan buyuk olan bir matrix veriliyor. `target` degerinin matrix icinde
olup olmadigini dondur.

EN: Given a matrix where each row is sorted and each row starts after the
previous row's last value, return whether `target` exists in the matrix.

## Starter Code (C)

```c
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {

}
```

## Parameters / Return

- `matrix`: 2D sorted matrix.
- `matrixSize`: Number of rows.
- `matrixColSize`: Number of columns in each row.
- `target`: Value to search.
- Returns `true` if `target` exists, otherwise `false`.

## Examples

```text
Input:
matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
target = 3

Output: true
```

```text
Input:
matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
target = 13

Output: false
```

## Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 100`
- `-10^4 <= matrix[i][j], target <= 10^4`
- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the
  previous row.

## Approach

Because the row boundaries also stay sorted, the matrix behaves like one long
sorted array.

For a matrix with `rows` rows and `cols` columns:

```text
left = 0
right = rows * cols - 1
```

Convert the 1D `mid` index back to a matrix cell:

```text
row = mid / cols
col = mid % cols
```

Then run normal binary search.

Example for a `3 x 4` matrix:

```text
1D indexes: 0 1 2 3 4 5 6 7 8 9 10 11
row = index / 4
col = index % 4
```

This keeps the code short and avoids doing one search for the row and another
search inside the row.

## Complexity

- Time: `O(log(m * n))`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)
