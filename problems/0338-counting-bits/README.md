# #0338 - Counting Bits

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Dynamic Programming, Bit Manipulation
- Hint: Count set bits for every number from `0` to `n`.
- Solved date: 2026-05-31
- Source: https://leetcode.com/problems/counting-bits/

## Problem Statement

TR: `n` veriliyor. `0` ile `n` arasindaki her sayinin binary gosteriminde kac
tane `1` biti oldugunu dizi olarak dondur.

EN: Given `n`, return an array where each index `i` stores the number of `1`
bits in the binary representation of `i`.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {

}
```

## Parameters / Return

- `n`: upper bound of the range.
- `returnSize`: output size of the returned array.
- Returns a malloced array of size `n + 1`.

## Examples

```text
Input: n = 2
Output: [0,1,1]
Explanation: 0 -> 0, 1 -> 1, 2 -> 10.
```

```text
Input: n = 5
Output: [0,1,1,2,1,2]
```

## Constraints

- `0 <= n <= 10^5`

## Approach

This version keeps the logic direct: for every number `i`, copy it into `temp`
and count how many times the last bit is `1`.

```c
temp & 1
```

checks the current least significant bit, and:

```c
temp = temp >> 1;
```

moves to the next bit. A faster DP version exists, but this brute-force bit
count is a good first implementation for learning shifts and bit tests.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
