# #0076 - Minimum Window Substring

## LeetCode Style Info

- Status: Solved
- Difficulty: Hard
- Topics: Hash Table, String, Sliding Window
- Hint: Expand until all required characters are covered, then shrink as much as possible.
- Solved date: 2026-05-26
- Source: LeetCode #76

## Problem Statement

TR: `s` ve `t` string'leri veriliyor. `s` icinde `t`deki tum karakterleri gerekli adetleriyle iceren en kisa substring'i dondur.

EN: Given strings `s` and `t`, return the minimum window in `s` that contains every character of `t` with the required counts.

## Starter Code (C)

```c
char* minWindow(char* s, char* t) {

}
```

## Parameters / Return

- `s`: source string.
- `t`: required characters.
- Returns a malloced string containing the minimum valid window, or an empty string if none exists.

## Examples

```text
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: "BANC" is the shortest window containing A, B, and C.
```

```text
Input: s = "a", t = "a"
Output: "a"
```

```text
Input: s = "a", t = "aa"
Output: ""
```

## Constraints

- `1 <= s.length, t.length <= 10^5`
- `s` and `t` consist of uppercase and lowercase English letters.

## Approach

Count the required characters from `t`. Expand the right side of the window and
track how many required characters are currently satisfied. When all characters
are covered, shrink from the left and update the best answer.
