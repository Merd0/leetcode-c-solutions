# #0414 - Third Maximum Number

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/third-maximum-number/
- Topics: Array, Distinct Values

## Problem

TR: Dizideki ucuncu farkli maksimum sayiyi dondur. Uc farkli maksimum yoksa en buyuk sayiyi dondur.

EN: Return the third distinct maximum value. If fewer than three distinct values exist, return the maximum.

## Starter Code (C)

```c
int thirdMax(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Ucuncu farkli maksimum veya genel maksimum.

EN: The third distinct maximum, or the overall maximum.

## Example

```text
Input: nums = [2,2,3,1]
Output: 1
Reason: Distinct maximums are 3, 2, and 1.
```

## Approach

TR: Birinci, ikinci ve ucuncu farkli maksimumlari takip et. `INT_MIN` degerini kacirmamak icin flag kullan.

EN: Track the first, second, and third distinct maximums. Use flags so `INT_MIN` is handled correctly.

## Solution

- [solution.c](solution.c)
