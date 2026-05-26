# #3120 - Count the Number of Special Characters I

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Hash Table, String
- Hint: A letter is special if both lowercase and uppercase forms appear.
- Solved date: 2026-05-27
- Source: LeetCode #3120

## Problem Statement

TR: Bir string veriliyor. Hem kucuk harfi hem buyuk harfi string icinde gecen farkli harflerin sayisini bul.

EN: Given a string, count how many different English letters appear in both lowercase and uppercase form.

## Starter Code (C)

```c
int numberOfSpecialChars(char* word) {

}
```

## Parameters / Return

- `word`: input string containing English letters.
- Returns the number of special letters.

## Examples

```text
Input: word = "aaAbcBC"
Output: 3
Explanation: a/A, b/B, and c/C are all present.
```

```text
Input: word = "abc"
Output: 0
Explanation: No uppercase form appears for any letter.
```

```text
Input: word = "abBCab"
Output: 1
Explanation: Only b/B is present in both forms.
```

## Constraints

- `1 <= word.length <= 50`
- `word` consists of lowercase and uppercase English letters.

## Approach

Use two arrays of size 26. Mark letters seen in lowercase in `lower`, and
letters seen in uppercase in `upper`. At the end, count indices where both
arrays are marked.
