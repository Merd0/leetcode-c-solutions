# #0053 - Maximum Subarray

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Dynamic Programming, Kadane
- Hint: At each index, decide whether to extend the previous subarray or start a new one.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/maximum-subarray/

## Problem Statement

TR: Bir tamsayi dizisi `nums` verilir. Toplami en buyuk olan ardisik alt diziyi bul ve bu toplami dondur.

EN: Given an integer array `nums`, find the contiguous subarray with the largest sum and return that sum.

## Starter Code (C)

```c
int maxSubArray(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: En buyuk ardisik alt dizi toplami.

EN: Return the largest possible sum of a contiguous subarray.

## Examples

### Example 1

```text
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation:
The subarray [4,-1,2,1] has the largest sum, which is 6.
```

### Example 2

```text
Input: nums = [1]
Output: 1
Explanation:
The only subarray is [1].
```

### Example 3

```text
Input: nums = [5,4,-1,7,8]
Output: 23
Explanation:
The whole array has the largest sum, which is 23.
```

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`

## Follow Up

TR: `O(n)` cozumden sonra divide and conquer yaklasimini da tekrar etmek iyi bir pratik olur.

EN: After understanding the `O(n)` solution, revisit the divide-and-conquer version as an extra exercise.

## Approach

TR: Kadane algoritmasi kullan. `currentSum`, mevcut indekste biten en iyi toplamdir. Ya onceki toplami devam ettirirsin ya da mevcut elemandan yeni alt dizi baslatirsin. `maxSum` simdiye kadar gorulen en iyi cevaptir.

EN: Use Kadane's algorithm. `currentSum` is the best sum ending at the current index. Either extend the previous sum or start a new subarray from the current value. `maxSum` stores the best answer seen so far.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
