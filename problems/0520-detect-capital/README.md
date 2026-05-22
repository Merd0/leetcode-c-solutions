# #0520 - Detect Capital

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: String
- Companies: Not tracked in this repo
- Hint: Valid words have either all capitals, no capitals, or only the first capital.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/detect-capital/

## Problem Statement

TR: Bir kelimenin buyuk harf kullanimi dogru mu kontrol et. Tum harfler buyuk, tum harfler kucuk veya sadece ilk harf buyukse gecerlidir.

EN: Check whether a word uses capitals correctly. It is valid when all letters are uppercase, all are lowercase, or only the first letter is uppercase.

## Starter Code (C)

```c
bool detectCapitalUse(char* word) {

}
```

## Parameters

- `word`: Input word.

## Return

TR: Buyuk harf kullanimi gecerliyse `true`, degilse `false`.

EN: Return `true` if the capital usage is valid; otherwise return `false`.

## Examples

### Example 1

```text
Input: word = "USA"
Output: true
```

### Example 2

```text
Input: word = "FlaG"
Output: false
```

## Constraints

- `1 <= word.length <= 100`
- `word` contains lowercase and uppercase English letters.

## Approach

TR: Kelimedeki buyuk harf sayisini say. Bu sayi uzunluga esitse, sifirsa veya sadece ilk harf buyuk olacak sekilde birse cevap `true`.

EN: Count uppercase letters. The word is valid if that count equals the length, equals zero, or equals one with the first letter uppercase.

## Solution

- [solution.c](solution.c)
