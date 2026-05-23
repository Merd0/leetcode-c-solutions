# #0448 - Find All Numbers Disappeared in an Array

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table
- Companies: Not tracked in this repo
- Hint: Values are in `1..n`, so each value can mark one index.
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

## Problem Statement

TR: Uzunlugu `n` olan dizide degerler `1..n` araligindadir. Bu araliktan dizide gorunmeyen tum sayilari dondur.

EN: Given an array of length `n` with values from `1..n`, return all numbers in that range that do not appear in the array.

## Starter Code (C)

```c
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Input array; this solution modifies it for marking.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output length of the returned array.

## Return

TR: Eksik sayilari iceren heap uzerinde ayrilmis dizi.

EN: Return a heap-allocated array containing the missing numbers.

## Examples

### Example 1

```text
Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
```

### Example 2

```text
Input: nums = [1,1]
Output: [2]
```

### Example 3

```text
Input: nums = [1,2,3,4]
Output: []
```

## Constraints

- `n == nums.length`
- `1 <= n <= 10^5`
- `1 <= nums[i] <= n`

## Approach

TR: Her `value` icin `value - 1` indeksini isaretle. Isaretleme negatif yapilarak uygulanir. Son turda pozitif kalan indeksler, hic gorulmeyen sayilari gosterir.

EN: For each `value`, mark index `value - 1` by making it negative. In the final pass, indices that remain positive represent values that never appeared.

## Solution

- [solution.c](solution.c)
