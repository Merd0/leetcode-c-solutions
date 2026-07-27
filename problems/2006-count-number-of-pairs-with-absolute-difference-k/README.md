# #2006 - Count Number of Pairs With Absolute Difference K

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Counting, Brute Force
- Hint: Start the second index at `i + 1` so every valid index pair is checked exactly once.
- Solved date: 2026-07-27
- Source: https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
- Note: Pair enumeration and absolute-difference practice

## Problem Statement

TR: `i < j` ve `abs(nums[i] - nums[j]) == k` kosullarini saglayan indeks
ciftlerinin sayisini dondur.

EN: Count index pairs `(i, j)` where `i < j` and the absolute difference between
their values equals `k`.

## Starter Code (C)

```c
int countKDifference(int* nums, int numsSize, int k) {

}
```

## Example

```text
Input:  nums = [1,2,2,1], k = 1
Output: 4
```

The valid index pairs are `(0,1)`, `(0,2)`, `(1,3)`, and `(2,3)`.

## Approach

Use two nested loops to enumerate every unordered index pair. The outer loop
selects `i`; the inner loop starts at `i + 1`:

```text
i = 0 -> j = 1, 2, ..., n - 1
i = 1 -> j = 2, 3, ..., n - 1
```

This loop structure enforces `i < j`. It prevents comparing one element with
itself and avoids counting both `(i, j)` and `(j, i)`.

For every pair, `abs(nums[i] - nums[j])` removes direction from the difference.
Include `<stdlib.h>` because that header declares `abs()` in C.

The constraints are small enough for direct pair enumeration. A frequency table
could reduce the time for larger inputs with a bounded value range, but the nested
loops are the clearest correct solution here.

Embedded-C connection: exhaustive pair checks are useful when the bounded input
set is small and coverage matters more than building an additional data structure.

## Complexity

- Time: `O(n^2)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
