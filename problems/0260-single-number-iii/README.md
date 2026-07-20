# #0260 - Single Number III

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Bit Manipulation
- Hint: Sorting makes duplicate pairs adjacent.
- Solved date: 2026-06-02
- Source: https://leetcode.com/problems/single-number-iii/

## Problem Statement

TR: Bir integer array veriliyor. Iki eleman sadece bir kere, diger tum elemanlar
iki kere geciyor. Bir kere gecen iki elemani dondur.

EN: Given an integer array where exactly two elements appear once and all other
elements appear twice, return the two single elements.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters / Return

- `nums`: input array, modified by sorting.
- `numsSize`: number of elements.
- `returnSize`: output size of the returned array.
- Returns a malloced array with the two single values.

## Examples

```text
Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Explanation: Order does not matter.
```

```text
Input: nums = [-1,0]
Output: [-1,0]
```

## Constraints

- `2 <= nums.length <= 3 * 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`
- Exactly two elements appear once; all others appear twice.

## Approach

Sort the array first. Duplicate values become adjacent pairs, so scanning is
simple:

- If `nums[i] == nums[i + 1]`, skip both.
- Otherwise `nums[i]` is one of the two single values.
- If the scan reaches the last element, that last element is single.

The optimal bitwise solution uses XOR partitioning, but this archived version
keeps the sorting-based accepted solution.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
