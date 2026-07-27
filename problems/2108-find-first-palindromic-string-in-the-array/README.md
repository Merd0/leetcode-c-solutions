# #2108 - Find First Palindromic String in the Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, String, Two Pointers
- Hint: Compare each word from both ends and return immediately after the first complete match.
- Solved date: 2026-07-27
- Source: https://leetcode.com/problems/find-first-palindromic-string-in-the-array/
- Note: C string indexing and inward-moving two-pointers practice

## Problem Statement

TR: String dizisini soldan saga tara ve palindrom olan ilk kelimeyi dondur. Hic
palindrom yoksa bos string dondur.

EN: Scan the string array from left to right and return the first word that reads
the same in both directions. Return an empty string if none exists.

## Starter Code (C)

```c
char* firstPalindrome(char** words, int wordsSize) {

}
```

## Example

```text
Input:  words = ["abc","car","ada","racecar","cool"]
Output: "ada"
```

Although `"racecar"` is also a palindrome, `"ada"` appears first.

## Approach

`words` is a `char**`, while `words[i]` is one null-terminated `char*`. Therefore
the current word length is:

```c
strlen(words[i])
```

The final character is at index `length - 1`, not `length`; index `length` contains
the null terminator.

For each word, place `left` at the first character and `right` at the final
character. Compare the pair and move both pointers inward while they match.

The invariant is that every character pair outside `[left, right]` has already
matched. One mismatch proves the current word cannot be a palindrome, so the loop
sets `isPalindrome` to zero and uses `break` to try the next word. Using `continue`
without moving either pointer would repeat the same mismatch forever.

If the pointers meet or cross without a mismatch, return `words[i]` immediately.
This immediate return preserves the requirement to select the first palindrome.

Embedded-C connection: inward pointer validation is a compact pattern for symmetric
headers, mirrored fields, and integrity checks over bounded character buffers.

## Complexity

- Time: `O(total characters inspected)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
