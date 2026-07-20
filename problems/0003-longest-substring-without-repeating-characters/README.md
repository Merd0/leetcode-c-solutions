# #0003 - Longest Substring Without Repeating Characters

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: String, Sliding Window, Hash Table
- Hint: Keep a window with no duplicate characters; when a duplicate appears, move the left side of the window.
- Solved date: 2026-05-18
- Source: https://leetcode.com/problems/longest-substring-without-repeating-characters/

## Problem Statement

TR: Bir string `s` verilir. Tekrar eden karakter icermeyen en uzun substring'in uzunlugunu bul.

EN: Given a string `s`, find the length of the longest substring that does not contain duplicate characters.

## Starter Code (C)

```c
int lengthOfLongestSubstring(char* s) {

}
```

## Parameters

- `s`: Null-terminated input string.

## Return

TR: Tekrar eden karakter icermeyen en uzun substring uzunlugu.

EN: Return the length of the longest substring without duplicate characters.

## Examples

### Example 1

```text
Input: s = "abcabcbb"
Output: 3
Explanation:
One valid answer is "abc", with length 3.
"bca" and "cab" are also valid substrings with the same length.
```

### Example 2

```text
Input: s = "bbbbb"
Output: 1
Explanation:
The best substring is "b", because every character is the same.
```

### Example 3

```text
Input: s = "pwwkew"
Output: 3
Explanation:
The best substring is "wke", with length 3.
"pwke" is not valid here because it is a subsequence, not a contiguous substring.
```

## Constraints

- `0 <= s.length <= 5 * 10^4`
- `s` consists of English letters, digits, symbols, and spaces.

## Approach

TR: Sliding window kullan. `start` ve `end` arasinda tekrar eden karakter olmayacak sekilde pencereyi koru. Bir karakter pencerenin icinde daha once gorulduyse `start` degerini o eski konumun bir sonrasina tasi.

EN: Use a sliding window. Keep the window between `start` and `end` free of duplicate characters. If the current character was already inside the window, move `start` after its previous position.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
