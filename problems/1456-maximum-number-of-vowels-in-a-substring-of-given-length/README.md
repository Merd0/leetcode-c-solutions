# #1456 - Maximum Number of Vowels in a Substring of Given Length

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: String, Sliding Window
- Hint: Keep the vowel count for exactly `k` characters, then slide the window.
- Solved date: 2026-06-25
- Source: https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
- Note: Daily / sliding-window practice question

## Problem Statement

TR: `s` stringi ve `k` veriliyor. Uzunlugu tam `k` olan substring'ler icinde
en fazla kac sesli harf oldugunu dondur.

EN: Among all substrings of length exactly `k`, return the maximum number of
vowels in one substring.

## Starter Code (C)

```c
int maxVowels(char* s, int k) {

}
```

## Parameters / Return

- `s`: Lowercase input string.
- `k`: Fixed substring/window length.
- Returns the maximum vowel count in any length-`k` substring.

## Examples

```text
Input: s = "abciiidef", k = 3
Output: 3
Explanation: "iii" has 3 vowels.
```

```text
Input: s = "aeiou", k = 2
Output: 2
Explanation: Every length-2 substring has 2 vowels.
```

```text
Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee" has 2 vowels.
```

## Constraints

- `1 <= s.length <= 10^5`
- `s` contains lowercase English letters
- `1 <= k <= s.length`

## Approach

This is a fixed-size sliding window:

1. Count vowels in the first `k` characters.
2. Move the window one step at a time.
3. Add the new entering character.
4. Remove the character that is now outside the window.
5. Track the largest vowel count seen.

For index `i`, the entering character is `s[i]` and the leaving character is
`s[i - k]`.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
