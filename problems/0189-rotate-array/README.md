# #0189 - Rotate Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Math, Two Pointers
- Hint: Reverse the whole array, then reverse the two parts.
- Solved date: 2026-06-03
- Source: https://leetcode.com/problems/rotate-array/

## Problem Statement

TR: Bir integer array ve `k` veriliyor. Array'i sag tarafa `k` adim rotate et.
Islem in-place yapilmalidir.

EN: Given an integer array and an integer `k`, rotate the array to the right by
`k` steps in-place.

## Starter Code (C)

```c
void rotate(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: input/output array.
- `numsSize`: number of elements.
- `k`: number of right rotations.
- Returns nothing; modifies `nums` in-place.

## Examples

```text
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
```

```text
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
```

## Constraints

- `1 <= nums.length <= 10^5`
- `-2^31 <= nums[i] <= 2^31 - 1`
- `0 <= k <= 10^5`

## Approach

Normalize `k` with modulo, then use three reversals:

1. Reverse the entire array.
2. Reverse the first `k` elements.
3. Reverse the remaining elements.

This keeps the solution in-place with `O(1)` extra memory.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
