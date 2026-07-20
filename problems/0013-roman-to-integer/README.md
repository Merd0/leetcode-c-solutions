# #0013 - Roman to Integer

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Hash Table, Math, String
- Hint: If a smaller Roman value appears before a larger one, subtract it.
- Solved date: 2026-05-22
- Source: https://leetcode.com/problems/roman-to-integer/

## Problem Statement

TR: Roman rakami string olarak verilir. Bu ifadeyi tamsayi degerine cevir.

EN: Given a Roman numeral as a string, convert it to its integer value.

## Starter Code (C)

```c
int romanToInt(char* s) {

}
```

## Parameters

- `s`: Roman numeral string.

## Return

TR: Roman rakaminin tamsayi karsiligi.

EN: Return the integer value of the Roman numeral.

## Examples

### Example 1

```text
Input: s = "III"
Output: 3
```

### Example 2

```text
Input: s = "LVIII"
Output: 58
Explanation:
L = 50, V = 5, III = 3.
```

### Example 3

```text
Input: s = "MCMXCIV"
Output: 1994
Explanation:
CM, XC, and IV are subtractive pairs.
```

## Constraints

- `1 <= s.length <= 15`
- `s` contains only `I`, `V`, `X`, `L`, `C`, `D`, `M`.
- `s` represents a number in the range `[1, 3999]`.

## Approach

TR: Her Roman karakterinin degerini bul. Mevcut deger bir sonraki degerden kucukse sonucu azalt, degilse sonuca ekle.

EN: Convert each Roman character to a value. If the current value is smaller than the next value, subtract it; otherwise add it.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
