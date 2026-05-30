# #3314 - Construct the Minimum Bitwise Array I

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Bit Manipulation
- Hint: The constraints are small enough to try every possible `x`.
- Solved date: 2026-05-30
- Source: LeetCode #3314

## Problem Statement

TR: Prime sayilardan olusan `nums` dizisi veriliyor. Her `nums[i]` icin en
kucuk `x` degerini bul; sart `x | (x + 1) == nums[i]` olmalidir. Boyle bir
deger yoksa cevap `-1` olur.

EN: Given an array of prime numbers, construct `ans` where each `ans[i]` is the
minimum value `x` such that `x | (x + 1) == nums[i]`. If no such value exists,
set `ans[i] = -1`.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* minBitwiseArray(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters / Return

- `nums`: input array of prime numbers.
- `numsSize`: number of elements in `nums`.
- `returnSize`: output size of the returned array.
- Returns a malloced answer array.

## Examples

```text
Input: nums = [2,3,5,7]
Output: [-1,1,4,3]
Explanation: 1|2 = 3, 4|5 = 5, and 3|4 = 7. No x works for 2.
```

```text
Input: nums = [11,13,31]
Output: [9,12,15]
```

## Constraints

- `1 <= nums.length <= 100`
- `2 <= nums[i] <= 1000`
- `nums[i]` is prime.

## Approach

Use direct simulation. For each `nums[i]`, try all `x` from `0` to `nums[i]`
and return the first one satisfying:

```c
(x | (x + 1)) == nums[i]
```

Because the first valid `x` is returned, the answer is minimized.
