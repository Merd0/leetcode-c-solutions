# #0012 - Integer to Roman

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Hash Table, Math, String
- Companies: Not tracked in this repo
- Hint: Use Roman symbols from largest value to smallest value.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/integer-to-roman/

## Problem Statement

TR: `1` ile `3999` arasinda bir tamsayi verilir. Bu sayinin Roman rakami karsiligini string olarak dondur.

EN: Given an integer between `1` and `3999`, return its Roman numeral representation as a string.

## Starter Code (C)

```c
char* intToRoman(int num) {

}
```

## Parameters

- `num`: Integer to convert.

## Return

TR: Sayinin Roman rakami string karsiligi.

EN: Return the Roman numeral representation of the number.

## Examples

### Example 1

```text
Input: num = 3749
Output: "MMMDCCXLIX"
```

### Example 2

```text
Input: num = 58
Output: "LVIII"
Explanation:
L = 50, V = 5, III = 3.
```

### Example 3

```text
Input: num = 1994
Output: "MCMXCIV"
```

## Constraints

- `1 <= num <= 3999`

## Approach

TR: Degerleri buyukten kucuge sirala. Sayidan sigan en buyuk Roman degerini dus ve sembolunu sonuca ekle. Sayi sifira yaklasana kadar devam et.

EN: Store values from largest to smallest. Repeatedly subtract the largest value that fits and append its symbol until the number is fully converted.

## Solution

- [solution.c](solution.c)
