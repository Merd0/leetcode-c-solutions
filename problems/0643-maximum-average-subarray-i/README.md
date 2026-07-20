# #0643 - Maximum Average Subarray I

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Sliding Window
- Hint: Keep the sum of exactly `k` elements and slide it by one index.
- Solved date: 2026-05-26
- Source: https://leetcode.com/problems/maximum-average-subarray-i/

## Problem Statement

TR: Bir integer dizisi ve `k` veriliyor. Uzunlugu `k` olan surekli alt diziler icindeki maksimum ortalamayi bul.

EN: Given an integer array and an integer `k`, return the maximum average value of any contiguous subarray of length `k`.

## Starter Code (C)

```c
double findMaxAverage(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: input integer array.
- `numsSize`: number of elements in `nums`.
- `k`: fixed window size.
- Returns the maximum average as a `double`.

## Examples

```text
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: The subarray [12,-5,-6,50] has sum 51 and average 12.75.
```

```text
Input: nums = [5], k = 1
Output: 5.00000
```

## Constraints

- `1 <= k <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`

## Approach

Calculate the sum of the first `k` values. Then slide the window: subtract the
value leaving the window and add the new value entering it. Track the maximum
window sum and divide it by `k` at the end.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
