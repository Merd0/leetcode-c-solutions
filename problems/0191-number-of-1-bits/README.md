# #0191 - Number of 1 Bits

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: Repeatedly inspect the least significant bit.
- Solved date: 2026-05-29
- Source: LeetCode #191

## Problem Statement

TR: Bir integer veriliyor. Binary gosteriminde kac tane `1` biti oldugunu bul.

EN: Given an integer, return how many `1` bits exist in its binary representation.

## Starter Code (C)

```c
int hammingWeight(uint32_t n) {

}
```

## Parameters / Return

- `n`: unsigned 32-bit input integer.
- Returns the number of set bits.

## Examples

```text
Input: n = 11
Binary: 1011
Output: 3
```

```text
Input: n = 128
Binary: 10000000
Output: 1
```

## Constraints

- The input is treated as a 32-bit unsigned integer bit pattern.

## Approach

Check the last bit with `n & 1`. If it is `1`, increase the counter. Then shift
the number right by one bit and repeat until no set bits remain.
