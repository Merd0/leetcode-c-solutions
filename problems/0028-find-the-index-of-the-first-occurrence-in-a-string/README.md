# #0028 - Find the Index of the First Occurrence in a String

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Two Pointers, String, String Matching
- Hint: Try every position where `needle` can still fit.
- Solved date: 2026-05-22
- Source: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

## Problem Statement

TR: `haystack` icinde `needle` stringinin ilk kez basladigi indeksi dondur. `needle` bulunamazsa `-1` dondur.

EN: Return the index of the first occurrence of `needle` inside `haystack`. Return `-1` if it does not occur.

## Starter Code (C)

```c
int strStr(char* haystack, char* needle) {

}
```

## Parameters

- `haystack`: String to search inside.
- `needle`: String to search for.

## Return

TR: Ilk eslesmenin baslangic indeksi veya eslesme yoksa `-1`.

EN: Return the start index of the first match, or `-1` when no match exists.

## Examples

### Example 1

```text
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation:
"sad" starts first at index 0.
```

### Example 2

```text
Input: haystack = "leetcode", needle = "leeto"
Output: -1
```

## Constraints

- `1 <= haystack.length, needle.length <= 10^4`
- `haystack` and `needle` contain lowercase English letters.

## Approach

TR: `needle` uzunlugu kadar yer kalabilen her indeksi dene. Iceride karakterler sirayla eslesirse baslangic indeksini dondur.

EN: Try every index where `needle` can still fit. Compare characters in order; if all characters match, return the starting index.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
