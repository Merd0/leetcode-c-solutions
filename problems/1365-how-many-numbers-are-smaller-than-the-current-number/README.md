# #1365 - How Many Numbers Are Smaller Than the Current Number

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
- Topics: Array, Counting, Prefix Sum

## Problem

TR: Her eleman icin dizide ondan kucuk kac eleman oldugunu hesapla.

EN: For each element, count how many numbers in the array are smaller than it.

## Starter Code (C)

```c
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output length of the returned array.

## Return

TR: Her indeks icin kucuk eleman sayisini iceren yeni dizi.

EN: A new array where each position stores the count of smaller values.

## Example

```text
Input: nums = [8,1,2,2,3]
Output: [4,0,1,1,3]
```

## Approach

TR: Deger araligi kucuk oldugu icin frekans say. Prefix toplam ile her degerden kucuk kac sayi oldugunu bul.

EN: Count frequencies because the value range is small. Prefix counts tell how many values are smaller.

## Solution

- [solution.c](solution.c)
