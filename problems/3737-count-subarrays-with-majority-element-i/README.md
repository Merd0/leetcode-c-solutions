# #3737 - Count Subarrays With Majority Element I

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Counting, Subarray, Brute Force
- Hint: Fix the start index, move the end index, and keep only how many times `target` appears.
- Solved date: 2026-06-25
- Source: https://leetcode.com/problems/count-subarrays-with-majority-element-i/
- Note: Daily practice question

## Problem Statement

TR: `nums` icindeki her contiguous subarray icin `target` elemaninin o
subarray'in majority elemani olup olmadigini kontrol et. `target`, subarray
uzunlugunun yarisindan fazla kez gorunuyorsa bu subarray gecerlidir.

EN: Count the subarrays where `target` appears strictly more than half of the
subarray length.

## Starter Code (C)

```c
int countMajoritySubarrays(int* nums, int numsSize, int target) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.
- `target`: The value that must be the majority element.
- Returns the number of valid subarrays.

## Examples

```text
Input: nums = [1,2,2,3], target = 2
Output: 5
Explanation:
Valid subarrays are [2], [2], [2,2], [1,2,2], and [2,2,3].
```

```text
Input: nums = [1,1,1,1], target = 1
Output: 10
Explanation: Every subarray has 1 as the majority element.
```

```text
Input: nums = [1,2,3], target = 4
Output: 0
Explanation: Target never appears, so it cannot be majority.
```

## Constraints

- `1 <= nums.length <= 1000`
- `1 <= nums[i] <= 10^9`
- `1 <= target <= 10^9`

## Approach

Use two loops to enumerate every subarray:

- `start` chooses where the subarray begins.
- `end` expands the subarray one element at a time.
- `targetCount` tracks how many `target` values are inside the current subarray.

For a subarray length `length`, `target` is majority when:

```c
targetCount * 2 > length
```

Multiplying by `2` avoids floating point division and directly represents
"more than half".

## Complexity

- Time: `O(n^2)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
