# #0844 - Backspace String Compare

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Two Pointers, String, Stack
- Hint: Build the final visible string after applying `#` as backspace.
- Solved date: 2026-05-23
- Source: https://leetcode.com/problems/backspace-string-compare/

## Problem Statement

TR: Iki string verilir. `#` karakteri backspace gibi davranir. Iki string islendikten sonra ayni sonucu veriyorsa `true` dondur.

EN: Given two strings where `#` works like a backspace, return `true` if both strings become equal after processing.

## Starter Code (C)

```c
bool backspaceCompare(char* s, char* t) {

}
```

## Parameters

- `s`: First input string.
- `t`: Second input string.

## Return

TR: Backspace islemlerinden sonra iki string ayniysa `true`.

EN: Return `true` when both processed strings are equal.

## Examples

### Example 1

```text
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation:
Both become "ac".
```

### Example 2

```text
Input: s = "ab##", t = "c#d#"
Output: true
```

### Example 3

```text
Input: s = "a#c", t = "b"
Output: false
```

## Constraints

- `1 <= s.length, t.length <= 200`
- `s` and `t` contain lowercase letters and `#`.

## Approach

TR: Her string icin temiz bir karakter stack'i olustur. Harf gelirse ekle, `#` gelirse varsa son karakteri sil. Sonunda iki temiz stringi karsilastir.

EN: Build a clean character stack for each string. Push letters, and pop one character when `#` appears if possible. Compare the final cleaned strings.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
