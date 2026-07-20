# #0461 - Hamming Distance

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: XOR marks the bit positions where two numbers differ.
- Solved date: 2026-05-29
- Source: https://leetcode.com/problems/hamming-distance/

## Problem Statement

TR: Iki integer veriliyor. Binary gosterimlerinde kac bit pozisyonunun farkli
oldugunu bul.

EN: Given two integers, return how many bit positions are different between
their binary representations.

## Starter Code (C)

```c
int hammingDistance(int x, int y) {

}
```

## Parameters / Return

- `x`: first integer.
- `y`: second integer.
- Returns the Hamming distance between `x` and `y`.

## Examples

```text
Input: x = 1, y = 4
Binary: 001 and 100
Output: 2
Explanation: The first and third bit positions differ.
```

```text
Input: x = 3, y = 1
Binary: 011 and 001
Output: 1
```

## Constraints

- `0 <= x, y <= 2^31 - 1`

## Approach

First calculate `diff = x ^ y`.

XOR gives `1` only where the two input bits are different:

```text
x    = 0001
y    = 0100
diff = 0101
```

Now the answer is the number of `1` bits in `diff`.

This solution uses Brian Kernighan's trick:

```c
diff = diff & (diff - 1);
```

This operation removes the lowest set bit from `diff` in one step. So instead
of checking every bit position, the loop runs once per `1` bit.

Example:

```text
diff = 1100

1st loop:
diff        = 1100
diff - 1    = 1011
diff & ...  = 1000
count = 1

2nd loop:
diff        = 1000
diff - 1    = 0111
diff & ...  = 0000
count = 2
```

So `1100` contains two `1` bits.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
