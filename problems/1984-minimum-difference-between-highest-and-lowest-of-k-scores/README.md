# #1984 - Minimum Difference Between Highest and Lowest of K Scores

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Sorting, Sliding Window
- Hint: After sorting, the best group of `k` scores is contiguous.
- Solved date: 2026-05-30
- Source: https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/

## Problem Statement

TR: Ogrenci skorlarindan olusan bir array ve `k` veriliyor. `k` skor secildiginde
en yuksek ve en dusuk skor arasindaki fark minimum olsun. Bu minimum farki
dondur.

EN: Given student scores and an integer `k`, choose any `k` scores so that the
difference between the highest and lowest selected score is minimized. Return
that minimum difference.

## Starter Code (C)

```c
int minimumDifference(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: score array.
- `numsSize`: number of scores.
- `k`: number of scores to select.
- Returns the minimum possible difference.

## Examples

```text
Input: nums = [90], k = 1
Output: 0
```

```text
Input: nums = [9,4,1,7], k = 2
Output: 2
Explanation: After sorting [1,4,7,9], the best window is [7,9].
```

## Constraints

- `1 <= k <= nums.length <= 1000`
- `0 <= nums[i] <= 10^5`

## Approach

Sort the scores. After sorting, any optimal group of `k` scores can be checked
as a contiguous window. For every window of size `k`, compute:

```text
nums[i + k - 1] - nums[i]
```

Return the smallest difference.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
