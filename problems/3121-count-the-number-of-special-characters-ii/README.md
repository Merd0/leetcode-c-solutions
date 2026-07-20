# #3121 - Count the Number of Special Characters II

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Hash Table, String
- Hint: Track the last lowercase position and the first uppercase position for each letter.
- Solved date: 2026-05-27
- Source: https://leetcode.com/problems/count-the-number-of-special-characters-ii/

## Problem Statement

TR: Bir string veriliyor. Bir harfin ozel sayilmasi icin hem kucuk hem buyuk
hali string icinde bulunmali ve o harfin tum kucuk halleri, ilk buyuk halinden
once gelmelidir.

EN: Given a string, count how many different English letters appear in both
lowercase and uppercase form, with every lowercase occurrence placed before the
first uppercase occurrence.

## Starter Code (C)

```c
int numberOfSpecialChars(char* word) {

}
```

## Parameters / Return

- `word`: input string containing English letters.
- Returns the number of special letters that satisfy the ordering rule.

## Examples

```text
Input: word = "aaAbcBC"
Output: 3
Explanation: a/A, b/B, and c/C satisfy the rule.
```

```text
Input: word = "abc"
Output: 0
Explanation: No uppercase form appears for any letter.
```

```text
Input: word = "AbBCab"
Output: 0
Explanation: The lowercase forms appear after uppercase forms, so no letter is valid.
```

## Constraints

- `1 <= word.length <= 50`
- `word` consists of lowercase and uppercase English letters.

## Approach

Use two arrays of size 26:

- `lastLower[i]` stores the last index where lowercase letter `i` appears.
- `firstUpper[i]` stores the first index where uppercase letter `i` appears.

A letter is counted only if both forms exist and `lastLower[i] < firstUpper[i]`.
That condition means every lowercase occurrence came before the first uppercase
occurrence.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
