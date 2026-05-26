# #0567 - Permutation in String

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Hash Table, Two Pointers, String, Sliding Window
- Hint: A permutation has the same letter counts as the original string.
- Solved date: 2026-05-26
- Source: LeetCode #567

## Problem Statement

TR: `s1` ve `s2` veriliyor. `s2` icinde `s1`in herhangi bir permutasyonu substring olarak geciyorsa `true` dondur.

EN: Given two strings, return whether `s2` contains any permutation of `s1` as a substring.

## Starter Code (C)

```c
bool checkInclusion(char* s1, char* s2) {

}
```

## Parameters / Return

- `s1`: string whose permutation is searched.
- `s2`: string to scan.
- Returns `true` if a valid permutation window exists, otherwise returns `false`.

## Examples

```text
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: "ba" is a permutation of "ab".
```

```text
Input: s1 = "ab", s2 = "eidboaoo"
Output: false
```

## Constraints

- `1 <= s1.length, s2.length <= 10^4`
- `s1` and `s2` consist of lowercase English letters.

## Approach

Build frequency arrays for `s1` and the first window of `s2` with length
`s1.length`. Slide the window one character at a time and compare the two
frequency arrays after each move.
