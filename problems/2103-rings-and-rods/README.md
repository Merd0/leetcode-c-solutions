# #2103 - Rings and Rods

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, String, Simulation
- Hint: Store three color-presence flags for each of the ten rods.
- Solved date: 2026-08-03
- Source: https://leetcode.com/problems/rings-and-rods/
- Note: Fixed-size state table for RGB presence tracking

## Problem Statement

TR: Her halka bir renk ve cubuk numarasiyla verilir. Kirmizi, yesil ve mavi
halkalarin ucunu de tasiyan cubuklarin sayisini dondur.

EN: Each ring is described by a color and a rod number. Return how many rods
contain at least one red, green, and blue ring.

## Starter Code (C)

```c
int countPoints(char* rings) {

}
```

## Example

```text
Input:  rings = "B0B6G0R6R0R6G9"
Output: 1
```

Only rod `0` contains all three colors.

## Approach

There are always ten rods and three possible colors, so use a fixed `10 x 3`
table:

```text
rodColors[rod][0] -> red is present
rodColors[rod][1] -> green is present
rodColors[rod][2] -> blue is present
```

The input stores every ring in two consecutive characters: color first, then
the rod digit. Advance by two and convert the digit character to an integer:

```c
char color = rings[i];
int rod = rings[i + 1] - '0';
```

Set the matching table entry to `1`. Repeated rings cause no problem because
the table records presence rather than frequency. Finally, scan rods `0` through
`9` and count those whose three entries are all set.

Embedded-C connection: fixed-size channel-state tables are useful when the
number of sensors or channels is known at compile time. They avoid dynamic
allocation and provide constant-time updates with predictable memory usage.

## Complexity

- Time: `O(n)`, where `n` is the length of `rings`
- Extra space: `O(1)`, because the table always contains exactly 30 integers

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
