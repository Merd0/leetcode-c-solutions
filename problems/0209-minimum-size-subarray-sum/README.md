# #0209 - Minimum Size Subarray Sum

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Binary Search, Sliding Window, Prefix Sum
- Hint: With positive numbers, once the sum is large enough, shrinking from the left is safe.
- Solved date: 2026-05-26
- Source: LeetCode #209

## Problem Statement

TR: Pozitif integer dizisi ve `target` veriliyor. Toplami en az `target` olan en kisa surekli alt dizinin uzunlugunu bul. Yoksa `0` dondur.

EN: Given a positive integer array and a target, return the minimal length of a contiguous subarray whose sum is at least target.

## Starter Code (C)

```c
int minSubArrayLen(int target, int* nums, int numsSize) {

}
```

## Parameters / Return

- `target`: required minimum sum.
- `nums`: positive integer array.
- `numsSize`: number of elements in `nums`.
- Returns the minimum valid subarray length, or `0` if none exists.

## Examples

```text
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: [4,3] is the shortest valid subarray.
```

```text
Input: target = 4, nums = [1,4,4]
Output: 1
```

```text
Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
```

## Constraints

- `1 <= target <= 10^9`
- `1 <= nums.length <= 10^5`
- `1 <= nums[i] <= 10^4`

## Approach

Use a variable-size sliding window. Add values from the right. Whenever the sum
is at least `target`, update the minimum length and shrink from the left.
