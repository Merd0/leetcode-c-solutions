# #0014 - Longest Common Prefix

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: String
- Companies: Not tracked in this repo
- Hint: Compare every string against the first string character by character.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/longest-common-prefix/

## Problem Statement

TR: String dizisi verilir. Tum stringlerin basinda ortak olan en uzun prefix'i dondur. Ortak prefix yoksa bos string dondur.

EN: Given an array of strings, return the longest prefix shared by every string. If there is no common prefix, return an empty string.

## Starter Code (C)

```c
char* longestCommonPrefix(char** strs, int strsSize) {

}
```

## Parameters

- `strs`: Array of strings.
- `strsSize`: Number of strings in `strs`.

## Return

TR: Tum stringlerde ortak olan en uzun baslangic parcasi.

EN: Return the longest common beginning shared by all strings.

## Examples

### Example 1

```text
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

### Example 2

```text
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation:
There is no common prefix.
```

## Constraints

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` contains lowercase English letters.

## Approach

TR: Ilk stringi prefix olarak dusun. Karakter karakter ilerlerken diger stringlerde ayni karakter yoksa ilk stringi o noktadan kes ve dondur.

EN: Treat the first string as the prefix. Move character by character; when any other string differs, cut the first string at that position and return it.

## Solution

- [solution.c](solution.c)
