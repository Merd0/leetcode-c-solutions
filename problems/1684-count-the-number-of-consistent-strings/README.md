# #1684 - Count the Number of Consistent Strings

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Hash Table, String, Bit Manipulation, Counting
- Hint: Mark the allowed letters once, then validate every character of each word.
- Solved date: 2026-06-13
- Source: https://leetcode.com/problems/count-the-number-of-consistent-strings/
- Note: Daily practice question

## Problem Statement

TR: `allowed` string'i kullanilabilecek farkli harfleri belirtir. `words`
dizisindeki bir kelimenin tum harfleri `allowed` icinde bulunuyorsa bu kelime
consistent kabul edilir. Consistent kelimelerin sayisini dondur.

EN: The string `allowed` contains the letters that may be used. A word is
consistent when every one of its characters appears in `allowed`. Return the
number of consistent strings in `words`.

## Starter Code (C)

```c
int countConsistentStrings(char* allowed, char** words, int wordsSize) {

}
```

## Parameters / Return

- `allowed`: Distinct lowercase letters that are permitted.
- `words`: Array of lowercase words to inspect.
- `wordsSize`: Number of words.
- Returns the number of words containing only allowed characters.

## Examples

```text
Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
Output: 2
Explanation: "aaab" and "baa" use only 'a' and 'b'.
```

```text
Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
Output: 7
```

```text
Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
Output: 4
Explanation: "cc", "acd", "ac", and "d" are consistent.
```

## Constraints

- `1 <= allowed.length <= 26`
- Every character in `allowed` is distinct
- `1 <= words.length <= 10^4`
- `1 <= words[i].length <= 10`
- All strings contain lowercase English letters

## Approach

Create a 26-element lookup array:

```text
allowedArr[0]  -> is 'a' allowed?
allowedArr[25] -> is 'z' allowed?
```

Mark each character from `allowed` once. Then scan every word:

- If a character is not marked, the word is invalid.
- If every character is marked, increase the result.

The original idea rebuilt `allowedArr` for every word. Moving that setup before
the word loop preserves the same logic while avoiding repeated work.

A bitmask could also represent the 26 letters, but the lookup array is direct
and easy to revise.

## Complexity

- Time: `O(a + total characters in words)`, where `a` is `allowed.length`
- Extra space: `O(1)` because the lookup array always has 26 entries

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
