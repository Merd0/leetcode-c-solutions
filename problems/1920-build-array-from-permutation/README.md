# #1920 - Build Array from Permutation

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Simulation
- Hint: `nums[i]` tells which index should be read next.
- Solved date: 2026-05-18
- Source: https://leetcode.com/problems/build-array-from-permutation/

## Problem Statement

TR: `nums` dizisi `0..n-1` araligindaki sayilardan olusan bir permutation olarak verilir. Her indeks icin `answer[i] = nums[nums[i]]` olacak yeni dizi olustur.

EN: Given `nums` as a permutation of values from `0` to `n - 1`, build a new array where `answer[i] = nums[nums[i]]`.

## Starter Code (C)

```c
int* buildArray(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Input permutation array.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output length of the returned array.

## Return

TR: Kurala gore olusturulmus yeni dizi.

EN: Return a new array built from the nested-indexing rule.

## Examples

### Example 1

```text
Input: nums = [0,2,1,5,3,4]
Output: [0,1,2,4,5,3]
Explanation:
answer[1] = nums[nums[1]] = nums[2] = 1.
```

### Example 2

```text
Input: nums = [5,0,1,2,3,4]
Output: [4,5,0,1,2,3]
```

## Constraints

- `1 <= nums.length <= 1000`
- `0 <= nums[i] < nums.length`
- All values in `nums` are unique.

## Approach

TR: Her indeks icin kurali dogrudan uygula. Sonucu yeni diziye yazmak `nums` dizisini bozmadan okumayi saglar.

EN: Apply the rule directly for every index. Writing into a new array keeps the original `nums` readable while values are being computed.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
