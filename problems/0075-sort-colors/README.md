# #0075 - Sort Colors

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Two Pointers, Sorting
- Hint: The array contains only `0`, `1`, and `2`; either count each value or partition all three groups in one pass.
- Solved date: 2026-06-26
- Source: https://leetcode.com/problems/sort-colors/
- Note: Daily practice question; two accepted approaches are archived.

## Problem Statement

TR: Sadece `0`, `1` ve `2` degerlerinden olusan diziyi ayni dizi uzerinde
kucukten buyuge sirala. Kutuphane siralama fonksiyonu kullanma.

EN: Sort an array containing only `0`, `1`, and `2` in-place. Do not use a
library sorting function.

## Starter Code (C)

```c
void sortColors(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Input array to reorder in-place.
- `numsSize`: Number of values in `nums`.
- Returns: Nothing; the input array is modified.

## Examples

```text
Input:  nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
```

```text
Input:  nums = [2,0,1]
Output: [0,1,2]
```

## Constraints

- `1 <= nums.length <= 300`
- `nums[i]` is `0`, `1`, or `2`.

## Approach 1: Counting Then Writing Back

The main solution counts the number of zeros, ones, and twos. It then overwrites
the same array in that order. It is easy to read, uses constant extra memory,
and runs in linear time.

This is the better default when clarity matters more than minimizing passes:

```text
count -> write 0s -> write 1s -> write 2s
```

## Approach 2: In-Place Three-Way Partition

The alternative solution uses the Dutch National Flag partition:

```text
[0 values] [unexamined values] [2 values]
    low         current             high
```

- A `0` swaps toward `low`; both `low` and `current` move forward.
- A `1` is already in the middle, so only `current` moves forward.
- A `2` swaps toward `high`; only `high` moves because the value brought back
  from the right has not been examined yet.

Use this version when a one-pass partition is explicitly required, or when the
same three-way partition pattern is useful for a larger in-place algorithm.

## Complexity

| Approach | Time | Extra space | Passes |
|---|---:|---:|---:|
| Counting then writing back | `O(n)` | `O(1)` | 2 |
| Three-way partition | `O(n)` | `O(1)` | 1 |

## Solutions

- [solution.c](solution.c) - Counting then writing back; the primary, clearest solution.
- [solution_in_place_partition.c](solution_in_place_partition.c) - Dutch National Flag three-way partition.
