# #0034 - Find First and Last Position of Element in Sorted Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Binary Search
- Hint: Run binary search twice: once for the first occurrence and once for the last.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

## Problem Statement

TR: Artan sirali bir integer dizisi ve `target` veriliyor. `target` degerinin ilk ve son indexini dondur. Yoksa `[-1, -1]` dondur.

EN: Given a sorted integer array and a target, return the first and last position of the target. If it does not exist, return `[-1, -1]`.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

}
```

## Parameters / Return

- `nums`: sorted input array.
- `numsSize`: number of elements in `nums`.
- `target`: value to search.
- `returnSize`: output size, always `2`.
- Returns a malloced array: `[firstIndex, lastIndex]`.

## Examples

```text
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
```

```text
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
```

```text
Input: nums = [], target = 0
Output: [-1,-1]
```

## Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i], target <= 10^9`
- `nums` is sorted in non-decreasing order.

## Approach

Use one binary search to find the leftmost target by moving `right` after every
match. Use a second binary search to find the rightmost target by moving
`left` after every match.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
