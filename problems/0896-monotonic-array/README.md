# #0896 - Monotonic Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, State Machine
- Hint: Let the first unequal adjacent pair choose the direction, then reject any later reversal.
- Solved date: 2026-07-28
- Source: https://leetcode.com/problems/monotonic-array/
- Note: One-pass direction-state validation

## Problem Statement

TR: Bir dizinin tamamen non-decreasing veya tamamen non-increasing olup olmadigini
kontrol et. Esit komsu elemanlar iki yon icin de gecerlidir.

EN: Determine whether an array is entirely non-decreasing or entirely
non-increasing. Equal adjacent values are valid in either direction.

## Starter Code (C)

```c
bool isMonotonic(int* nums, int numsSize) {

}
```

## Examples

```text
Input:  nums = [1,2,2,3]
Output: true
```

```text
Input:  nums = [6,5,4,4]
Output: true
```

```text
Input:  nums = [1,3,2]
Output: false
```

## Approach

Carry one direction state through the scan:

```text
 0 -> no unequal adjacent pair has appeared yet
 1 -> the array is currently non-decreasing
-1 -> the array is currently non-increasing
```

Equal values leave the state unchanged. The first unequal adjacent pair chooses
the direction. Every later unequal pair must agree with it.

The loop compares `nums[i]` with `nums[i - 1]` while `i` runs from `1` through
`numsSize - 1`. This avoids reading `nums[i + 1]` on the final iteration.

Choosing the direction only from `nums[0]` and `nums[1]` is not sufficient when
they are equal. For example:

```text
[1,1,2,1]
```

The direction is initially unknown, becomes increasing at `1 -> 2`, and is then
invalidated by `2 -> 1`. Updating the state during the scan catches this reversal.

The invariant is that all adjacent pairs processed so far are compatible with
`direction`. If both an increase and a decrease appear, no monotonic direction can
describe the complete array.

Embedded-C connection: this pattern validates whether sampled values maintain one
trend while allowing plateaus, which is useful for ramp, calibration, and sensor
sequence checks.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
