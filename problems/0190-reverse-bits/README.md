# #0190 - Reverse Bits

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Divide and Conquer, Bit Manipulation
- Hint: Read the current least significant bit and append it to the result.
- Solved date: 2026-05-29
- Source: https://leetcode.com/problems/reverse-bits/

## Problem Statement

TR: 32-bit bir integer'in bitlerini ters cevir. En sagdaki bit en sola, en
soldaki bit en saga gelmelidir.

EN: Reverse the bits of a 32-bit integer.

## Starter Code (C)

```c
uint32_t reverseBits(uint32_t n) {

}
```

## Parameters / Return

- `n`: unsigned 32-bit input integer.
- Returns the value formed by reversing all 32 bits.

## Examples

```text
Input: 00000010100101000001111010011100
Output: 00111001011110000010100101000000
```

```text
Input: 11111111111111111111111111111101
Output: 10111111111111111111111111111111
```

## Constraints

- Input is treated as an unsigned 32-bit bit pattern.

## Approach

Loop exactly 32 times. In each step:

1. Read the current last bit with `n & 1`.
2. Shift the result left by one bit.
3. Append the extracted bit with `| bit`.
4. Shift `n` right by one bit.

This gradually builds the reversed bit pattern from left to right.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
