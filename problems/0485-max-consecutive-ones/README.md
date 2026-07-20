# #0485 - Max Consecutive Ones

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Counting
- Hint: A zero ends the current run of ones; after that, start counting again.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/max-consecutive-ones/

## Problem Statement

TR: Binary bir dizi `nums` verilir. Dizide arka arkaya gelen maksimum `1` sayisini dondur.

EN: Given a binary array `nums`, return the maximum number of consecutive `1` values in the array.

## Starter Code (C)

```c
int findMaxConsecutiveOnes(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Binary input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Arka arkaya gelen en uzun `1` serisinin uzunlugu.

EN: Return the length of the longest consecutive run of `1` values.

## Examples

### Example 1

```text
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation:
The first two values are consecutive 1s, and the last three values are also consecutive 1s.
The longest run has length 3.
```

### Example 2

```text
Input: nums = [1,0,1,1,0,1]
Output: 2
Explanation:
The longest consecutive run is [1,1].
```

## Constraints

- `1 <= nums.length <= 10^5`
- `nums[i]` is either `0` or `1`.

## Approach

TR: `currentI` mevcut `1` serisini sayar. `0` gelince seri biter ve `currentI` sifirlanir. `maxI`, simdiye kadar gorulen en uzun seriyi tutar.

EN: `currentI` counts the current run of `1` values. When a `0` appears, the run ends and `currentI` resets. `maxI` stores the longest run seen so far.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
