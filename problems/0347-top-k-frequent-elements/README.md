# #0347 - Top K Frequent Elements

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Hash Table, Divide and Conquer, Sorting, Heap, Bucket Sort, Counting, Quickselect
- Hint: Count occurrences first, then choose the values with the largest counts.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/top-k-frequent-elements/

## Problem Statement

TR: Bir integer dizisi ve `k` veriliyor. Dizide en cok tekrar eden `k` farkli elemani dondur.

EN: Given an integer array and an integer `k`, return the `k` most frequent elements.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* topKFrequent(int* nums, int numsSize, int k, int* returnSize) {

}
```

## Parameters / Return

- `nums`: input array.
- `numsSize`: length of `nums`.
- `k`: number of frequent values to return.
- `returnSize`: output size of the returned array.
- Returns a malloced array containing `k` values.

## Examples

```text
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
```

```text
Input: nums = [1], k = 1
Output: [1]
```

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`
- `k` is in the range `[1, number of unique elements]`.
- The answer is unique.

## Approach

Sort the input array so equal values become adjacent. Count each unique value
in one pass and store it as a `(value, count)` pair. Sort pairs by count in
descending order, then return the first `k` values.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
