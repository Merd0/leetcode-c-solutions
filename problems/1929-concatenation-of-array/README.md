# #1929 - Concatenation of Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Simulation
- Hint: The output length is exactly twice the input length.
- Solved date: 2026-05-18
- Source: https://leetcode.com/problems/concatenation-of-array/

## Problem Statement

TR: `nums` dizisi verilir. `nums` dizisini kendisiyle arka arkaya birlestirerek `ans = nums + nums` dizisini dondur.

EN: Given an array `nums`, return `ans = nums + nums`, the concatenation of the array with itself.

## Starter Code (C)

```c
int* getConcatenation(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output length of the returned array.

## Return

TR: Iki kez `nums` iceren yeni dizi.

EN: Return a new array that contains `nums` twice.

## Examples

### Example 1

```text
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
```

### Example 2

```text
Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
```

## Constraints

- `1 <= nums.length <= 1000`
- `1 <= nums[i] <= 1000`

## Approach

TR: `2 * numsSize` uzunlugunda yeni dizi ayir. Ilk yariya `nums[i]`, ikinci yariya yine `nums[i]` kopyalanir.

EN: Allocate a new array of length `2 * numsSize`. Copy `nums[i]` into the first half and again into the second half.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
