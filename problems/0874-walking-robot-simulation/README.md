# #0874 - Walking Robot Simulation

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Hash Table, Simulation
- Hint: Move step by step because an obstacle may stop a command early.
- Solved date: 2026-07-17
- Source: https://leetcode.com/problems/walking-robot-simulation/
- Note: Robot simulation with brute-force and sorted-key obstacle lookup

## Problem Statement

TR: Robot `(0,0)` noktasinda North yonune bakarak baslar. Pozitif komutlar o
kadar adim ileri gitmeyi, `-1` saga donmeyi, `-2` sola donmeyi anlatir. Robot
bir obstacle'a giremez. Yol boyunca ulasilan maksimum `x*x + y*y` degerini
dondur.

EN: Simulate robot movement with turn and forward commands. Obstacles block
movement. Return the maximum squared distance from the origin reached at any
point.

## Starter Code (C)

```c
int robotSim(int* commands, int commandsSize,
             int** obstacles, int obstaclesSize, int* obstaclesColSize) {

}
```

## Examples

```text
Input: commands = [4,-1,3], obstacles = []
Output: 25
```

```text
Input: commands = [4,-1,4,-2,4], obstacles = [[2,4]]
Output: 65
```

## Brute-Force Approach

The first version checks every obstacle for every attempted step:

```text
nextX,nextY hesapla
obstacles listesini bastan sona gez
engel varsa bu komutu durdur
engel yoksa ilerle
```

This is simple and matches the simulation directly, but the lookup can be
expensive when there are many obstacles.

## Sorted-Key Lookup Approach

The optimized C-friendly version converts each `(x, y)` obstacle into one
sortable key:

```text
key = (x + 30000) * 60001 + (y + 30000)
```

The offset handles negative coordinates. After sorting the obstacle keys with
`qsort`, each attempted next cell is checked with binary search.

The robot still moves step by step because an obstacle may stop only part of a
positive command.

Embedded-C connection: this combines command-stream simulation, direction lookup
tables, state updates, and compact key encoding for table lookup.

## Complexity

- Brute force time: `O(totalSteps * obstaclesSize)`
- Sorted lookup time: `O(obstaclesSize log obstaclesSize + totalSteps log obstaclesSize)`
- Space: `O(obstaclesSize)` for encoded obstacle keys

## Solution

- [solution_bruteforce.c](solution_bruteforce.c)
- [solution.c](solution.c)
