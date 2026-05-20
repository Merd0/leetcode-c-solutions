# #1920 - Build Array from Permutation

- Difficulty: Easy
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/build-array-from-permutation/
- Topics: Array, Simulation

## Problem

TR: `nums` dizisi bir permutation olarak verilir. Her indeks icin `answer[i] = nums[nums[i]]` olacak yeni dizi olustur.

EN: Given `nums` as a permutation, build a new array where `answer[i] = nums[nums[i]]`.

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

EN: A new array built from the nested-indexing rule.

## Example

```text
Input: nums = [0,2,1,5,3,4]
Output: [0,1,2,4,5,3]
Reason: answer[1] = nums[nums[1]] = nums[2] = 1
```

## Approach

TR: Her indeks icin kurali dogrudan uygula. Yeni dizi ayir ve `nums[nums[i]]` degerini yaz.

EN: Apply the rule directly for each index. Allocate a new array and write `nums[nums[i]]`.

## Solution

- [solution.c](solution.c)
