# #0001 - Two Sum

- Difficulty: Easy
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/two-sum/
- Topics: Array, Brute Force, Hash Table

## Problem

TR: Bir tamsayi dizisi ve bir `target` degeri verilir. Dizideki iki farkli elemanin toplami `target` ediyorsa bu iki elemanin indekslerini dondur.

EN: Given an integer array and a `target`, return the indices of two different values whose sum equals `target`.

## Starter Code (C)

```c
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.
- `target`: Required sum.
- `returnSize`: Output parameter; set to `2` when two indices are returned.

## Return

TR: Heap uzerinde ayrilmis iki elemanli indeks dizisi dondurulur.

EN: Return a heap-allocated array containing two indices.

## Example

```text
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Reason: nums[0] + nums[1] = 2 + 7 = 9
```

## Approach

TR: Her elemani kendinden sonraki elemanlarla eslestir. Toplam `target` olunca indeksleri dondur.

EN: Try every pair. When the pair sum equals `target`, return the two indices.

## Solution

- [solution.c](solution.c)
