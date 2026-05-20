# #1480 - Running Sum of 1d Array

- Difficulty: Easy
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/running-sum-of-1d-array/
- Topics: Array, Prefix Sum

## Problem

TR: Her indeks icin dizinin basindan o indekse kadar olan toplami hesaplayan yeni dizi olustur.

EN: Build a new array where each index stores the sum from the start through that index.

## Starter Code (C)

```c
int* runningSum(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output length of the returned array.

## Return

TR: Prefix toplamlarini iceren yeni dizi.

EN: A new array containing prefix sums.

## Example

```text
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
```

## Approach

TR: Soldan saga tek `sum` degiskeni tut. Her adimda toplami sonuca yaz.

EN: Keep one running `sum` from left to right and write it into the answer each step.

## Solution

- [solution.c](solution.c)
