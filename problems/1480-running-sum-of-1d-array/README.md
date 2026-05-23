# #1480 - Running Sum of 1d Array

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Prefix Sum
- Companies: Not tracked in this repo
- Hint: Keep a cumulative sum while scanning from left to right.
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/running-sum-of-1d-array/

## Problem Statement

TR: `nums` dizisi verilir. Her indeks icin `answer[i]`, `nums[0]` ile `nums[i]` arasindaki elemanlarin toplami olur.

EN: Given `nums`, build an array where `answer[i]` is the sum from `nums[0]` through `nums[i]`.

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

TR: Her pozisyonda o ana kadarki toplami tutan yeni dizi.

EN: Return a new array where each position stores the cumulative sum so far.

## Examples

### Example 1

```text
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
```

### Example 2

```text
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
```

### Example 3

```text
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
```

## Constraints

- `1 <= nums.length <= 1000`
- `-10^6 <= nums[i] <= 10^6`

## Approach

TR: `sum` degiskeni ile soldan saga ilerle. Her elemani `sum` icine ekle ve o anki toplam degerini sonuc dizisine yaz.

EN: Scan left to right with a `sum` variable. Add each value into `sum` and write the current cumulative sum into the result array.

## Solution

- [solution.c](solution.c)
