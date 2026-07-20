# #0415 - Add Strings

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Math, String, Simulation
- Hint: Add digits from right to left, just like manual addition.
- Solved date: 2026-05-22
- Source: https://leetcode.com/problems/add-strings/

## Problem Statement

TR: Iki negatif olmayan sayi string olarak verilir. Bu sayilari tamsayi tipine cevirmeden topla ve sonucu string olarak dondur.

EN: Given two non-negative integers as strings, add them without converting the whole strings to integer types and return the sum as a string.

## Starter Code (C)

```c
char* addStrings(char* num1, char* num2) {

}
```

## Parameters

- `num1`: First non-negative number as a string.
- `num2`: Second non-negative number as a string.

## Return

TR: Toplam sonucunu string olarak dondur.

EN: Return the sum as a string.

## Examples

### Example 1

```text
Input: num1 = "11", num2 = "123"
Output: "134"
```

### Example 2

```text
Input: num1 = "456", num2 = "77"
Output: "533"
```

### Example 3

```text
Input: num1 = "0", num2 = "0"
Output: "0"
```

## Constraints

- `1 <= num1.length, num2.length <= 10^4`
- `num1` and `num2` contain only digits.
- `num1` and `num2` do not contain leading zeroes except the number `0`.

## Approach

TR: Sagdan sola dogru digitleri topla ve carry tasima mantigini uygula. Sonuc ters sirada olustugu icin en sonda stringi ters cevir.

EN: Add digits from right to left while carrying. The result is built in reverse order, so reverse it before returning.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
