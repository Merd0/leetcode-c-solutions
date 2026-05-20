# #0561 - Array Partition

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/array-partition/
- Topics: Array, Sorting, Greedy

## Problem

TR: `2n` sayiyi n ikiliye ayir. Her ikilinin kucuk elemanlari toplami maksimum olsun.

EN: Split `2n` numbers into `n` pairs so the sum of each pair's smaller value is maximized.

## Starter Code (C)

```c
int arrayPairSum(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array with even length.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Maksimum mumkun minimumlar toplami.

EN: Maximum possible sum of pair minimums.

## Example

```text
Input: nums = [6,2,6,5,1,2]
Output: 9
Reason: sorted pairs can contribute 1 + 2 + 6.
```

## Approach

TR: Diziyi sirala ve yan yana eslestir. Her ciftin ilk elemani toplama eklenir.

EN: Sort the array and pair neighbors. Add the first value of each pair.

## Solution

- [solution.c](solution.c)
