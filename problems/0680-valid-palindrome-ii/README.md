# #0680 - Valid Palindrome II

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Two Pointers, String, Greedy
- Companies: Not tracked in this repo
- Hint: At the first mismatch, try skipping either the left or the right character.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/valid-palindrome-ii/

## Problem Statement

TR: Bir string verilir. En fazla bir karakter silerek palindrome yapilip yapilamayacagini kontrol et.

EN: Given a string, check whether it can become a palindrome after deleting at most one character.

## Starter Code (C)

```c
bool validPalindrome(char* s) {

}
```

## Parameters

- `s`: Input string.

## Return

TR: String zaten palindrome ise veya bir karakter silinerek palindrome olabiliyorsa `true`.

EN: Return `true` if the string is already a palindrome or can become one after one deletion.

## Examples

### Example 1

```text
Input: s = "aba"
Output: true
```

### Example 2

```text
Input: s = "abca"
Output: true
Explanation:
Deleting 'b' or 'c' can make it a palindrome.
```

### Example 3

```text
Input: s = "abc"
Output: false
```

## Constraints

- `1 <= s.length <= 10^5`
- `s` contains lowercase English letters.

## Approach

TR: Iki pointer ile karsilastir. Ilk uyumsuzlukta ya soldaki karakteri ya da sagdaki karakteri atlayip kalan aralik palindrome mu kontrol et.

EN: Compare with two pointers. At the first mismatch, either skip the left character or the right character and check whether the remaining range is a palindrome.

## Solution

- [solution.c](solution.c)
