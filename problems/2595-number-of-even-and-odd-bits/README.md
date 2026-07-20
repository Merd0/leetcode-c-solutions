# #2595 - Number of Even and Odd Bits

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: Track the current bit index while shifting right.
- Solved date: 2026-05-31
- Source: https://leetcode.com/problems/number-of-even-and-odd-bits/

## Problem Statement

TR: Pozitif bir integer `n` veriliyor. Binary gosterimde even indexlerdeki `1`
bit sayisini ve odd indexlerdeki `1` bit sayisini dondur.

EN: Given a positive integer `n`, return an array with two values: the number of
`1` bits at even positions and the number of `1` bits at odd positions in the
binary representation of `n`.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {

}
```

## Parameters / Return

- `n`: input positive integer.
- `returnSize`: output size of the returned array.
- Returns a malloced array `[evenCount, oddCount]`.

## Examples

```text
Input: n = 17
Output: [2,0]
Explanation: 17 is 10001, so positions 0 and 4 are set.
```

```text
Input: n = 2
Output: [0,1]
Explanation: 2 is 10, so only odd position 1 is set.
```

## Constraints

- `1 <= n <= 1000`

## Approach

Scan from the least significant bit. `bas` stores the current bit position. If
the current bit is `1`, increment `evenOdd[0]` for even positions or
`evenOdd[1]` for odd positions.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
