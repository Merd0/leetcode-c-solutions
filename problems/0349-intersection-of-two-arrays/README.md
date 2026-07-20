# #0349 - Intersection of Two Arrays

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Hash Table, Two Pointers, Binary Search, Sorting
- Hint: The result must contain each common value only once.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/intersection-of-two-arrays/

## Problem Statement

TR: Iki integer dizisi veriliyor. Ikisinde de bulunan farkli degerleri dondur.

EN: Given two integer arrays, return the unique values that appear in both arrays.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

}
```

## Parameters / Return

- `nums1`, `nums2`: input arrays.
- `nums1Size`, `nums2Size`: lengths of the input arrays.
- `returnSize`: output size of the returned array.
- Returns a malloced array containing unique common values.

## Examples

```text
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Explanation: 2 appears in both arrays, but it is returned once.
```

```text
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: Output order can be different.
```

## Constraints

- `1 <= nums1.length, nums2.length <= 1000`
- `0 <= nums1[i], nums2[i] <= 1000`

## Approach

Use the smaller array as the outer loop to reduce work. When a value is found
inside the bigger array, check whether it already exists in `result`; if not,
append it.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
