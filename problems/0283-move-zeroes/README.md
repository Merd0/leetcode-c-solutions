# #0283 - Move Zeroes

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Two Pointers
- Hint: First compact non-zero values, then fill the rest with zeroes.
- Solved date: 2026-05-19
- Source: https://leetcode.com/problems/move-zeroes/

## Problem Statement

TR: Bir tamsayi dizisi verilir. Tum `0` degerlerini dizinin sonuna tasirken sifir olmayan elemanlarin goreli sirasi korunmalidir. Islem yerinde yapilir.

EN: Given an integer array, move all `0` values to the end while preserving the relative order of non-zero values. The operation must be done in-place.

## Starter Code (C)

```c
void moveZeroes(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array modified in-place.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Fonksiyon `void` doner; sonuc `nums` uzerinde olusur.

EN: The function returns `void`; the result is written directly into `nums`.

## Examples

### Example 1

```text
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
```

### Example 2

```text
Input: nums = [0]
Output: [0]
```

### Example 3

```text
Input: nums = [1,0,1]
Output: [1,1,0]
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-2^31 <= nums[i] <= 2^31 - 1`
- The solution should modify the array in-place.

## Approach

TR: `index` degiskeni sifir olmayan elemanlarin yazilacagi siradaki yeri tutar. Once sifir olmayanlar basa yazilir, sonra kalan bolum `0` ile doldurulur.

EN: Use `index` as the next write position for non-zero values. First write all non-zero values to the front, then fill the remaining positions with `0`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
