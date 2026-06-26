# #1979 - Find Greatest Common Divisor of Array

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Math, Number Theory
- Hint: Find the smallest and largest values first; their greatest common divisor is the answer.
- Solved date: 2026-06-26
- Source: https://leetcode.com/problems/find-greatest-common-divisor-of-array/
- Note: Daily practice question

## Problem Statement

TR: Dizideki en kucuk ve en buyuk sayinin EBOB'unu dondur.

EN: Return the greatest common divisor of the smallest and largest values in
the array.

## Starter Code (C)

```c
int findGCD(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.
- Returns: The GCD of the array's minimum and maximum values.

## Examples

```text
Input:  nums = [2,5,6,9,10]
Output: 2

The smallest value is 2 and the largest is 10.
Their greatest common divisor is 2.
```

```text
Input:  nums = [7,5,6,8,3]
Output: 1
```

## Constraints

- `2 <= nums.length <= 1000`
- `1 <= nums[i] <= 1000`

## Approach

Because the array is non-empty, initialize both `minValue` and `maxValue` from
`nums[0]`, then scan the remaining values. This works for any signed input
range and avoids guessing a sentinel value.

To find the GCD, test possible divisors from `minValue` down to `1`. The first
number that divides both values is necessarily the greatest common divisor.

This is a direct, readable solution. Euclid's remainder algorithm is a faster
alternative for larger number ranges.

## Complexity

- Time: `O(n + minValue)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
