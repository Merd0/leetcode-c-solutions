# #0125 - Valid Palindrome

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Two Pointers, String
- Companies: Not tracked in this repo
- Hint: Compare only alphanumeric characters after normalizing case.
- Solved: 2026-05-21
- LeetCode: https://leetcode.com/problems/valid-palindrome/

## Problem Statement

TR: Bir string verilir. Harf ve rakam olmayan karakterleri yok sayarak, buyuk/kucuk harf farkini da dikkate almadan palindrome olup olmadigini kontrol et.

EN: Given a string, ignore non-alphanumeric characters and compare case-insensitively to decide whether it is a palindrome.

## Starter Code (C)

```c
bool isPalindrome(char* s) {

}
```

## Parameters

- `s`: Input string.

## Return

TR: Temizlenmis ve kucuk harfe indirgenmis okunus palindrome ise `true`, degilse `false`.

EN: Return `true` if the normalized string reads the same forward and backward; otherwise return `false`.

## Examples

### Example 1

```text
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation:
After ignoring punctuation and case, the text reads the same both ways.
```

### Example 2

```text
Input: s = "race a car"
Output: false
```

### Example 3

```text
Input: s = " "
Output: true
Explanation:
After removing non-alphanumeric characters, nothing conflicting remains.
```

## Constraints

- `1 <= s.length <= 2 * 10^5`
- `s` contains printable ASCII characters.

## Approach

TR: Soldan ve sagdan iki pointer kullan. Harf/rakam olmayan karakterleri atla, kalan karakterleri kucuk harfe cevirip karsilastir.

EN: Use two pointers from both ends. Skip non-alphanumeric characters, convert the remaining characters to lowercase, and compare them.

## Solution

- [solution.c](solution.c)
