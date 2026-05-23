# #0724 - Find Pivot Index

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Prefix Sum
- Companies: Not tracked in this repo
- Hint: At index `i`, compare the sum on the left with the sum on the right.
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/find-pivot-index/

## Problem Statement

TR: Bir dizide pivot indeks, solundaki elemanlarin toplami ile sagindaki elemanlarin toplaminin esit oldugu indekstir. En soldaki pivot indeksi dondur; yoksa `-1` dondur.

EN: A pivot index is an index where the sum of values to the left equals the sum of values to the right. Return the leftmost pivot index, or `-1` if none exists.

## Starter Code (C)

```c
int pivotIndex(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: En soldaki pivot indeks veya pivot yoksa `-1`.

EN: Return the leftmost pivot index, or `-1` when it does not exist.

## Examples

### Example 1

```text
Input: nums = [1,7,3,6,5,6]
Output: 3
Explanation:
Left sum is 1 + 7 + 3 = 11, and right sum is 5 + 6 = 11.
```

### Example 2

```text
Input: nums = [1,2,3]
Output: -1
```

### Example 3

```text
Input: nums = [2,1,-1]
Output: 0
Explanation:
The left side is empty, and the right side sums to 0.
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-1000 <= nums[i] <= 1000`

## Approach

TR: Once toplam dizi toplami hesaplanir. Sonra soldan saga ilerlerken `leftSum` tutulur. `rightSum = totalSum - leftSum - nums[i]` esitligi kontrol edilir.

EN: First compute the total sum. Then scan left to right while maintaining `leftSum`. For each index, compute `rightSum = totalSum - leftSum - nums[i]` and compare.

## Solution

- [solution.c](solution.c)
