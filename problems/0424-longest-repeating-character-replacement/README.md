# #0424 - Longest Repeating Character Replacement

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Hash Table, String, Sliding Window
- Hint: A window is valid if `window length - most frequent char count <= k`.
- Solved date: 2026-05-26
- Source: https://leetcode.com/problems/longest-repeating-character-replacement/

## Problem Statement

TR: Buyuk harflerden olusan bir string ve `k` veriliyor. En fazla `k` karakteri degistirerek ayni harften olusan en uzun substring uzunlugunu bul.

EN: Given an uppercase string and an integer `k`, return the longest substring length that can be made of one repeated character after at most `k` replacements.

## Starter Code (C)

```c
int characterReplacement(char* s, int k) {

}
```

## Parameters / Return

- `s`: uppercase input string.
- `k`: maximum allowed replacements.
- Returns the maximum valid window length.

## Examples

```text
Input: s = "ABAB", k = 2
Output: 4
Explanation: Replace two letters to make the whole string one repeated character.
```

```text
Input: s = "AABABBA", k = 1
Output: 4
Explanation: One valid answer is "AABA" or "ABBA" after one replacement.
```

## Constraints

- `1 <= s.length <= 10^5`
- `s` consists of uppercase English letters.
- `0 <= k <= s.length`

## Approach

Track counts of letters inside the window and the highest frequency seen in
the window. If `windowSize - maxFreq > k`, shrink from the left. The largest
valid window length is the answer.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
