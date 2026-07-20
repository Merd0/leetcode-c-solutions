# #2574 - Left and Right Sum Differences

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Prefix Sum
- Hint: Keep the total sum and move each value from the right side to the left.
- Solved date: 2026-06-06
- Source: https://leetcode.com/problems/left-and-right-sum-differences/

## Problem Statement

TR: Her `i` indexi icin soldaki elemanlarin toplami ile sagdaki elemanlarin
toplami arasindaki mutlak farki hesapla ve yeni bir array olarak dondur.

EN: For every index `i`, return the absolute difference between the sum of
elements strictly to its left and the sum of elements strictly to its right.

## Starter Code (C)

```c
int* leftRightDifference(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements.
- `returnSize`: Set to the length of the returned array.
- Returns a malloced result array; the caller owns and frees it.

## Examples

```text
Input: nums = [10,4,8,3]
Output: [15,1,11,22]
Explanation:
left sums  = [0,10,14,22]
right sums = [15,11,3,0]
```

```text
Input: nums = [1]
Output: [0]
```

## Constraints

- `1 <= nums.length <= 1000`
- `1 <= nums[i] <= 10^5`

## Approach

First calculate `totalSum`. During the second pass, `leftSum` contains all
values before index `i`.

The right-side sum is:

```text
rightSum = totalSum - leftSum - nums[i]
```

Write `abs(leftSum - rightSum)` to the result, then add `nums[i]` to
`leftSum` for the next index. This avoids building separate left and right sum
arrays.

## Complexity

- Time: `O(n)`
- Extra working space: `O(1)`, excluding the required output array

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
