# #0476 - Number Complement

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: Build a mask containing `1`s only over the significant bits.
- Solved date: 2026-05-29
- Source: https://leetcode.com/problems/number-complement/

## Problem Statement

TR: Pozitif bir integer veriliyor. Binary gosterimindeki anlamli bitleri tersine
cevir ve olusan sayiyi dondur.

EN: Given a positive integer, flip all significant bits in its binary
representation and return the result.

## Starter Code (C)

```c
int findComplement(int num) {

}
```

## Parameters / Return

- `num`: positive input integer.
- Returns the complement over the significant bit width of `num`.

## Examples

```text
Input: num = 5
Binary: 101
Output: 2
Explanation: 101 becomes 010.
```

```text
Input: num = 1
Binary: 1
Output: 0
```

## Constraints

- `1 <= num < 2^31`

## Approach

First count how many meaningful binary digits `num` has. Then build a mask with
that many `1` bits.

Example:

```text
num  = 101
mask = 111
num ^ mask = 010
```

XOR with `1` flips a bit, so `num ^ mask` flips only the significant part.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
