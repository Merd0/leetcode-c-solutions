# #1260 - Shift 2D Grid

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Matrix, Simulation, Indexing
- Hint: Flatten each coordinate, add `k` modulo the cell count, then convert it back to row and column.
- Solved date: 2026-07-26
- Source: https://leetcode.com/problems/shift-2d-grid/
- Note: Circular indexing and owned two-dimensional output allocation

## Problem Statement

TR: Matrisin butun elemanlarini `k` kez saga kaydir. Satir sonundaki eleman
sonraki satirin basina, matrisin son elemani ise sol ust koseye doner.

EN: Shift every grid value to the right `k` times. Values wrap into the next row,
and the final grid value wraps to the top-left position.

## Starter Code (C)

```c
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k,
                int* returnSize, int** returnColumnSizes) {

}
```

## Example

```text
Input:
grid = [[1,2,3],
        [4,5,6],
        [7,8,9]]
k = 1

Output:
[[9,1,2],
 [3,4,5],
 [6,7,8]]
```

## Approach

Treat the rectangular matrix as one logical array of `rows * cols` cells. The
coordinate `(row, col)` has linear index:

```text
oldIndex = row * cols + col
```

After shifting `k` positions, modulo wraps the index back to the beginning:

```text
newIndex = (oldIndex + k) % total
```

Convert that new linear index back to matrix coordinates:

```text
newRow = newIndex / cols
newCol = newIndex % cols
```

Reducing `k` with `k %= total` first handles shifts larger than the entire grid.
Every source cell maps to exactly one destination cell, so no repeated single-step
simulation is required.

## C Allocation Model

The returned `int**` owns two allocation levels:

```text
shifted       -> array of row pointers
shifted[row]  -> integer cells inside one row
```

`returnColumnSizes[row]` records the width of every returned row. If a row
allocation fails, all earlier rows and both outer arrays are released before
returning `NULL`.

Embedded-C connection: flattening a raster coordinate into a linear frame-buffer
offset is common in image transport, display buffers, and circular memory layouts.

## Complexity

- Time: `O(rows * cols)`
- Extra space: `O(rows * cols)` for the required output

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
