# #0868 - Binary Gap

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: Track the position of the previous `1` bit.
- Solved date: 2026-05-31
- Source: https://leetcode.com/problems/binary-gap/

## Problem Statement

TR: Pozitif bir integer veriliyor. Binary gosterimde iki `1` biti arasindaki en
buyuk mesafeyi dondur. Boyle bir cift yoksa `0` dondur.

EN: Given a positive integer, return the maximum distance between two adjacent
`1` bits in its binary representation. If there are fewer than two `1` bits,
return `0`.

## Starter Code (C)

```c
int binaryGap(int n) {

}
```

## Parameters / Return

- `n`: input positive integer.
- Returns the largest distance between consecutive `1` bits.

## Examples

```text
Input: n = 22
Output: 2
Explanation: 22 is 10110 in binary. Adjacent 1-bit distances are 2 and 1.
```

```text
Input: n = 8
Output: 0
Explanation: 8 is 1000, so there is only one 1 bit.
```

## Constraints

- `1 <= n <= 10^9`

## Approach

Scan bits from right to left. `pos` stores the current bit position, and
`lastOne` stores the position of the previous `1` bit. When another `1` appears,
compute the distance and update `maxGap`.

This is a small state-machine style bit scan.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
