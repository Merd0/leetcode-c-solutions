# #0035 - Search Insert Position

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/search-insert-position/
- Topics: Array, Binary Search

## Problem

TR: Sirali dizide `target` varsa indeksini bul. Yoksa sirayi bozmadan eklenecegi indeksi dondur.

EN: In a sorted array, return the index of `target`; if missing, return the position where it should be inserted.

## Starter Code (C)

```c
int searchInsert(int* nums, int numsSize, int target) {

}
```

## Parameters

- `nums`: Sorted input array.
- `numsSize`: Number of elements in `nums`.
- `target`: Value to search or insert.

## Return

TR: Hedefin bulundugu veya eklenmesi gereken indeks.

EN: The index where `target` is found or should be inserted.

## Example

```text
Input: nums = [1,3,5,6], target = 2
Output: 1
Reason: 2 belongs between 1 and 3.
```

## Approach

TR: Lower-bound binary search yap: ilk `nums[i] >= target` pozisyonunu bul.

EN: Use lower-bound binary search: find the first position where `nums[i] >= target`.

## Solution

- [solution.c](solution.c)
