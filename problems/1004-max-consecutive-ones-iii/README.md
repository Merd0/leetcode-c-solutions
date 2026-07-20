# #1004 - Max Consecutive Ones III

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Binary Search, Sliding Window, Prefix Sum
- Hint: Keep a window with at most `k` zeroes.
- Solved date: 2026-05-26
- Source: https://leetcode.com/problems/max-consecutive-ones-iii/

## Problem Statement

TR: `0` ve `1`lerden olusan bir dizi ve `k` veriliyor. En fazla `k` tane `0` degerini `1`e cevirebilirsen, elde edilebilecek en uzun ard arda `1` uzunlugunu bul.

EN: Given a binary array and an integer `k`, return the longest subarray containing only 1s after flipping at most `k` zeroes.

## Starter Code (C)

```c
int longestOnes(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: binary input array.
- `numsSize`: number of elements in `nums`.
- `k`: maximum number of zeroes that can be flipped.
- Returns the longest valid window length.

## Examples

```text
Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
Output: 6
Explanation: Flip two zeroes to get a length-6 window of ones.
```

```text
Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
Output: 10
```

## Constraints

- `1 <= nums.length <= 10^5`
- `nums[i]` is either `0` or `1`.
- `0 <= k <= nums.length`

## Approach

Use a variable-size sliding window. Expand `right`, count zeroes, and shrink
from `left` while the window has more than `k` zeroes. Every valid window is a
candidate answer.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
