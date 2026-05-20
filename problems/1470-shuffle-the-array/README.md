# #1470 - Shuffle the Array

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/shuffle-the-array/
- Topics: Array, Simulation

## Problem

TR: Dizi `[x1, x2, ..., xn, y1, y2, ..., yn]` formatindadir. Bunu `[x1, y1, x2, y2, ...]` formatina cevir.

EN: The array is shaped like `[x1, x2, ..., xn, y1, y2, ..., yn]`. Return it as `[x1, y1, x2, y2, ...]`.

## Starter Code (C)

```c
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {

}
```

## Parameters

- `nums`: Input array containing x half followed by y half.
- `numsSize`: Number of elements in `nums`.
- `n`: Half length.
- `returnSize`: Output length of the returned array.

## Return

TR: Karistirilmis yeni dizi.

EN: A new array with x and y values interleaved.

## Example

```text
Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7]
```

## Approach

TR: Ilk yari ve ikinci yariyi ayni anda oku; sirayla `x`, sonra `y` yaz.

EN: Read both halves together; write one `x`, then one `y`.

## Solution

- [solution.c](solution.c)
