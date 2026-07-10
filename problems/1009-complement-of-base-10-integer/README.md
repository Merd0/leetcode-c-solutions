# #1009 - Complement of Base 10 Integer

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: XOR with `1` flips a bit, so build a mask made only of the used bits.
- Solved date: 2026-07-11
- Source: https://leetcode.com/problems/complement-of-base-10-integer/

## Problem Statement

TR: Bir tamsayi `n` veriliyor. `n` sayisinin binary gosteriminde kullanilan
bitleri ters cevir ve olusan sayiyi dondur.

EN: Given an integer `n`, return its bitwise complement. Only the bits used by
the binary representation of `n` are flipped.

## Starter Code (C)

```c
int bitwiseComplement(int n) {

}
```

## Parameters / Return

- `n`: Input integer.
- Returns the decimal value after flipping only the used binary bits.

## Examples

```text
Input: n = 5
Output: 2
```

Explanation:

```text
n    = 101
mask = 111
-------------
n^mask = 010 = 2
```

```text
Input: n = 10
Output: 5
```

Explanation:

```text
n    = 1010
mask = 1111
-------------
n^mask = 0101 = 5
```

```text
Input: n = 0
Output: 1
```

`0` has complement `1` for this problem.

## Constraints

- `0 <= n < 10^9`

## Approach

The key XOR rule:

```text
0 ^ 1 = 1
1 ^ 1 = 0
```

So XOR with `1` flips a bit.

But we must not flip infinite leading zeroes. We only flip the bits that exist
in the binary representation of `n`. That means we first build an all-ones mask
that covers `n`.

Example mask growth:

```text
mask = 1
mask = 11
mask = 111
mask = 1111
```

In C:

```c
mask = (mask << 1) | 1;
```

This means:

- `mask << 1`: shift left and create space at the right.
- `| 1`: set the new lowest bit to `1`.

When the mask is large enough to cover `n`, the answer is:

```c
n ^ mask
```

Embedded-C connection: this is the same bitmask mindset as building a register
mask and toggling only selected flag bits.

## Complexity

- Time: `O(log n)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)
