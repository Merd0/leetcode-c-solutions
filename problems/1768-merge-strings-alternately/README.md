# #1768 - Merge Strings Alternately

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Two Pointers, String
- Hint: Append one character from each word while both still have characters.
- Solved date: 2026-06-16
- Source: https://leetcode.com/problems/merge-strings-alternately/
- Note: Daily practice question

## Problem Statement

TR: Iki string'i sirayla karakter alarak birlestir. Once `word1`den bir
karakter, sonra `word2`den bir karakter ekle. Stringlerden biri erken biterse,
digerinin kalan karakterlerini sona ekle.

EN: Merge two strings by alternating characters: take one from `word1`, then
one from `word2`. If one string finishes first, append the rest of the other
string.

## Starter Code (C)

```c
char* mergeAlternately(char* word1, char* word2) {

}
```

## Parameters / Return

- `word1`: First input string.
- `word2`: Second input string.
- Returns a newly allocated merged string.

## Examples

```text
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
```

```text
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
```

```text
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
```

## Constraints

- `1 <= word1.length, word2.length <= 100`
- `word1` and `word2` contain lowercase English letters

## Approach

First count both string lengths manually so the exact output size can be
allocated.

Use three indices:

- `i` for `word1`
- `j` for `word2`
- `k` for the result string

While both strings still have characters, append one from each. Then append the
remaining characters from whichever string is longer. Finally, write `'\0'` to
terminate the returned string.

## Complexity

- Time: `O(n + m)`
- Extra space: `O(n + m)` for the returned string

## Solution

- [solution.c](solution.c)
