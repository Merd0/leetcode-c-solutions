# #0977 - Squares of a Sorted Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Two Pointers, Sorting
- Hint: Squaring can change the order because negative numbers become positive.
- Solved date: 2026-05-22
- Source: https://leetcode.com/problems/squares-of-a-sorted-array/

## Problem Statement

TR: Azalan olmayan sirada sirali bir tamsayi dizisi verilir. Her elemanin karesini alip sonucu yine sirali sekilde dondur.

EN: Given a non-decreasing integer array, square every element and return the squares in non-decreasing order.

## Starter Code (C)

```c
int* sortedSquares(int* nums, int numsSize, int* returnSize) {

}
```

## Parameters

- `nums`: Sorted input array.
- `numsSize`: Number of elements in `nums`.
- `returnSize`: Output array size written by the function.

## Return

TR: Kareleri alinmis ve siralanmis yeni dizi.

EN: Return a newly allocated array containing sorted squares.

## Examples

### Example 1

```text
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
```

### Example 2

```text
Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` is sorted in non-decreasing order.

## Approach

TR: Once tum elemanlarin karesini yeni diziye yaz. Negatif sayilar sirayi bozabilecegi icin sonucu `qsort` ile sirala.

EN: First write every square into a new array. Since negative numbers can break the order after squaring, sort the result with `qsort`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
