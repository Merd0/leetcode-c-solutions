# #0065 - Valid Number

## LeetCode Style Info

- Status: Solved
- Difficulty: Hard
- Topics: String
- Hint: Track whether digits, a decimal point, and an exponent have appeared.
- Solved date: 2026-06-03
- Source: LeetCode #65

## Problem Statement

TR: Bir string veriliyor. Bu string gecerli bir decimal veya integer sayi
formatinda mi kontrol et. `e` veya `E` ile exponent kullanilabilir.

EN: Given a string, determine whether it represents a valid number. The format
may include a decimal point and an exponent using `e` or `E`.

## Starter Code (C)

```c
bool isNumber(char* s) {

}
```

## Parameters / Return

- `s`: input string.
- Returns whether `s` is a valid number.

## Examples

```text
Input: s = "0"
Output: true
```

```text
Input: s = "e"
Output: false
```

```text
Input: s = "."
Output: false
```

```text
Input: s = "2e10"
Output: true
```

## Constraints

- `1 <= s.length <= 20`
- `s` contains only English letters, digits, `+`, `-`, and `.`.

## Approach

Scan once and maintain three pieces of state:

- `digitSeen`: at least one digit has been seen in the current number part.
- `dotSeen`: a decimal point has already appeared.
- `eSeen`: an exponent marker has already appeared.

After `e` or `E`, reset `digitSeen` because the exponent must contain at least
one digit. A sign is valid only at the beginning or immediately after `e`/`E`.
