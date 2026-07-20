# #0405 - Convert a Number to Hexadecimal

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Math, Bit Manipulation
- Hint: One hexadecimal digit represents exactly 4 bits.
- Solved date: 2026-05-29
- Source: https://leetcode.com/problems/convert-a-number-to-hexadecimal/

## Problem Statement

TR: Bir integer veriliyor. Bu sayiyi hexadecimal string olarak dondur. Harfler
kucuk harf olmalidir.

EN: Given an integer, return its hexadecimal representation as a lowercase
string.

## Starter Code (C)

```c
char* toHex(int num) {

}
```

## Parameters / Return

- `num`: input integer.
- Returns a malloced lowercase hexadecimal string.

## Examples

```text
Input: num = 26
Output: "1a"
Explanation: 26 is 0x1a.
```

```text
Input: num = -1
Output: "ffffffff"
Explanation: Negative values are represented with 32-bit two's complement.
```

## Constraints

- `-2^31 <= num <= 2^31 - 1`

## Approach

Hexadecimal works in 4-bit groups called nibbles.

Use:

```c
digit = n & 0xF;
```

to read the last 4 bits, map that value to `"0123456789abcdef"`, then shift
right by 4 bits. This produces the hex string backward, so reverse the string at
the end.

Casting `num` to `unsigned int` is important for negative values because
LeetCode expects the 32-bit two's-complement representation.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
