# #0448 - Find All Numbers Disappeared in an Array

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
- Topics: Array, Index Marking, In-place

## Problem

TR: Uzunlugu `n` olan dizide degerler `1..n` araligindadir. Bu araliktan dizide gorunmeyen sayilari dondur.

EN: Given an array of length `n` with values in `1..n`, return the numbers from that range that do not appear.

## Starter Code (C)

```c
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Input array; may be modified during marking.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output parameter for the returned array length.

## Return

TR: Eksik sayilari iceren heap uzerinde ayrilmis dizi.

EN: A heap-allocated array containing the missing numbers.

## Example

```text
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
```

## Approach

TR: Gorulen `value` icin `value - 1` indeksini negatif yap. Pozitif kalan indeksler eksik sayilari gosterir.

EN: For each seen `value`, mark index `value - 1` as negative. Positive positions reveal missing values.

## Solution

- [solution.c](solution.c)
