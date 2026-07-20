# #0345 - Reverse Vowels of a String

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Two Pointers, String
- Hint: Move two pointers until both point to vowels, then swap.
- Solved date: 2026-05-22
- Source: https://leetcode.com/problems/reverse-vowels-of-a-string/

## Problem Statement

TR: Bir string verilir. Sadece sesli harflerin yerlerini ters cevir, diger karakterleri ayni yerlerinde birak.

EN: Given a string, reverse only the vowels and leave every other character in its original position.

## Starter Code (C)

```c
char* reverseVowels(char* s) {

}
```

## Parameters

- `s`: Input string.

## Return

TR: Sesli harfleri ters cevrilmis string.

EN: Return the string after reversing only its vowels.

## Examples

### Example 1

```text
Input: s = "hello"
Output: "holle"
```

### Example 2

```text
Input: s = "leetcode"
Output: "leotcede"
```

## Constraints

- `1 <= s.length <= 3 * 10^5`
- `s` contains printable ASCII characters.
- Vowels are `a`, `e`, `i`, `o`, `u` and their uppercase versions.

## Approach

TR: Soldan ve sagdan iki pointer kullan. Pointer sesli harf gormuyorsa ilerlet. Iki taraf da sesli harfte durdugunda karakterleri takas et.

EN: Use two pointers from both ends. Move each pointer until it finds a vowel. When both sides point to vowels, swap them.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
