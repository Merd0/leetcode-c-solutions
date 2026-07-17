# #1041 - Robot Bounded In Circle

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Math, String, Simulation
- Hint: One command cycle is enough to decide boundedness.
- Solved date: 2026-07-17
- Source: https://leetcode.com/problems/robot-bounded-in-circle/
- Note: Direction table and state-machine practice

## Problem Statement

TR: Robot `(0,0)` noktasinda North yonune bakarak baslar. `G`, `L`, `R`
komutlari sonsuza kadar tekrar edilirse robotun sinirli bir cember icinde kalip
kalmayacagini dondur.

EN: A robot starts at the origin facing north. Given instructions repeated
forever, return whether the robot stays bounded in a circle.

## Starter Code (C)

```c
bool isRobotBounded(char* instructions) {

}
```

## Examples

```text
Input: instructions = "GGLLGG"
Output: true
```

The robot returns to the origin after one cycle.

```text
Input: instructions = "GG"
Output: false
```

The robot moves north every cycle and never turns back.

## Approach

Represent direction as a small state:

```text
0 = North
1 = East
2 = South
3 = West
```

The movement table maps a direction to the coordinate delta for one `G` command:

```text
dx = {0, 1, 0, -1}
dy = {1, 0, -1, 0}
```

After simulating one instruction cycle:

```text
back at origin -> bounded
not facing north -> bounded after repeated cycles
not at origin and still north -> unbounded
```

Embedded-C connection: this is a compact command-state simulation. The direction
integer plus `dx/dy` arrays act like a small lookup table for motion behavior.

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)
