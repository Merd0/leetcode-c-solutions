# #0153 - Find Minimum in Rotated Sorted Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Binary Search
- Hint: Compare `nums[mid]` with `nums[right]` to know which side contains the minimum.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

## Problem Statement

TR: Artan sirali ve bir noktadan rotate edilmis, tekrarsiz bir integer dizisi veriliyor. Dizideki minimum elemani bul.

EN: Given a rotated sorted array with distinct values, return the minimum element.

## Starter Code (C)

```c
int findMin(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: rotated sorted array with distinct values.
- `numsSize`: number of elements in `nums`.
- Returns the minimum value in the array.

## Examples

```text
Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original sorted array was rotated, and 1 is the minimum.
```

```text
Input: nums = [4,5,6,7,0,1,2]
Output: 0
```

```text
Input: nums = [11,13,15,17]
Output: 11
Explanation: The array may be rotated 0 times.
```

## Constraints

- `1 <= nums.length <= 5000`
- `-5000 <= nums[i] <= 5000`
- All integers in `nums` are unique.
- `nums` is an ascending array possibly rotated at an unknown pivot.

## Approach

Use binary search with `left < right`. If `nums[mid] > nums[right]`, the
minimum must be to the right of `mid`. Otherwise, `mid` may already be the
minimum, so keep it by moving `right` to `mid`. When the loop ends, `left`
points to the minimum.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
