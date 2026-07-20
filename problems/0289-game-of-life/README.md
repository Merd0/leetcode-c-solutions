# #0289 - Game of Life

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Matrix, Simulation
- Hint: Encode old and new state in the same cell before the final cleanup pass.
- Solved date: 2026-06-04
- Source: https://leetcode.com/problems/game-of-life/

## Problem Statement

TR: Bir board icindeki hucreler canli `1` veya olu `0` durumundadir. Conway's
Game of Life kurallarina gore board'un bir sonraki durumunu in-place hesapla.

EN: Given a board of live and dead cells, update it in place to the next state
according to Conway's Game of Life rules.

## Starter Code (C)

```c
void gameOfLife(int** board, int boardSize, int* boardColSize) {

}
```

## Parameters / Return

- `board`: Matrix updated in place.
- `boardSize`: Number of rows.
- `boardColSize[0]`: Number of columns.
- Returns nothing.

## Examples

```text
Input: board = [[0,1,0],[0,0,1],[1,1,1],[0,0,0]]
Output: [[0,0,0],[1,0,1],[0,1,1],[0,1,0]]
```

```text
Input: board = [[1,1],[1,0]]
Output: [[1,1],[1,1]]
```

## Constraints

- `m == board.length`
- `n == board[i].length`
- `1 <= m, n <= 25`
- `board[i][j]` is `0` or `1`

## Approach

The important detail is that every cell must be updated as if all changes happen
at the same time. To make that work in place, store temporary transition values:

- `2`: was live, will become dead.
- `3`: was dead, will become live.

When counting neighbors, treat `1` and `2` as originally live. After the first
pass, convert every cell to its final state with `% 2`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
