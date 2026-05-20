# #0283 - Move Zeroes

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/move-zeroes/
- Topics: Array, Two Pointers, In-place

## Problem

TR: Dizideki tum sifirlari sona tasi. Sifir olmayan elemanlarin kendi aralarindaki sirasini koru.

EN: Move all zeroes to the end while keeping the relative order of non-zero values.

## Starter Code (C)

```c
void moveZeroes(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array, modified in-place.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Bir sey dondurmez; dizi yerinde degisir.

EN: Return nothing; modify the array in-place.

## Example

```text
Input: nums = [0,1,0,3,12]
After call: nums = [1,3,12,0,0]
```

## Approach

TR: Once sifir olmayanlari basa kompakt yaz, sonra kalan pozisyonlari sifirla.

EN: First compact non-zero values to the front, then fill the remaining positions with zeroes.

## Solution

- [solution.c](solution.c)
