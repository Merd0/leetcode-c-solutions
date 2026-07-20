# #0350 - Intersection of Two Arrays II

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Hash Table, Two Pointers, Binary Search, Sorting
- Hint: If a value appears multiple times in both arrays, it can appear multiple times in the answer.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/intersection-of-two-arrays-ii/

## Problem Statement

TR: Iki integer dizisi veriliyor. Ortak elemanlari, tekrar sayilarini da dikkate alarak dondur.

EN: Given two integer arrays, return their intersection where each value appears as many times as it appears in both arrays.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {

}
```

## Parameters / Return

- `nums1`, `nums2`: input arrays.
- `nums1Size`, `nums2Size`: lengths of the input arrays.
- `returnSize`: output size of the returned array.
- Returns a malloced array containing the multiset intersection.

## Examples

```text
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
```

```text
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: Output order can be different.
```

## Constraints

- `1 <= nums1.length, nums2.length <= 1000`
- `0 <= nums1[i], nums2[i] <= 1000`

## Approach

Use the smaller array for the outer loop. For every matching value in the
bigger array, mark that bigger-array index as used so the same occurrence is
not matched twice.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
