# #0043 - Multiply Strings

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Math, String, Simulation
- Hint: Simulate grade-school multiplication with a digit array.
- Solved date: 2026-06-03
- Source: https://leetcode.com/problems/multiply-strings/

## Problem Statement

TR: Iki non-negative integer string olarak veriliyor. Built-in buyuk integer
donusumu kullanmadan carpim sonucunu string olarak dondur.

EN: Given two non-negative integers represented as strings, return their product
as a string without converting the full strings into built-in integer types.

## Starter Code (C)

```c
char* multiply(char* num1, char* num2) {

}
```

## Parameters / Return

- `num1`: first non-negative integer string.
- `num2`: second non-negative integer string.
- Returns a malloced product string.

## Examples

```text
Input: num1 = "2", num2 = "3"
Output: "6"
```

```text
Input: num1 = "123", num2 = "456"
Output: "56088"
```

## Constraints

- `1 <= num1.length, num2.length <= 200`
- `num1` and `num2` contain only digits.
- Neither number contains leading zeroes unless it is exactly `"0"`.

## Approach

Use an integer buffer of length `len1 + len2`. For digits at positions `i` and
`j`, their product contributes to:

```text
p1 = i + j
p2 = i + j + 1
```

Store the current digit at `p2` and carry into `p1`. After all multiplications,
skip leading zeroes and convert the digit buffer to a string.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
