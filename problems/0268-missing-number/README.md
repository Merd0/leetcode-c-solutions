# #0268 - Missing Number

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/missing-number/
- Topics: Array, Math, XOR

## Problem

TR: `0..n` araligindan n adet farkli sayi verilir. Bu aralikta eksik olan tek sayiyi bul.

EN: Given `n` distinct numbers from the range `0..n`, find the one missing number.

## Starter Code (C)

```c
int missingNumber(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Array containing numbers from `0..n` with one missing.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Eksik olan sayi.

EN: The missing number.

## Example

```text
Input: nums = [3,0,1]
Output: 2
```

## Approach

TR: `0..n` indekslerini ve dizi degerlerini XOR'la. Eslesenler silinir, eksik sayi kalir.

EN: XOR all range values and all array values. Matching values cancel and the missing value remains.

## Solution

- [solution.c](solution.c)
