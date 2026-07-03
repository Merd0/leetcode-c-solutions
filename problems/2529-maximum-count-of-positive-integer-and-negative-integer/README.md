# #2529 - Maximum Count of Positive Integer and Negative Integer

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Binary Search, Counting
- Hint: Use the sorted order to find the negative/positive boundaries.
- Solved date: 2026-07-03
- Source: https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
- Note: Light daily practice question

## Problem Statement

TR: Sirali bir `nums` array'i veriliyor. Negatif sayilarin adedini ve pozitif
sayilarin adedini bul. `0` sayilmaz. Bu iki adet arasindan buyuk olani dondur.

EN: Given a sorted array `nums`, count how many values are negative and how many
values are positive. Zero is not counted. Return the larger count.

## Starter Code (C)

```c
int maximumCount(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Sorted integer array.
- `numsSize`: Number of elements.
- Returns: `max(positive_count, negative_count)`.

## Examples

```text
Input:  nums = [-2,-1,-1,1,2,3]
Output: 3

There are 3 negative and 3 positive values.
```

```text
Input:  nums = [-3,-2,-1,0,0,1,2]
Output: 3

There are 3 negative and 2 positive values.
```

```text
Input:  nums = [5,20,66,1314]
Output: 4

There are 0 negative and 4 positive values.
```

## Constraints

- `1 <= nums.length <= 2000`
- `-2000 <= nums[i] <= 2000`
- `nums` is sorted in non-decreasing order.

## First Simple Approach

Scan the array once and keep two counters:

```text
negative: values less than 0
positive: values greater than 0
```

Ignore `0`, then return the larger counter.

This is accepted because `nums.length <= 2000`, but it does not use the most
important detail in the prompt: the array is already sorted.

## Accepted Approach: Binary Search Boundaries

Because the array is sorted, values appear in this order:

```text
negative values, then zeroes, then positive values
```

Find two boundaries:

```text
first_non_negative = first index where nums[i] >= 0
first_positive     = first index where nums[i] > 0
```

Then:

```text
negative_count = first_non_negative
positive_count = numsSize - first_positive
```

Everything before `first_non_negative` is negative. Everything from
`first_positive` to the end is positive. Zeroes stay in the middle and are
ignored.

## Small Bug From The Two-End Idea

Counting from both ends can work, but a loop like:

```c
while (left < right)
```

skips the middle element when the array length is odd. If the middle value is
positive or negative, the count becomes wrong. A single `for` loop avoids that
edge case, and binary search avoids counting one by one.

## Complexity

- Time: `O(log n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
