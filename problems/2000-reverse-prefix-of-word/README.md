# #2000 - Reverse Prefix of Word

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Two Pointers, String, Stack
- Hint: Find the first occurrence of `ch`, then swap characters from both ends of the prefix.
- Solved date: 2026-06-14
- Source: https://leetcode.com/problems/reverse-prefix-of-word/
- Note: Daily practice question

## Problem Statement

TR: `word` icinde `ch` karakterinin ilk bulundugu konumu bul. Karakter varsa
string'in basindan bu konuma kadar olan prefix'i ters cevir. Karakter yoksa
string'i degistirmeden dondur.

EN: Find the first occurrence of `ch` in `word`. If it exists, reverse the
prefix from the beginning of the string through that position. If it does not
exist, return the word unchanged.

## Starter Code (C)

```c
char* reversePrefix(char* word, char ch) {

}
```

## Parameters / Return

- `word`: Mutable lowercase string.
- `ch`: Character whose first occurrence ends the prefix.
- Returns the same string pointer after modifying it in place when needed.

## Examples

```text
Input: word = "abcdefd", ch = 'd'
Output: "dcbaefd"
Explanation: Reverse the prefix "abcd".
```

```text
Input: word = "xyxzxe", ch = 'z'
Output: "zxyxxe"
```

```text
Input: word = "abcd", ch = 'z'
Output: "abcd"
Explanation: The character does not occur, so the word stays unchanged.
```

## Constraints

- `1 <= word.length <= 250`
- `word` contains lowercase English letters
- `ch` is a lowercase English letter

## Approach

Scan from left to right to find the first `ch`.

When it is found:

1. Set `finish` to that index.
2. Start `j` at the beginning of the string.
3. Swap `word[j]` with `word[finish]`.
4. Move both positions toward the center.

The inner loop condition `j < finish` stops after the prefix has been fully
reversed. The outer loop then stops because only the first occurrence matters.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
