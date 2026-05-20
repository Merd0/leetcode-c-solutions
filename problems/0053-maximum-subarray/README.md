# #0053 - Maximum Subarray

- Difficulty: Medium
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/maximum-subarray/
- Topics: Array, Dynamic Programming, Kadane

## Problem

TR: Dizide ardisik bir alt dizi sec ve bu alt dizinin toplamini olabilecek en buyuk hale getir.

EN: Choose one contiguous subarray and return the largest possible sum.

## Starter Code (C)

```c
int maxSubArray(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: En buyuk ardisik alt dizi toplami.

EN: The maximum contiguous subarray sum.

## Example

```text
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Reason: [4,-1,2,1] has sum 6.
```

## Approach

TR: Kadane algoritmasi kullan. `current` burada biten en iyi toplam, `best` simdiye kadar gorulen en iyi toplamdir.

EN: Use Kadane's algorithm. `current` is the best sum ending here, and `best` is the best sum seen so far.

## Solution

- [solution.c](solution.c)
