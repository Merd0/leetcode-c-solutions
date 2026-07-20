# #1758 - Minimum Changes To Make Alternating Binary String

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String, Pattern Matching
- Hint: Compare against both possible alternating patterns.
- Solved date: 2026-07-04
- Source: https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/
- Note: Binary pattern / expected-state practice

## Problem Statement

TR: Binary string `s` veriliyor. String'i `010101...` veya `101010...`
patternlerinden birine cevirmek icin minimum kac karakter degismeli?

EN: Given a binary string `s`, return the minimum number of character changes
needed to make it alternating.

## Starter Code (C)

```c
int minOperations(char* s) {

}
```

## Parameters / Return

- `s`: Binary input string.
- Returns: Minimum number of flips needed.

## Examples

```text
Input:  s = "0100"
Output: 1

Change the last character to get "0101".
```

```text
Input:  s = "10"
Output: 0
```

```text
Input:  s = "1111"
Output: 2
```

## Constraints

- `1 <= s.length <= 10^4`
- `s[i]` is either `0` or `1`

## Approach

There are only two valid alternating targets:

```text
010101...
101010...
```

Scan the string once and count mismatches against both patterns. The answer is
the smaller mismatch count.

For even indices:

```text
0101 pattern expects '0'
1010 pattern expects '1'
```

For odd indices, the expectations are reversed.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
