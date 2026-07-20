# #0088 - Merge Sorted Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Two Pointers, Sorting
- Hint: Fill `nums1` from the end so existing values are not overwritten too early.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/merge-sorted-array/

## Problem Statement

TR: Sirali iki dizi verilir. `nums1` dizisinin ilk `m` elemani gercek veridir, son kisminda `nums2` icin bos alan vardir. `nums2` elemanlarini `nums1` icine sirali sekilde yerinde birlestir.

EN: Given two sorted arrays, the first `m` values of `nums1` are real data and the remaining space is reserved for `nums2`. Merge `nums2` into `nums1` in sorted order in-place.

## Starter Code (C)

```c
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

}
```

## Parameters

- `nums1`: First sorted array with enough trailing space.
- `nums1Size`: Total capacity of `nums1`, equal to `m + n`.
- `m`: Number of real values initially in `nums1`.
- `nums2`: Second sorted array.
- `nums2Size`: Size of `nums2`.
- `n`: Number of values in `nums2`.

## Return

TR: Fonksiyon `void` doner; sonuc `nums1` icine yazilir.

EN: The function returns `void`; the merged result is written into `nums1`.

## Examples

### Example 1

```text
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
```

### Example 2

```text
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
```

### Example 3

```text
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
```

## Constraints

- `nums1.length == m + n`
- `nums2.length == n`
- `0 <= m, n <= 200`
- `1 <= m + n <= 200`
- `-10^9 <= nums1[i], nums2[j] <= 10^9`

## Approach

TR: En buyuk elemanlari sona yazmak icin uc pointer kullan. `i = m - 1`, `j = n - 1`, `k = m + n - 1`. Buyuk olan deger `nums1[k]` konumuna yazilir.

EN: Use three pointers to write the largest remaining value at the end. `i = m - 1`, `j = n - 1`, and `k = m + n - 1`. Write the larger candidate into `nums1[k]`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
