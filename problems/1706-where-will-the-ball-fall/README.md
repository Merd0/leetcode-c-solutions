# #1706 - Where Will the Ball Fall

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Matrix, Simulation
- Hint: Follow each ball row by row and validate both sides of every diagonal move.
- Solved date: 2026-08-02
- Source: https://leetcode.com/problems/where-will-the-ball-fall/
- Note: Direction-grid simulation with wall and V-shape collision detection

## Problem Statement

TR: Her sutunun tepesinden bir top birak. `1` topu saga, `-1` sola yonlendirir.
Her topun cikis sutununu veya sikisirsa `-1` degerini dondur.

EN: Drop one ball from the top of every column. A `1` redirects it right and a
`-1` redirects it left. Return each exit column, or `-1` if the ball gets stuck.

## Starter Code (C)

```c
int* findBall(int** grid, int gridSize, int* gridColSize,
              int* returnSize) {

}
```

## Example

```text
Input:  grid = [[1,1,1,-1,-1]]
Output: [1,2,-1,-1,3]
```

## Approach

Allocate one result entry for each starting column. Simulate that ball from the
first row through the last while storing only its current column.

The value in the current cell is also the horizontal direction:

```c
int direction = grid[row][col];
int nextCol = col + direction;
```

The move fails in either of these cases:

1. `nextCol` is outside the matrix, so the ball hits a side wall.
2. The neighboring board points in the opposite direction, so the two boards
   form a V shape.

The second case is detected with:

```c
grid[row][nextCol] != direction
```

On failure, store `-1`. Otherwise, move to `nextCol` and continue with the next
row. If every row is processed, the final column is the ball's exit position.

Embedded-C connection: this is a compact path-tracing simulation. The same
state-update pattern appears when following rays through a discretized optical
model, propagating motion through a direction map, or stepping a signal through
routing cells while checking invalid transitions.

## Complexity

- Time: `O(rows * cols)`, because one ball is simulated from each column
- Extra space: `O(cols)` for the returned array; `O(1)` auxiliary space

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
