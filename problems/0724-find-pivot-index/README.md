# #0724 - Find Pivot Index

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/find-pivot-index/
- Topics: Array, Prefix Sum

## Problem

TR: Bir indekste sol taraftaki elemanlar toplami ile sag taraftaki elemanlar toplami esit ise bu indeks pivot'tur. En soldaki pivot indeksini bul.

EN: A pivot index has equal sum on its left and right sides. Return the leftmost pivot index.

## Starter Code (C)

```c
int pivotIndex(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Ilk pivot indeksi; yoksa `-1`.

EN: The first pivot index, or `-1` if none exists.

## Example

```text
Input: nums = [1,7,3,6,5,6]
Output: 3
Reason: left sum 1+7+3 equals right sum 5+6.
```

## Approach

TR: Once toplami hesapla. Her indekste sag toplam `total - left_sum - nums[i]` olarak bulunur.

EN: Compute total sum first. At each index, derive right sum as `total - left_sum - nums[i]`.

## Solution

- [solution.c](solution.c)
