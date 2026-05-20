# #0026 - Remove Duplicates from Sorted Array

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
- Topics: Array, Two Pointers, In-place

## Problem

TR: Sirali dizide tekrar eden degerleri yerinde temizle. Dizinin ilk k elemani benzersiz kalacak sekilde `k` uzunlugunu dondur.

EN: Given a sorted array, remove duplicates in-place so the first `k` elements are unique, then return `k`.

## Starter Code (C)

```c
int removeDuplicates(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Sorted input array, modified in-place.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Benzersiz eleman sayisi.

EN: The number of unique elements.

## Example

```text
Input: nums = [0,0,1,1,2]
Output: 3
After call: first 3 values are [0,1,2]
```

## Approach

TR: `write` indeksi son benzersiz degerden sonraki bos yeri tutar. Yeni benzersiz deger gorunce oraya yaz.

EN: Keep a `write` index for the next unique slot. Copy a value only when it differs from the previous unique value.

## Solution

- [solution.c](solution.c)
