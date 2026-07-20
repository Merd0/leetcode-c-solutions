# #0387 - First Unique Character in a String

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Hash Table, String, Counting
- Hint: Count first, then scan from the beginning.
- Solved date: 2026-05-21
- Source: https://leetcode.com/problems/first-unique-character-in-a-string/

## Problem Statement

TR: Kucuk harflerden olusan bir string verilir. Sadece bir kez gecen ilk karakterin indeksini dondur; yoksa `-1` dondur.

EN: Given a lowercase string, return the index of the first character that appears exactly once; return `-1` if none exists.

## Starter Code (C)

```c
int firstUniqChar(char* s) {

}
```

## Parameters

- `s`: Lowercase input string.

## Return

TR: Ilk unique karakterin indeksi veya unique karakter yoksa `-1`.

EN: Return the index of the first unique character, or `-1` when no such character exists.

## Examples

### Example 1

```text
Input: s = "leetcode"
Output: 0
```

### Example 2

```text
Input: s = "loveleetcode"
Output: 2
```

### Example 3

```text
Input: s = "aabb"
Output: -1
```

## Constraints

- `1 <= s.length <= 10^5`
- `s` contains only lowercase English letters.

## Approach

TR: Ilk turda her harfin kac kez gectigini say. Ikinci turda bastan ilerleyip sayaci `1` olan ilk karakterin indeksini dondur.

EN: In the first pass, count every letter. In the second pass, scan from the beginning and return the first index whose count is `1`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
