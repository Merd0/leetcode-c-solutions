# #0693 - Binary Number with Alternating Bits

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: Adjacent bits must never be equal.
- Solved date: 2026-05-31
- Source: https://leetcode.com/problems/binary-number-with-alternating-bits/

## Problem Statement

TR: Pozitif bir integer veriliyor. Binary gosterimindeki her bit komsu bitiyle
farkliysa `true`, degilse `false` dondur.

EN: Given a positive integer, return `true` if its binary representation has
alternating bits, meaning every adjacent pair of bits is different.

## Starter Code (C)

```c
bool hasAlternatingBits(int n) {

}
```

## Parameters / Return

- `n`: input positive integer.
- Returns whether the binary bits alternate.

## Examples

```text
Input: n = 5
Output: true
Explanation: 5 is 101 in binary.
```

```text
Input: n = 7
Output: false
Explanation: 7 is 111 in binary.
```

```text
Input: n = 11
Output: false
Explanation: 11 is 1011, where the last two bits are both 1.
```

## Constraints

- `1 <= n <= 2^31 - 1`

## Approach

Read the least significant bit, then shift right and compare each next bit with
the previous one. If two adjacent bits are equal, the alternating pattern is
broken.

This reinforces the idea that bitwise problems often only need a tiny amount of
state.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
