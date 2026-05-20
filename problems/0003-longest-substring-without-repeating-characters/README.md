# #0003 - Longest Substring Without Repeating Characters

- Difficulty: Medium
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/longest-substring-without-repeating-characters/
- Topics: String, Sliding Window, Hash Table

## Question

TR: Bir string icinde tekrar eden karakter olmadan en uzun alt string uzunlugunu bul.

EN: Find the length of the longest substring that contains no repeated characters.

## Idea

TR: Sliding window kullan; tekrar gorulunce pencerenin solunu ileri al.

EN: Use a sliding window and move the left side after a repeated character appears.

## Code

- [solution.c](solution.c)
