# #0290 - Word Pattern

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Hash Table, String
- Companies: Not tracked in this repo
- Hint: Each pattern letter must map to one unique word, and each word to one unique letter.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/word-pattern/

## Problem Statement

TR: `pattern` karakterleri ve bosluklarla ayrilmis kelimelerden olusan `s` verilir. Her pattern karakteri tam olarak bir kelimeye, her kelime de tam olarak bir karaktere baglanabiliyorsa `true` dondur.

EN: Given `pattern` and a space-separated string `s`, return `true` if each pattern character maps to exactly one word and each word maps back to exactly one character.

## Starter Code (C)

```c
bool wordPattern(char* pattern, char* s) {

}
```

## Parameters

- `pattern`: Pattern made of lowercase English letters.
- `s`: Space-separated words.

## Return

TR: Pattern ile kelimeler arasinda bire bir eslesme varsa `true`, yoksa `false`.

EN: Return `true` when there is a one-to-one mapping between pattern letters and words; otherwise return `false`.

## Examples

### Example 1

```text
Input: pattern = "abba", s = "dog cat cat dog"
Output: true
```

### Example 2

```text
Input: pattern = "abba", s = "dog cat cat fish"
Output: false
```

### Example 3

```text
Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false
```

## Constraints

- `1 <= pattern.length <= 300`
- `pattern` contains lowercase English letters.
- `s` contains lowercase English words separated by single spaces.

## Approach

TR: `strtok` ile `s` stringini kelimelere ayir. Her pattern harfi icin bagli kelimeyi tut. Yeni baglanti kurulurken kelime baska harfe verilmis mi kontrol et.

EN: Split `s` into words with `strtok`. Store the word assigned to each pattern letter. Before assigning a new word, check whether another letter already uses it.

## Solution

- [solution.c](solution.c)
