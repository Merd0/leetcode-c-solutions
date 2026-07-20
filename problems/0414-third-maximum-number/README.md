# #0414 - Third Maximum Number

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Sorting
- Hint: Track distinct maximum values, not just positions.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/third-maximum-number/

## Problem Statement

TR: Bir tamsayi dizisi verilir. Ucuncu farkli maksimum sayiyi dondur. Uc farkli sayi yoksa en buyuk sayiyi dondur.

EN: Given an integer array, return the third distinct maximum number. If fewer than three distinct values exist, return the maximum number.

## Starter Code (C)

```c
int thirdMax(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Ucuncu farkli maksimum veya yeterli farkli deger yoksa maksimum deger.

EN: Return the third distinct maximum, or the maximum value if fewer than three distinct values exist.

## Examples

### Example 1

```text
Input: nums = [3,2,1]
Output: 1
Explanation:
The third maximum is 1.
```

### Example 2

```text
Input: nums = [1,2]
Output: 2
Explanation:
There are only two distinct values, so return the maximum.
```

### Example 3

```text
Input: nums = [2,2,3,1]
Output: 1
Explanation:
The distinct values are 3, 2, and 1.
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`

## Approach

TR: `first`, `second`, `third` degiskenleri en buyuk uc farkli degeri tutar. Ayni deger tekrar geldiyse atlanir. Yeni deger bulundugu yere gore bu uc degiskeni kaydirir.

EN: `first`, `second`, and `third` store the three largest distinct values. Duplicate values are skipped. A new value shifts these variables depending on where it belongs.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
