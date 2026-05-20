# #0088 - Merge Sorted Array

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/merge-sorted-array/
- Topics: Array, Two Pointers, Sorting

## Problem

TR: `nums1` ve `nums2` sirali verilir. `nums2` degerlerini de kullanarak sonucu `nums1` icinde sirali hale getir.

EN: Given two sorted arrays, merge the values from `nums2` into `nums1` so `nums1` becomes sorted.

## Starter Code (C)

```c
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

}
```

## Parameters

- `nums1`: First array; has enough trailing space for the merge result.
- `nums1Size`: Total capacity/length of `nums1`.
- `m`: Number of real sorted values initially in `nums1`.
- `nums2`: Second sorted array.
- `nums2Size`: Length of `nums2`.
- `n`: Number of real values in `nums2`.

## Return

TR: Bir sey dondurmez; sonuc `nums1` icine yazilir.

EN: Return nothing; write the merged result into `nums1`.

## Example

```text
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
After call: nums1 = [1,2,2,3,5,6]
```

## Approach

TR: Sondan baslayarak yaz. Boylece `nums1` icindeki henuz kullanilmamis degerleri ezmezsin.

EN: Write from the back so values in `nums1` that have not been read yet are not overwritten.

## Solution

- [solution.c](solution.c)
