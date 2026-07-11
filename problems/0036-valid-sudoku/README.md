# #0036 - Valid Sudoku

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Hash Table, Matrix
- Hint: Treat each row, column, and 3x3 box as a small frequency check.
- Solved date: 2026-07-11
- Source: https://leetcode.com/problems/valid-sudoku/
- Note: Medium practice question

## Problem Statement

TR: 9x9 Sudoku tahtasi veriliyor. Tahtayi cozmen istenmiyor; sadece mevcut
dolu hucrelerin Sudoku kurallarina uyup uymadigini kontrol etmen isteniyor.

EN: Given a 9x9 Sudoku board, determine whether the currently filled cells are
valid. The board does not need to be solvable; only the existing values are
checked.

## Starter Code (C)

```c
bool isValidSudoku(char** board, int boardSize, int* boardColSize) {

}
```

## Parameters / Return

- `board`: 9x9 character board.
- `boardSize`: Number of rows.
- `boardColSize`: Column count for each row.
- Returns `true` if no row, column, or 3x3 box has duplicate digits.

## Examples

```text
Input:
[["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

Output: true
```

```text
Input:
[["8","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]

Output: false
```

The first column has two `8` values.

## Constraints

- `board.length == 9`
- `board[i].length == 9`
- `board[i][j]` is a digit from `1` to `9` or `.`

## Approach

Use the same frequency idea three times:

1. Check every row.
2. Check every column.
3. Check every 3x3 box.

For a character digit, convert it into a `0..8` index:

```c
int digit = board[row][col] - '1';
```

This matters because `board[row][col]` is a character. For example, `'5'` is
not integer `5`; it is an ASCII character. Subtracting `'1'` maps:

```text
'1' -> 0
'2' -> 1
...
'9' -> 8
```

The 3x3 part uses the top-left corner of each box:

```text
(0,0) (0,3) (0,6)
(3,0) (3,3) (3,6)
(6,0) (6,3) (6,6)
```

For each top-left corner `(boxRow, boxCol)`, scan:

```text
row = boxRow .. boxRow + 2
col = boxCol .. boxCol + 2
```

So this is not a graph problem and not a Sudoku solver. It is just repeated
validation over rows, columns, and fixed-size boxes.

## Complexity

- Time: `O(1)` because the board is always 9x9.
- Space: `O(1)` because each check uses a fixed 9-element array.

## Solution

- [solution.c](solution.c)
