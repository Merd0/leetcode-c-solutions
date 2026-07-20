# #0657 - Robot Return to Origin

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String, Simulation
- Hint: Track the final x/y displacement.
- Solved date: 2026-07-18
- Source: https://leetcode.com/problems/robot-return-to-origin/
- Note: Quick robot-state warmup question

## Problem Statement

TR: Robot `(0,0)` noktasindan baslar. `U`, `D`, `L`, `R` komutlarindan sonra
yeniden origin'e donup donmedigini dondur.

EN: A robot starts at the origin. Given a move string, return whether it ends
back at `(0,0)`.

## Starter Code (C)

```c
bool judgeCircle(char* moves) {

}
```

## Examples

```text
Input: moves = "UD"
Output: true
```

```text
Input: moves = "LL"
Output: false
```

## Approach

Keep only the final displacement:

```text
R -> x++
L -> x--
U -> y++
D -> y--
```

At the end, the robot returned to origin only if both coordinates are zero:

```text
x == 0 && y == 0
```

Embedded-C connection: this is the smallest version of command-stream state
tracking. Each command updates a compact runtime state, then the final state is
checked.

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
