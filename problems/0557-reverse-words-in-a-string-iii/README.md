# #0557 - Reverse Words in a String III

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Two Pointers, String
- Companies: Not tracked in this repo
- Hint: Reverse each word range separately, not the whole sentence.
- Solved: 2026-05-21
- LeetCode: https://leetcode.com/problems/reverse-words-in-a-string-iii/

## Problem Statement

TR: Bir cumle verilir. Kelimelerin sirasi ayni kalacak sekilde her kelimenin karakterlerini kendi icinde ters cevir.

EN: Given a sentence, keep the word order the same but reverse the characters inside each word.

## Starter Code (C)

```c
char* reverseWords(char* s) {

}
```

## Parameters

- `s`: Input sentence.

## Return

TR: Her kelimesi ters cevrilmis ayni string.

EN: Return the same string after each word has been reversed.

## Examples

### Example 1

```text
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
```

### Example 2

```text
Input: s = "Mr Ding"
Output: "rM gniD"
```

## Constraints

- `1 <= s.length <= 5 * 10^4`
- `s` contains printable ASCII characters and spaces.
- Words are separated by single spaces.

## Approach

TR: Bosluk gordugunde o ana kadar biriken kelime araligini ters cevir. Dongu bittiginde son kelimeyi ayrica cevir.

EN: Whenever a space is found, reverse the word range collected so far. After the loop, reverse the final word separately.

## Solution

- [solution.c](solution.c)
