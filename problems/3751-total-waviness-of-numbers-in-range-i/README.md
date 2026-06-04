# #3751 - Total Waviness of Numbers in Range I

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Math, Enumeration, Digits
- Hint: Check only middle digits; first and last digits can never be waves.
- Solved date: 2026-06-04
- Source: https://leetcode.com/problems/total-waviness-of-numbers-in-range-i/

## Problem Statement

TR: `num1` ve `num2` arasindaki tum sayilar icin waviness degerlerini hesapla.
Bir rakam, iki komsusundan buyukse peak; iki komsusundan kucukse valley olur.
Ilk ve son rakam peak/valley olamaz. Tum araligin toplam waviness degerini
dondur.

EN: Given an inclusive range `[num1, num2]`, compute the waviness of every
number and return the total. A middle digit is a peak if it is greater than both
neighbors, and a valley if it is smaller than both neighbors.

## Starter Code (C)

```c
int totalWaviness(int num1, int num2) {

}
```

## Parameters / Return

- `num1`: Start of the inclusive range.
- `num2`: End of the inclusive range.
- Returns the sum of all peak/valley counts in the range.

## Examples

```text
Input: num1 = 120, num2 = 130
Output: 3
Explanation: 120, 121, and 130 each contribute one peak.
```

```text
Input: num1 = 198, num2 = 202
Output: 3
Explanation: 198 has a peak, while 201 and 202 have a valley.
```

```text
Input: num1 = 4848, num2 = 4848
Output: 2
Explanation: In 4848, digit 8 is a peak and digit 4 is a valley.
```

## Constraints

- `1 <= num1 <= num2 <= 10^5`

## Approach

For each number, split it into digits and scan only positions with both left and
right neighbors. A digit contributes one waviness point if it is strictly above
both neighbors or strictly below both neighbors.

The solution then sums this value for every number in the inclusive range. Since
the constraint is small, direct enumeration is accepted and easy to reason about.

## Solution

- [solution.c](solution.c)
