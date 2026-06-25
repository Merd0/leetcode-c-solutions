# #1748 - Sum of Unique Elements

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table, Counting
- Hint: Count each value first, then add only values whose count is exactly one.
- Solved date: 2026-06-25
- Source: https://leetcode.com/problems/sum-of-unique-elements/
- Note: Daily / extra practice question

## Problem Statement

TR: `nums` dizisinde sadece bir kez gecen elemanlari bul ve bu elemanlarin
toplamini dondur.

EN: Return the sum of all values that appear exactly once in `nums`.

## Starter Code (C)

```c
int sumOfUnique(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.
- Returns the sum of unique values.

## Examples

```text
Input: nums = [1,2,3,2]
Output: 4
Explanation: 1 and 3 appear once, so 1 + 3 = 4.
```

```text
Input: nums = [1,1,1,1,1]
Output: 0
Explanation: No value is unique.
```

```text
Input: nums = [1,2,3,4,5]
Output: 15
Explanation: Every value appears once.
```

## Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`

## Approach

The value range is small, so a fixed frequency array is enough:

1. Count each number in `unique[nums[i]]`.
2. Walk through the original array again.
3. If `unique[nums[i]] == 1`, add that value to the answer.

The second pass uses `nums[i]`, not the frequency index itself, so the code
adds the actual unique values.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)` because the frequency table has fixed size `101`

## Solution

- [solution.c](solution.c)
