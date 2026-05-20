# #0003 - Longest Substring Without Repeating Characters

- Difficulty: Medium
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/longest-substring-without-repeating-characters/
- Topics: String, Sliding Window, Hash Table

## Problem

TR: Bir string icinde tekrar eden karakter bulunmayan en uzun ardisik parcanin uzunlugunu bul.

EN: Given a string, find the length of the longest contiguous substring without repeated characters.

## Starter Code (C)

```c
int lengthOfLongestSubstring(char* s) {

}
```

## Parameters

- `s`: Null-terminated input string.

## Return

TR: Tekrar icermeyen en uzun substring uzunlugu.

EN: The length of the longest substring with all unique characters.

## Example

```text
Input: s = "abcabcbb"
Output: 3
Reason: "abc" has no repeated characters.
```

## Approach

TR: Sliding window kullan. Bir karakter tekrar gorulurse pencerenin sol tarafini o karakterin eski konumundan sonrasina tasi.

EN: Use a sliding window. If a character repeats inside the current window, move the left boundary after its previous index.

## Solution

- [solution.c](solution.c)
