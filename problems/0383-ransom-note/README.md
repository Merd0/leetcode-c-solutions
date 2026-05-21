# #0383 - Ransom Note

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Hash Table, String, Counting
- Companies: Not tracked in this repo
- Hint: The magazine must contain every required letter at least as many times.
- Solved: 2026-05-21
- LeetCode: https://leetcode.com/problems/ransom-note/

## Problem Statement

TR: `ransomNote` stringinin, `magazine` stringindeki harfler kullanilarak olusturulup olusturulamayacagini kontrol et. Her harf en fazla bir kez kullanilabilir.

EN: Check whether `ransomNote` can be built from the letters in `magazine`. Each magazine character can be used at most once.

## Starter Code (C)

```c
bool canConstruct(char* ransomNote, char* magazine) {

}
```

## Parameters

- `ransomNote`: Target text to construct.
- `magazine`: Available letters.

## Return

TR: Gerekli harfler magazine icinde yeterliyse `true`, degilse `false`.

EN: Return `true` if the magazine has enough of every needed letter; otherwise return `false`.

## Examples

### Example 1

```text
Input: ransomNote = "a", magazine = "b"
Output: false
```

### Example 2

```text
Input: ransomNote = "aa", magazine = "ab"
Output: false
```

### Example 3

```text
Input: ransomNote = "aa", magazine = "aab"
Output: true
```

## Constraints

- `1 <= ransomNote.length, magazine.length <= 10^5`
- `ransomNote` and `magazine` contain lowercase English letters.

## Approach

TR: Iki adet 26 elemanli sayac dizisi kullan. `ransomNote` ve `magazine` frekanslarini say, sonra magazine sayilari ihtiyaci karsiliyor mu kontrol et.

EN: Use two arrays of size 26. Count the frequencies in `ransomNote` and `magazine`, then verify that magazine counts cover the required counts.

## Solution

- [solution.c](solution.c)
