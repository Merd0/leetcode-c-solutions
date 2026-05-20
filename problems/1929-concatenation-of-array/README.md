# #1929 - Concatenation of Array

- Difficulty: Easy
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/concatenation-of-array/
- Topics: Array, Simulation

## Problem

TR: Bir dizi verilir. Sonuc dizisi, bu dizinin kendisini arka arkaya iki kez icermelidir.

EN: Given an array, return a new array that contains the original array twice in sequence.

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

TR: Uzunlugu `2 * numsSize` olan yeni dizi.

EN: A new array of length `2 * numsSize`.

## Example

```text
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
```

## Approach

TR: Her elemani hem `i` hem de `i + numsSize` konumuna kopyala.

EN: Copy each value into both `i` and `i + numsSize`.

## Solution

- [solution.c](solution.c)
