# #0007 - Reverse Integer

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Math
- Hint: Check overflow before multiplying the reversed value by 10.
- Solved date: 2026-05-30
- Source: https://leetcode.com/problems/reverse-integer/

## Problem Statement

TR: 32-bit signed integer `x` veriliyor. Rakamlarini ters cevir. Ters cevrilmis
deger 32-bit signed integer araliginin disina cikarsa `0` dondur.

EN: Given a signed 32-bit integer `x`, reverse its digits. If the reversed value
goes outside the signed 32-bit integer range, return `0`.

## Starter Code (C)

```c
int reverse(int x) {

}
```

## Parameters / Return

- `x`: input signed integer.
- Returns the reversed integer, or `0` if the result would overflow.

## Examples

```text
Input: x = 123
Output: 321
```

```text
Input: x = -123
Output: -321
```

```text
Input: x = 120
Output: 21
```

## Constraints

- `-2^31 <= x <= 2^31 - 1`

## Approach

Repeatedly take the last digit with `% 10`, then remove it from `x` with `/ 10`.
Before doing:

```c
reverseX = reverseX * 10 + digit;
```

check whether `reverseX` is already close to `INT_MAX` or `INT_MIN`. This keeps
the calculation inside the 32-bit integer range.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
