# #0438 - Find All Anagrams in a String

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Hash Table, String, Sliding Window
- Hint: Every valid window has the same length and same character counts as `p`.
- Solved date: 2026-05-26
- Source: https://leetcode.com/problems/find-all-anagrams-in-a-string/

## Problem Statement

TR: `s` string'i icinde `p` string'inin anagrami olan tum substring baslangic indexlerini dondur.

EN: Given strings `s` and `p`, return all start indices of substrings in `s` that are anagrams of `p`.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findAnagrams(char* s, char* p, int* returnSize) {

}
```

## Parameters / Return

- `s`: string to scan.
- `p`: pattern string.
- `returnSize`: output count of found start indices.
- Returns a malloced array containing valid start indices.

## Examples

```text
Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation: "cba" and "bac" are anagrams of "abc".
```

```text
Input: s = "abab", p = "ab"
Output: [0,1,2]
```

## Constraints

- `1 <= s.length, p.length <= 3 * 10^4`
- `s` and `p` consist of lowercase English letters.

## Approach

Use a fixed-size sliding window of length `p.length`. Track letter counts for
`p` and for the current window. When the counts match, store the current start
index.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
