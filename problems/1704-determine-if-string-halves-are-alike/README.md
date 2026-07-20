# #1704 - Determine if String Halves Are Alike

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String, Counting
- Hint: Count vowels separately before and after the middle index.
- Solved date: 2026-06-15
- Source: https://leetcode.com/problems/determine-if-string-halves-are-alike/
- Note: Daily practice question

## Problem Statement

TR: Cift uzunluktaki `s` string'ini esit iki yariya ayir. Iki yarida bulunan
sesli harf sayilari esitse `true`, degilse `false` dondur. Buyuk ve kucuk
harfler birlikte degerlendirilir.

EN: Split the even-length string `s` into two equal halves. Return `true` when
both halves contain the same number of vowels; otherwise return `false`.
Uppercase and lowercase vowels both count.

## Starter Code (C)

```c
bool halvesAreAlike(char* s) {

}
```

## Parameters / Return

- `s`: Even-length string containing uppercase and lowercase letters.
- Returns whether both halves contain equal vowel counts.

## Examples

```text
Input: s = "book"
Output: true
Explanation: "bo" and "ok" each contain one vowel.
```

```text
Input: s = "textbook"
Output: false
Explanation: "text" contains one vowel while "book" contains two.
```

## Constraints

- `2 <= s.length <= 1000`
- `s.length` is even
- `s` contains uppercase and lowercase English letters

## Approach

Use `isVowel` to recognize all ten uppercase and lowercase vowel characters.

First count the string length manually. Then visit every character:

- Indices before `length / 2` belong to the first half.
- Remaining indices belong to the second half.
- Increase the corresponding counter when the character is a vowel.

The halves are alike exactly when the two counters are equal.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
