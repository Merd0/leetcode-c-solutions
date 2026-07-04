# #1572 - Matrix Diagonal Sum

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Matrix
- Hint: Diagonal positions have direct index formulas.
- Solved date: 2026-07-04
- Source: https://leetcode.com/problems/matrix-diagonal-sum/
- Note: Matrix index-formula practice question

## Problem Statement

TR: Kare bir matrix veriliyor. Ana diagonal ve yan diagonal elemanlarini topla.
Matrix boyutu tekse ortadaki eleman iki diagonalde de sayildigi icin bir kere
cikar.

EN: Given a square matrix, return the sum of both diagonals. If the matrix size
is odd, subtract the center cell once because it belongs to both diagonals.

## Starter Code (C)

```c
int diagonalSum(int** mat, int matSize, int* matColSize) {

}
```

## Parameters / Return

- `mat`: Square matrix.
- `matSize`: Number of rows and columns.
- `matColSize`: Column count metadata from LeetCode.
- Returns: Sum of primary and secondary diagonal values.

## Examples

```text
Input:
mat = [[1,2,3],
       [4,5,6],
       [7,8,9]]

Output: 25

Diagonal values are 1, 5, 9 and 3, 5, 7. The center 5 is counted once.
```

```text
Input:
mat = [[1,1,1,1],
       [1,1,1,1],
       [1,1,1,1],
       [1,1,1,1]]

Output: 8
```

## Constraints

- `n == mat.length == mat[i].length`
- `1 <= n <= 100`
- `1 <= mat[i][j] <= 100`

## First Student-Style Approach

The first corrected version keeps the loop shape:

```c
for each row:
    move j to the diagonal position
    add it
    break
```

That works, but the inner loop is unnecessary because the diagonal column is
already known.

- [solution_student_loop.c](solution_student_loop.c)

## Optimal Approach

The primary diagonal is:

```c
mat[i][i]
```

The secondary diagonal is:

```c
mat[i][matSize - 1 - i]
```

So one loop can add both positions directly. If `matSize` is odd, the center
cell was added twice, so subtract it once.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solutions

- [solution.c](solution.c) - direct index-formula solution
- [solution_student_loop.c](solution_student_loop.c) - corrected loop+break version
