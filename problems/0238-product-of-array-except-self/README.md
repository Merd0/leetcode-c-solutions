# #0238 - Product of Array Except Self

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Prefix Sum
- Hint: Build the product on the left of each index, then multiply by a running product from the right.
- Solved date: 2026-06-26
- Source: https://leetcode.com/problems/product-of-array-except-self/
- Note: Daily practice question

## Problem Statement

TR: `nums[i]` haric tum elemanlarin carpimini her index icin bul ve sonucu
yeni bir dizide dondur. Bolme islemi kullanilamaz.

EN: For every index, return the product of all array values except the value at
that index. Division is not allowed.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Must be set to `numsSize`.
- Returns: A newly allocated result array.

## Examples

```text
Input:  nums = [1,2,3,4]
Output: [24,12,8,6]

For index 2, the result is 1 * 2 * 4 = 8.
```

```text
Input:  nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
```

## Constraints

- `2 <= nums.length <= 100000`
- The product of any prefix or suffix fits in a 32-bit integer.
- The required answer is guaranteed to fit in a 32-bit integer.
- Do not use division.

## Approach

For each result index, the answer is:

```text
product of values on the left * product of values on the right
```

First, write left products into the result array. `except[0]` is `1` because
there is nothing to its left. Then scan from right to left with
`rightProduct`. At each index, multiply the stored left product by the current
right product before adding `nums[i]` to that running product.

The order is important: updating `rightProduct` after writing the answer keeps
`nums[i]` out of its own result.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)` besides the required returned array

## Solution

- [solution.c](solution.c)
