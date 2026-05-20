# #0027 - Remove Element

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/remove-element/
- Topics: Array, Two Pointers, In-place

## Problem

TR: Dizide `val` degerine esit olan elemanlari yerinde kaldir. Kalan elemanlar dizinin basinda duracak sekilde yeni uzunlugu dondur.

EN: Remove all values equal to `val` in-place and return the new length of the remaining prefix.

## Starter Code (C)

```c
int removeElement(int* nums, int numsSize, int val) {

}
```

## Parameters

- `nums`: Input array, modified in-place.
- `numsSize`: Number of elements in `nums`.
- `val`: Value to remove.

## Return

TR: Kalan eleman sayisi.

EN: The number of elements not equal to `val`.

## Example

```text
Input: nums = [3,2,2,3], val = 3
Output: 2
After call: first 2 values are [2,2]
```

## Approach

TR: `val` olmayan her elemani soldan baslayarak tekrar yaz. `write` kac eleman kaldigini da verir.

EN: Rewrite every value that is not `val` from the left side. The `write` index becomes the answer.

## Solution

- [solution.c](solution.c)
