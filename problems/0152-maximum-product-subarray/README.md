# #0152 - Maximum Product Subarray

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Dynamic Programming
- Hint: Product problems need both the best and the worst product ending at the current index.
- Solved date: 2026-06-27
- Source: https://leetcode.com/problems/maximum-product-subarray/
- Note: Medium practice question

## Problem Statement

TR: Bir integer dizisi verilir. Ardisik bir subarray sec ve carpimi en buyuk
olan subarray'in carpimini dondur.

EN: Given an integer array, choose a contiguous subarray and return the largest
possible product.

## Starter Code (C)

```c
int maxProduct(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.
- Returns: The maximum product of a contiguous subarray.

## Examples

```text
Input:  nums = [2,3,-2,4]
Output: 6

The best subarray is [2,3], and 2 * 3 = 6.
```

```text
Input:  nums = [-2,0,-1]
Output: 0

The subarray [-2,-1] is not contiguous because 0 is between them.
```

```text
Input:  nums = [-2,3,-4]
Output: 24

The full subarray [-2,3,-4] gives 24.
```

## Constraints

- `1 <= nums.length <= 20000`
- `-10 <= nums[i] <= 10`
- The answer fits in a 32-bit signed integer.

## Initial Brute Force Idea

The direct idea is to try every subarray:

```text
start = 0: nums[0], nums[0..1], nums[0..2], ...
start = 1: nums[1], nums[1..2], ...
```

This is logically correct after checking the product inside the inner loop, but
it is `O(n^2)`. With large inputs, it can hit TLE.

## Optimized Approach

For sums, keeping only the best running sum is enough. For products, negative
numbers change the situation:

```text
a bad negative product * a negative number = a good positive product
```

So at each index we keep two states:

- `maxHere`: maximum product of a subarray ending at this index.
- `minHere`: minimum product of a subarray ending at this index.

For the current number `x`, there are three candidates:

```text
x
maxHere * x
minHere * x
```

The new `maxHere` is the largest of these three. The new `minHere` is the
smallest of these three.

Example:

```text
nums = [-2, 3, -4]
```

After reading `3`:

```text
maxHere = 3
minHere = -6
```

When `-4` arrives:

```text
minHere * -4 = -6 * -4 = 24
```

That is why the minimum product is worth keeping.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solutions

- [solution.c](solution.c) - optimized max/min product state
- [brute_force_tle.c](brute_force_tle.c) - learning attempt, correct idea but too slow

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
