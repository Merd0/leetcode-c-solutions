# #0242 - Valid Anagram

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Hash Table, String, Counting
- Hint: Two words are anagrams when every letter count matches.
- Solved date: 2026-05-21
- Source: https://leetcode.com/problems/valid-anagram/

## Problem Statement

TR: Iki string verilir. `t`, `s` stringinin harfleri yeniden siralanarak olusturulabiliyorsa `true` dondur.

EN: Given two strings, return `true` if `t` can be formed by rearranging all characters of `s`.

## Starter Code (C)

```c
bool isAnagram(char* s, char* t) {

}
```

## Parameters

- `s`: First string.
- `t`: Second string.

## Return

TR: Harf sayilari tamamen ayniysa `true`, degilse `false`.

EN: Return `true` when all letter frequencies match; otherwise return `false`.

## Examples

### Example 1

```text
Input: s = "anagram", t = "nagaram"
Output: true
```

### Example 2

```text
Input: s = "rat", t = "car"
Output: false
```

## Constraints

- `1 <= s.length, t.length <= 5 * 10^4`
- `s` and `t` contain lowercase English letters.

## Approach

TR: 26 elemanli iki sayac dizisi kullan. Her iki stringdeki harf frekanslarini say ve sonunda dizileri karsilastir.

EN: Use two arrays of size 26. Count the letter frequencies in both strings, then compare the arrays.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
