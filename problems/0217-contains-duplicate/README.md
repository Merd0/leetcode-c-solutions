# #0217 - Contains Duplicate

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table, Sorting
- Companies: Not tracked in this repo
- Hint: After sorting, equal values become neighbors.
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/contains-duplicate/

## Problem Statement

TR: Bir tamsayi dizisi verilir. Dizide herhangi bir deger en az iki kez geciyorsa `true`, tum degerler benzersizse `false` dondur.

EN: Given an integer array, return `true` if any value appears at least twice; otherwise return `false`.

## Starter Code (C)

```c
bool containsDuplicate(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Tekrar eden eleman varsa `true`, yoksa `false`.

EN: Return `true` when a duplicate exists; otherwise return `false`.

## Examples

### Example 1

```text
Input: nums = [1,2,3,1]
Output: true
```

### Example 2

```text
Input: nums = [1,2,3,4]
Output: false
```

### Example 3

```text
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
```

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

## Approach

TR: Dizi siralanir. Siralama sonrasi ayni degerler yan yana gelir. Ardindan komsu elemanlar karsilastirilir.

EN: Sort the array first. Equal values become adjacent after sorting, so checking neighboring elements is enough.

## Solution

- [solution.c](solution.c)
