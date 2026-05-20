# #0217 - Contains Duplicate

- Difficulty: Easy
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/contains-duplicate/
- Topics: Array, Sorting, Hash Table

## Problem

TR: Dizide en az iki kez gorunen bir deger varsa `true`, yoksa `false` dondur.

EN: Return `true` if any value appears at least twice; otherwise return `false`.

## Starter Code (C)

```c
bool containsDuplicate(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Tekrar eden deger varsa `true`, yoksa `false`.

EN: `true` if a duplicate exists, otherwise `false`.

## Example

```text
Input: nums = [1,2,3,1]
Output: true
Reason: 1 appears twice.
```

## Approach

TR: Diziyi sirala. Tekrar eden sayilar siralamadan sonra yan yana gelir.

EN: Sort the array. Duplicate values become adjacent after sorting.

## Solution

- [solution.c](solution.c)
