# #1446 - Consecutive Characters

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String
- Hint: Track the current run and the longest run seen so far.
- Solved date: 2026-06-15
- Source: https://leetcode.com/problems/consecutive-characters/
- Note: Daily practice question

## Problem Statement

TR: Bir string'in power degeri, yalnizca ayni karakterden olusan en uzun
kesintisiz substring'in uzunlugudur. Verilen string'in power degerini dondur.

EN: The power of a string is the length of its longest non-empty contiguous
substring containing only one repeated character. Return the power of `s`.

## Starter Code (C)

```c
int maxPower(char* s) {

}
```

## Parameters / Return

- `s`: Non-empty lowercase string.
- Returns the longest consecutive run of one character.

## Examples

```text
Input: s = "leetcode"
Output: 2
Explanation: "ee" is the longest consecutive run.
```

```text
Input: s = "abbcccddddeeeeedcba"
Output: 5
Explanation: "eeeee" has length 5.
```

## Constraints

- `1 <= s.length <= 500`
- `s` contains lowercase English letters

## Approach

The first character starts a run of length `1`, so initialize both counters to
`1`.

Starting from the second character:

- If it equals the previous character, increase the current run.
- Otherwise, start a new run with length `1`.
- Update the maximum whenever the current run becomes longer.

Only adjacent characters matter, so the string is processed in one pass.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
