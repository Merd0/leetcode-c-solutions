# #1464 - Maximum Product of Two Elements in an Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Sorting
- Hint: The answer comes from the two largest values.
- Solved date: 2026-06-22
- Source: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
- Note: Daily practice question

## Problem Statement

TR: `nums` dizisinden iki farkli eleman sec. Secilen iki deger icin
`(nums[i] - 1) * (nums[j] - 1)` sonucunu maksimum yap ve bu maksimum degeri
dondur.

EN: Choose two different elements from `nums`. Maximize
`(nums[i] - 1) * (nums[j] - 1)` and return that maximum value.

## Starter Code (C)

```c
int maxProduct(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Integer array.
- `numsSize`: Number of elements in `nums`.
- Returns the maximum possible product after subtracting `1` from both chosen values.

## Examples

```text
Input: nums = [3,4,5,2]
Output: 12
Explanation: Choose 5 and 4. (5 - 1) * (4 - 1) = 12.
```

```text
Input: nums = [1,5,4,5]
Output: 16
Explanation: Choose 5 and 5 from two different indices.
```

```text
Input: nums = [3,7]
Output: 12
```

## Constraints

- `2 <= nums.length <= 500`
- `1 <= nums[i] <= 10^3`

## Approach

The maximum product must use the two largest values in the array.

Track:

- `max1`: largest value seen so far
- `max2`: second largest value seen so far

When a new value is greater than `max1`, the old `max1` becomes `max2`, and the
new value becomes `max1`.

If the value is not greater than `max1` but is greater than `max2`, update
`max2`.

This also handles equal largest values correctly. For example, `[5,5,4]`
becomes `max1 = 5`, `max2 = 5`.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
