# #1991 - Find the Middle Index in Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Prefix Sum
- Hint: Derive the right sum from the total sum, left sum, and current value.
- Solved date: 2026-07-31
- Source: https://leetcode.com/problems/find-the-middle-index-in-array/
- Note: Constant-space balance-point search with running sums

## Problem Statement

TR: Solundaki elemanlarin toplami sagindaki elemanlarin toplamina esit olan en
kucuk indexi dondur. Boyle bir index yoksa `-1` dondur.

EN: Return the leftmost index whose left-side sum equals its right-side sum, or
`-1` if no such index exists.

## Starter Code (C)

```c
int findMiddleIndex(int* nums, int numsSize) {

}
```

## Example

```text
Input:  nums = [2,3,-1,8,4]
Output: 3
```

At index `3`, the left sum is `2 + 3 - 1 = 4` and the right sum is `4`.

## Approach

First calculate the sum of the complete array. While scanning from left to
right, keep the sum of values strictly before the current index in `left`.

The current value belongs to neither side, so derive the right sum as:

```text
right = total - left - nums[i]
```

If `left == right`, return the current index immediately. Scanning from the
beginning guarantees that this is the smallest valid index. Otherwise, add the
current value to `left` before checking the next position.

Using `==` in the condition is important: a single `=` would assign a value
rather than compare the two sums.

Embedded-C connection: the same running-balance idea can locate a balance point
in sampled loads, accumulated energy, or work distributed across processing
stages without storing separate prefix and suffix arrays.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
