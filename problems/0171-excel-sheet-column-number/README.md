# #0171 - Excel Sheet Column Number

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Math, String
- Companies: Not tracked in this repo
- Hint: Treat the title like a base-26 number where `A` is 1.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/excel-sheet-column-number/

## Problem Statement

TR: Excel sutun basligi verilir. `A -> 1`, `B -> 2`, ..., `Z -> 26` mantigiyla bu basligin sayisal karsiligini dondur.

EN: Given an Excel column title, return its numeric value using `A -> 1`, `B -> 2`, ..., `Z -> 26`.

## Starter Code (C)

```c
int titleToNumber(char* columnTitle) {

}
```

## Parameters

- `columnTitle`: Excel-style uppercase column title.

## Return

TR: Sutun basliginin sayisal degeri.

EN: Return the numeric value of the column title.

## Examples

### Example 1

```text
Input: columnTitle = "A"
Output: 1
```

### Example 2

```text
Input: columnTitle = "AB"
Output: 28
```

### Example 3

```text
Input: columnTitle = "ZY"
Output: 701
```

## Constraints

- `1 <= columnTitle.length <= 7`
- `columnTitle` contains only uppercase English letters.
- The result fits in a 32-bit signed integer.

## Approach

TR: Her karakterde sonucu once `26` ile carp, sonra karakterin `A=1` olacak sekilde degerini ekle.

EN: For each character, multiply the current result by `26`, then add the character value where `A=1`.

## Solution

- [solution.c](solution.c)
