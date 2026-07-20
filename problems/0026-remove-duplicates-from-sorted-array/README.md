# #0026 - Remove Duplicates from Sorted Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Two Pointers
- Hint: Because the array is sorted, duplicate values are next to each other.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

## Problem Statement

TR: Azalan olmayan sirada sirali bir dizide tekrar eden degerleri yerinde temizle. Her benzersiz eleman dizinin ilk `k` pozisyonunda bir kez bulunmali ve fonksiyon `k` dondurmelidir.

EN: Given a non-decreasing sorted array, remove duplicates in-place so each unique value appears once in the first `k` positions, then return `k`.

## Starter Code (C)

```c
int removeDuplicates(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Sorted input array modified in-place.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Benzersiz eleman sayisi.

EN: Return the number of unique elements.

## Examples

### Example 1

```text
Input: nums = [1,1,2]
Output: 2
Explanation:
The first 2 values become [1,2].
```

### Example 2

```text
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5
Explanation:
The first 5 values become [0,1,2,3,4].
```

## Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in non-decreasing order.

## Approach

TR: Sirali dizide yeni deger ancak onceki benzersiz degerden farkliysa yazilir. `index`, bir sonraki benzersiz degerin yazilacagi konumu tutar.

EN: In a sorted array, a value is written only when it differs from the previous unique value. `index` tracks where the next unique value should be placed.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
