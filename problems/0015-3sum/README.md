# #0015 - 3Sum

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Two Pointers, Sorting
- Companies: Not tracked in this repo
- Hint: Sort first, then fix one number and solve the remaining pair with two pointers.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/3sum/

## Problem Statement

TR: Bir tamsayi dizisi verilir. Toplami `0` olan ve tekrar etmeyen tum uc elemanli kombinasyonlari dondur.

EN: Given an integer array, return all unique triplets whose sum is `0`.

## Starter Code (C)

```c
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements.
- `returnSize`: Number of triplets written by the function.
- `returnColumnSizes`: Column size for each returned triplet.

## Return

TR: Her satiri 3 elemanli olan sonuc matrisi.

EN: Return a matrix where each row contains one triplet.

## Examples

### Example 1

```text
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
```

### Example 2

```text
Input: nums = [0,1,1]
Output: []
```

### Example 3

```text
Input: nums = [0,0,0]
Output: [[0,0,0]]
```

## Constraints

- `3 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`

## Approach

TR: Diziyi sirala. Her `i` icin ayni degeri tekrar kullanma; kalan kisimda `left/right` ile `0` toplam arayip bulunan tripletlerden sonra tekrar eden degerleri atla.

EN: Sort the array. For each fixed `i`, skip duplicate fixed values; then use `left/right` on the remaining range and skip duplicates after each found triplet.

## Solution

- [solution.c](solution.c)
