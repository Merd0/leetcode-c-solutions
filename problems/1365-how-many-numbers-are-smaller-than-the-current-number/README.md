# #1365 - How Many Numbers Are Smaller Than the Current Number

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Counting, Prefix Sum
- Companies: Not tracked in this repo
- Hint: Brute force is easy to understand; counting frequency is the faster follow-up.
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/

## Problem Statement

TR: `nums` dizisindeki her `nums[i]` icin, dizide ondan kucuk kac sayi oldugunu bul. Her indeks icin bulunan sayilari ayni sirada yeni bir dizi olarak dondur.

EN: Given the array `nums`, for each `nums[i]`, count how many numbers in the array are smaller than it. Return all counts in an array.

## Starter Code (C)

```c
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Input integer array.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output parameter for the returned array length.

## Return

TR: Her indeks icin kucuk eleman sayisini iceren heap uzerinde ayrilmis dizi.

EN: Return a heap-allocated array where each position stores the count of smaller values.

## Examples

### Example 1

```text
Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
Explanation:
8 has four smaller values: 1, 2, 2, and 3.
1 has no smaller value.
Each 2 has one smaller value: 1.
3 has three smaller values: 1, 2, and 2.
```

### Example 2

```text
Input: nums = [6,5,4,8]
Output: [2,1,0,3]
Explanation:
6 has two smaller values, 5 has one, 4 has none, and 8 has three.
```

### Example 3

```text
Input: nums = [7,7,7,7]
Output: [0,0,0,0]
Explanation:
All values are equal, so no value is smaller than another.
```

## Constraints

- `2 <= nums.length <= 500`
- `0 <= nums[i] <= 100`

## Approach

TR: Aktif cozum brute force: her sayi icin diziyi tekrar gezip ondan kucuk kac eleman oldugunu say. Alternatif olarak, deger araligi kucuk oldugu icin frekans + prefix toplam ile daha hizli cozum yazilabilir.

EN: The active solution is brute force: for each value, scan the array again and count smaller values. As a faster follow-up, the small value range allows a frequency + prefix count solution.

## Solution

- [solution.c](solution.c)
