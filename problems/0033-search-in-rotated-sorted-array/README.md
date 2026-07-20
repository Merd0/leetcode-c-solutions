# #0033 - Search in Rotated Sorted Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Binary Search
- Hint: In a rotated sorted array, at least one side of `mid` is still sorted.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/search-in-rotated-sorted-array/

## Problem Statement

TR: Bir noktadan rotate edilmis, tekrarsiz ve sirali bir integer dizisi veriliyor. `target` varsa indexini, yoksa `-1` dondur.

EN: Given a rotated sorted array with distinct values, return the index of `target` if it exists; otherwise return `-1`.

## Starter Code (C)

```c
int search(int* nums, int numsSize, int target) {

}
```

## Parameters / Return

- `nums`: rotated sorted array with distinct values.
- `numsSize`: number of elements in `nums`.
- `target`: value to search.
- Returns the index of `target`, or `-1` if not found.

## Examples

```text
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```

```text
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```

```text
Input: nums = [1], target = 0
Output: -1
```

## Constraints

- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i], target <= 10^4`
- All values in `nums` are unique.
- `nums` is an ascending array possibly rotated at an unknown pivot.

## Approach

At each step, one half of the array is sorted. If the left half is sorted and
the target is inside it, move `right`; otherwise move `left`. If the right half
is sorted, apply the same idea on the right side.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
