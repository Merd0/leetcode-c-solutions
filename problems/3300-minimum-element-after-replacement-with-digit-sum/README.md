# #3300 - Minimum Element After Replacement With Digit Sum

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Math
- Hint: Replace each number with its digit sum and keep the smallest result.
- Solved date: 2026-05-30
- Source: LeetCode #3300

## Problem Statement

TR: Bir integer dizisi veriliyor. Her elemani kendi rakamlari toplami ile
degistir. Bu degisimlerden sonra dizideki minimum elemani dondur.

EN: Given an integer array, replace every element with the sum of its digits and
return the minimum value after all replacements.

## Starter Code (C)

```c
int minElement(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: input integer array.
- `numsSize`: number of elements in `nums`.
- Returns the smallest digit sum among all elements.

## Examples

```text
Input: nums = [10,12,13,14]
Output: 1
Explanation: The digit sums are [1,3,4,5], so the minimum is 1.
```

```text
Input: nums = [1,2,3,4]
Output: 1
Explanation: Single-digit numbers keep the same value.
```

```text
Input: nums = [999,19,199]
Output: 10
Explanation: The digit sums are [27,10,19], so the minimum is 10.
```

## Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 10^4`

## Approach

Traverse the array once. For each number, repeatedly take `temp % 10` to get
the last digit, add it to `digitSum`, then divide by 10 to remove that digit.
After computing each digit sum, update the current minimum.

This is a direct simulation with constant extra memory.
