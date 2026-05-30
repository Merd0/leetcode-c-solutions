# #0008 - String to Integer (atoi)

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: String
- Hint: Parse in phases: spaces, sign, digits, clamp.
- Solved date: 2026-05-30
- Source: LeetCode #8

## Problem Statement

TR: Bir string veriliyor. Bastaki bosluklari gec, opsiyonel isareti oku, sonra
rakamlar bitene kadar sayiyi olustur. Sonuc 32-bit signed integer araligini
asarsa sinir degerine clamp et.

EN: Given a string, convert its leading numeric part to a 32-bit signed integer.
Skip leading spaces, handle an optional sign, read digits until the first
non-digit, and clamp overflow to the 32-bit signed integer range.

## Starter Code (C)

```c
int myAtoi(char* s) {

}
```

## Parameters / Return

- `s`: input string.
- Returns the parsed integer after sign and overflow handling.

## Examples

```text
Input: s = "42"
Output: 42
```

```text
Input: s = "   -42"
Output: -42
```

```text
Input: s = "4193 with words"
Output: 4193
```

```text
Input: s = "words and 987"
Output: 0
```

## Constraints

- `0 <= s.length <= 200`
- `s` may contain English letters, digits, spaces, `+`, `-`, and `.`.

## Approach

Use a parser-like flow:

1. Skip leading spaces.
2. Read one optional sign.
3. Read digits while they continue.
4. Before `value = value * 10 + digit`, check whether the next step would pass
   the allowed limit.

This avoids relying on overflowing integer behavior.
