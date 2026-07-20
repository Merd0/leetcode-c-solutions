# #1662 - Check If Two String Arrays are Equivalent

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, String
- Hint: Compare characters as a stream instead of joining the strings.
- Solved date: 2026-06-27
- Source: https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
- Note: Daily easy practice question

## Problem Statement

TR: Iki string array verilir. Her array'in parcalari uc uca eklenmis gibi
dusunulur. Ortaya cikan iki string ayniysa `true`, degilse `false` dondur.

EN: Given two string arrays, imagine concatenating each array into one string.
Return whether the two final strings are equal.

## Starter Code (C)

```c
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {

}
```

## Parameters / Return

- `word1`: First string array.
- `word1Size`: Number of strings in `word1`.
- `word2`: Second string array.
- `word2Size`: Number of strings in `word2`.
- Returns: `true` if both arrays form the same final string, otherwise `false`.

## Examples

```text
Input:  word1 = ["ab","c"], word2 = ["a","bc"]
Output: true

Both sides form "abc".
```

```text
Input:  word1 = ["a","cb"], word2 = ["ab","c"]
Output: false

The first side forms "acb", the second side forms "abc".
```

```text
Input:  word1 = ["abc","d","defg"], word2 = ["abcddefg"]
Output: true
```

## Constraints

- `1 <= word1.length, word2.length <= 1000`
- `1 <= word1[i].length, word2[i].length <= 1000`
- Strings contain lowercase English letters.

## Approach

The easy-to-read approach is to join both arrays into two full strings and then
compare them. That works, but it uses extra memory.

The professional C approach is to read both arrays like two character streams:

```text
word1 = ["ab", "c"]  -> a b c
word2 = ["a", "bc"]  -> a b c
```

We keep four indices:

- `i`: which string inside `word1`
- `j`: which character inside `word1[i]`
- `x`: which string inside `word2`
- `y`: which character inside `word2[x]`

At each step, compare:

```text
word1[i][j] == word2[x][y]
```

If one small string ends, move to the next small string on that side. At the end,
both sides must finish at the same time.

This avoids `malloc`, copying, and `strcmp` on temporary buffers.

## Complexity

- Time: `O(total characters)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
