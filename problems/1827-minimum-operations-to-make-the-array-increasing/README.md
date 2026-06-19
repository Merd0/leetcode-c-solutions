# #1827 - Minimum Operations to Make the Array Increasing

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Greedy
- Hint: Each value only needs to be larger than the value immediately before it.
- Solved date: 2026-06-19
- Source: https://leetcode.com/problems/minimum-operations-to-make-the-array-increasing/
- Note: Daily practice question

## Problem Statement

TR: Bir islemde herhangi bir elemani `1` artirabilirsin. `nums` dizisini
strictly increasing yapmak icin gereken minimum islem sayisini dondur.

EN: In one operation, you may increment any element by `1`. Return the minimum
number of operations needed to make `nums` strictly increasing.

## Starter Code (C)

```c
int minOperations(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Integer array.
- `numsSize`: Number of elements in `nums`.
- Returns the minimum number of increments needed.

## Examples

```text
Input: nums = [1,1,1]
Output: 3
Explanation:
Raise the second value to 2 and the third value to 3.
The final array can be [1,2,3].
```

```text
Input: nums = [1,5,2,4,1]
Output: 14
Explanation:
The array can become [1,5,6,7,8].
```

```text
Input: nums = [8]
Output: 0
Explanation: A single element is already strictly increasing.
```

## Constraints

- `1 <= nums.length <= 5000`
- `1 <= nums[i] <= 10000`

## Approach

Move from left to right. When `nums[i]` is not greater than `nums[i - 1]`, it
must be raised to exactly:

```c
nums[i - 1] + 1
```

Anything smaller still breaks the rule, and anything larger would waste
operations. Add the difference to `count` and update `nums[i]` in place so the
next comparison uses the corrected value.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
