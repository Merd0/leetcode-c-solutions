# #0201 - Bitwise AND of Numbers Range

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Bit Manipulation
- Hint: The answer is the common binary prefix of `left` and `right`.
- Solved date: 2026-05-31
- Source: https://leetcode.com/problems/bitwise-and-of-numbers-range/

## Problem Statement

TR: `left` ve `right` ile verilen `[left, right]` araligindaki tum sayilarin
bitwise AND sonucunu dondur.

EN: Given two integers `left` and `right`, return the bitwise AND of every
number in the inclusive range `[left, right]`.

## Starter Code (C)

```c
int rangeBitwiseAnd(int left, int right) {

}
```

## Parameters / Return

- `left`: start of the inclusive range.
- `right`: end of the inclusive range.
- Returns the bitwise AND of all numbers in the range.

## Examples

```text
Input: left = 5, right = 7
Output: 4
Explanation: 5 & 6 & 7 = 4.
```

```text
Input: left = 0, right = 0
Output: 0
```

```text
Input: left = 1, right = 2147483647
Output: 0
```

## Constraints

- `0 <= left <= right <= 2^31 - 1`

## Approach

Across a range, lower bits often change between `0` and `1`, so they disappear
in the final AND. The only part that survives is the common prefix shared by
`left` and `right`.

Shift both numbers right until they become equal, count how many shifts were
needed, then shift the common prefix back left.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
