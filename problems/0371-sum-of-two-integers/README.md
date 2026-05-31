# #0371 - Sum of Two Integers

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Math, Bit Manipulation
- Hint: XOR gives the sum without carry; AND shifted left gives the carry.
- Solved date: 2026-05-31
- Source: LeetCode #371

## Problem Statement

TR: Iki integer `a` ve `b` veriliyor. `+` ve `-` operatorlerini kullanmadan
toplamlarini dondur.

EN: Given two integers `a` and `b`, return their sum without using the `+` or
`-` operators.

## Starter Code (C)

```c
int getSum(int a, int b) {

}
```

## Parameters / Return

- `a`: first integer.
- `b`: second integer.
- Returns `a + b` using bit operations.

## Examples

```text
Input: a = 1, b = 2
Output: 3
```

```text
Input: a = 2, b = 3
Output: 5
```

## Constraints

- `-1000 <= a, b <= 1000`

## Approach

Use the same idea as binary addition:

- `a ^ b`: sum without carry.
- `a & b`: positions where carry is produced.
- `(a & b) << 1`: carry moved into the next bit position.

Repeat until there is no carry left. The solution stores carry through
`unsigned int` so the left shift is handled as a bit operation.
