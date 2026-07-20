# #0845 - Longest Mountain in Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Two Pointers, Dynamic Programming
- Hint: A valid mountain has at least one up transition and one down transition.
- Solved date: 2026-07-20
- Source: https://leetcode.com/problems/longest-mountain-in-array/
- Note: Signal-shape and peak-detection practice

## Problem Statement

TR: Array icinde once kesin artan, sonra kesin azalan en uzun mountain
subarray'inin uzunlugunu dondur.

EN: Return the length of the longest subarray that strictly increases and then
strictly decreases.

## Starter Code (C)

```c
int longestMountain(int* arr, int arrSize) {

}
```

## Examples

```text
Input: arr = [2,1,4,7,3,2,5]
Output: 5
```

The longest mountain is:

```text
[1,4,7,3,2]
```

## State-Scan Approach

Track transition counts:

```text
up   -> number of increasing transitions
down -> number of decreasing transitions
```

A mountain is valid only when:

```text
up > 0 && down > 0
```

Reset when:

```text
down already started and a new up transition appears
or equal adjacent values appear
```

MEOS connection: this is a stream-like peak/ramp detector for signal samples,
intensity profiles, or hotspot shapes.

## Peak-Expansion Alternative

A more visual solution first finds a peak:

```text
arr[i - 1] < arr[i] && arr[i] > arr[i + 1]
```

Then it expands left over the rising slope and right over the falling slope.
This is easier to reason about; the state-scan version is the tighter one-pass
solution.

## Complexity

- State-scan time: `O(n)`
- Peak-expansion time: up to `O(n^2)` in the simple version
- Space: `O(1)`

## Solution

- [solution.c](solution.c)
- [solution_peak.c](solution_peak.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
