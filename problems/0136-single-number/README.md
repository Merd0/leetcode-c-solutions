# #0136 - Single Number

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/single-number/
- Topics: Array, Bit Manipulation, XOR

## Problem

TR: Dizide bir sayi bir kez, diger sayilar ikiser kez geciyor. Tek gecen sayiyi bul.

EN: One value appears once and all other values appear twice. Find the single value.

## Starter Code (C)

```c
int singleNumber(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Sadece bir kez gecen sayi.

EN: The value that appears only once.

## Example

```text
Input: nums = [4,1,2,1,2]
Output: 4
```

## Approach

TR: XOR kullan. Ayni sayilar birbirini sifirlar, geriye tek olan deger kalir.

EN: Use XOR. Equal values cancel each other, leaving only the unpaired value.

## Solution

- [solution.c](solution.c)
