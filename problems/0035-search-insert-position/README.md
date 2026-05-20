# #0035 - Search Insert Position

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Binary Search
- Companies: Not tracked in this repo
- Hint: Since the array is sorted, search for the first position where `nums[i] >= target`.
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/search-insert-position/

## Problem Statement

TR: Sirali ve farkli tamsayilardan olusan `nums` dizisi ve bir `target` verilir. `target` dizide varsa indeksini dondur. Yoksa sirayi bozmadan eklenecegi indeksi dondur.

EN: Given a sorted array of distinct integers and a `target`, return the index if `target` exists. Otherwise, return the index where it should be inserted to keep the array sorted.

## Starter Code (C)

```c
int searchInsert(int* nums, int numsSize, int target) {

}
```

## Parameters

- `nums`: Sorted input array with distinct values.
- `numsSize`: Number of elements in `nums`.
- `target`: Value to search or insert.

## Return

TR: `target` degerinin bulundugu veya eklenmesi gereken indeks.

EN: Return the index where `target` is found or should be inserted.

## Examples

### Example 1

```text
Input: nums = [1,3,5,6], target = 5
Output: 2
Explanation:
5 already exists at index 2.
```

### Example 2

```text
Input: nums = [1,3,5,6], target = 2
Output: 1
Explanation:
2 should be inserted before 3.
```

### Example 3

```text
Input: nums = [1,3,5,6], target = 7
Output: 4
Explanation:
7 is greater than every element, so it belongs after the last index.
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` contains distinct values sorted in ascending order.
- `-10^4 <= target <= 10^4`
- Required runtime complexity: `O(log n)`

## Approach

TR: Binary search ile lower bound mantigi kur. `nums[mid] < target` ise sol siniri ileri al; degilse sag siniri `mid` konumuna cek. Dongu bittiginde `left` cevap olur.

EN: Use lower-bound binary search. If `nums[mid] < target`, move the left boundary right; otherwise move the right boundary to `mid`. When the loop ends, `left` is the answer.

## Solution

- [solution.c](solution.c)
