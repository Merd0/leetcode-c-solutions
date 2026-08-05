# #2120 - Execution of All Suffix Instructions Staying in a Grid

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, String, Simulation
- Hint: Reset the robot and simulate the remaining suffix for every instruction index.
- Solved date: 2026-08-05
- Source: https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid/
- Note: Repeated coordinate simulation over every instruction suffix

## Problem Statement

TR: Robotu her komut indexi icin ayni konuma sifirla. Komutlari o indexten
itibaren calistir ve robot izgara disina cikmadan uygulayabildigi adimlari dondur.

EN: For every instruction index, reset the robot to the same starting position,
execute the suffix beginning at that index, and return how many moves stay inside
the grid.

## Starter Code (C)

```c
int* executeInstructions(int n, int* startPos, int startPosSize,
                         char* s, int* returnSize) {

}
```

## Example

```text
Input:  n = 3, startPos = [0,1], s = "RRDDLU"
Output: [1,5,4,3,1,0]
```

## Approach

Allocate one result entry per character in `s`. The outer loop selects the first
instruction of the current suffix. At the start of every outer-loop iteration,
reset `row` and `col` to `startPos`.

The inner loop executes instructions from the selected index to the end. Build a
candidate position first:

```text
U -> nextRow - 1
D -> nextRow + 1
L -> nextCol - 1
R -> nextCol + 1
```

If that candidate lies outside `[0, n)`, stop without counting the invalid move.
Otherwise, commit the candidate to the robot position and increment the step
count. Store that count when the suffix ends or the robot reaches a boundary.

Keeping `nextRow` and `nextCol` separate from the current position makes the
validation order explicit: calculate, validate, then commit.

Embedded-C connection: this structure resembles replaying command-buffer suffixes
in a motion controller or validating sequences of actuator commands against safe
coordinate limits before accepting each state transition.

## Complexity

- Time: `O(m^2)`, where `m` is the number of instructions
- Extra space: `O(m)` for the returned array; `O(1)` auxiliary space

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
