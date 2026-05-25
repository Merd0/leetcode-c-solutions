# #0049 - Group Anagrams

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Hash Table, String, Sorting
- Hint: Anagrams have the same sorted-character form.
- Solved date: 2026-05-25
- Source: LeetCode #49

## Problem Statement

TR: String dizisi veriliyor. Birbirinin anagrami olan kelimeleri ayni gruba koy.

EN: Given an array of strings, group the strings that are anagrams of each other.

## Starter Code (C)

```c
char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes) {

}
```

## Parameters / Return

- `strs`: input string array.
- `strsSize`: number of strings.
- `returnSize`: number of groups returned.
- `returnColumnSizes`: size of each returned group.
- Returns a malloced 2D array of grouped strings.

## Examples

```text
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Explanation: Output group order can be different.
```

```text
Input: strs = [""]
Output: [[""]]
```

```text
Input: strs = ["a"]
Output: [["a"]]
```

## Constraints

- `1 <= strs.length <= 10^4`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters.

## Approach

For each string, create a sorted copy and use that copy as the group key.
If the key already exists, append the string to that group. Otherwise, create a
new group for that key.
