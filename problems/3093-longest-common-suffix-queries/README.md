# #3093 - Longest Common Suffix Queries

## LeetCode Style Info

- Status: Accepted
- Difficulty: Hard
- Topics: Array, String, Trie
- Hint: Reverse suffix matching into prefix matching by reading words from the end.
- Solved date: 2026-05-29
- Source: https://leetcode.com/problems/longest-common-suffix-queries/

## Problem Statement

TR: `wordsContainer` ve `wordsQuery` string dizileri veriliyor. Her query icin
`wordsContainer` icinden query ile en uzun ortak suffix'e sahip olan kelimenin
indexini dondur. Esitlikte daha kisa kelime, yine esitlik varsa daha erken index
secilir.

EN: Given `wordsContainer` and `wordsQuery`, return for each query the index of
the container word with the longest common suffix. If several words tie, choose
the shortest word; if length also ties, choose the earliest index.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* stringIndices(char** wordsContainer, int wordsContainerSize,
                   char** wordsQuery, int wordsQuerySize,
                   int* returnSize) {

}
```

## Parameters / Return

- `wordsContainer`: words that can be selected as answers.
- `wordsContainerSize`: number of container words.
- `wordsQuery`: query words to match by suffix.
- `wordsQuerySize`: number of query words.
- `returnSize`: output size of the returned answer array.
- Returns a malloced array where each value is an index in `wordsContainer`.

## Examples

```text
Input:
wordsContainer = ["abcd","bcd","xbcd"]
wordsQuery = ["cd","bcd","xyz"]

Output: [1,1,1]
Explanation:
"cd" and "bcd" match all three words by suffix, but index 1 has the shortest
word. "xyz" has no non-empty suffix match, so the shortest container word is
still selected.
```

```text
Input:
wordsContainer = ["abcdefgh","poiuygh","ghghgh"]
wordsQuery = ["gh","acbfgh","acbfegh"]

Output: [2,0,2]
Explanation:
"gh" is shared by all, so the shortest matching word wins. "acbfgh" matches
"fgh" only with index 0. "acbfegh" falls back to suffix "gh", where index 2 wins.
```

## Constraints

- `1 <= wordsContainer.length, wordsQuery.length <= 10^4`
- `1 <= wordsContainer[i].length <= 5 * 10^3`
- `1 <= wordsQuery[i].length <= 5 * 10^3`
- `wordsContainer[i]` and `wordsQuery[i]` contain only lowercase English letters.
- Sum of `wordsContainer[i].length` is at most `5 * 10^5`.
- Sum of `wordsQuery[i].length` is at most `5 * 10^5`.

## Approach

Build a trie using the container words from right to left. That turns suffix
matching into normal trie traversal.

Each trie node stores the best container index for that suffix. "Best" means:

1. Smaller word length wins.
2. If lengths are equal, smaller original index wins.

The root also stores the globally best word, so a query with no matching suffix
can still return the required fallback answer.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
