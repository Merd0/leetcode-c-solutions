# #0344 - Reverse String

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Two Pointers, String
- Hint: Swap the first and last characters, then move inward.
- Solved date: 2026-05-21
- Source: https://leetcode.com/problems/reverse-string/

## Problem Statement

TR: Karakter dizisi `s` verilir. Diziyi yerinde ters cevir; ekstra bir cikti dizisi dondurme.

EN: Given a character array `s`, reverse it in-place without returning a new array.

## Starter Code (C)

```c
void reverseString(char* s, int sSize) {

}
```

## Parameters

- `s`: Character array to reverse.
- `sSize`: Number of characters in `s`.

## Return

TR: Fonksiyon `void` doner; degisiklik `s` uzerinde yapilir.

EN: The function returns `void`; the change is made directly inside `s`.

## Examples

### Example 1

```text
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]
```

### Example 2

```text
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
```

## Constraints

- `1 <= s.length <= 10^5`
- `s[i]` is a printable ASCII character.
- The solution should use `O(1)` extra memory.

## Approach

TR: Dizinin ilk yarisi kadar ilerle. `i` konumundaki karakter ile sondan simetrik gelen karakteri takas et.

EN: Iterate through the first half of the array. Swap the character at `i` with its symmetric character from the end.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
