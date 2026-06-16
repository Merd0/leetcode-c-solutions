# #1528 - Shuffle String

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, String
- Hint: Put each character directly into its target index.
- Solved date: 2026-06-16
- Source: https://leetcode.com/problems/shuffle-string/
- Note: Daily practice question

## Problem Statement

TR: `s` string'indeki karakterler karistirilmistir. `indices[i]`, `s[i]`
karakterinin cevap string'inde hangi indexe gitmesi gerektigini belirtir.
String'i eski haline getir ve dondur.

EN: The characters of `s` were shuffled. `indices[i]` tells where `s[i]`
belongs in the restored string. Rebuild and return the original string.

## Starter Code (C)

```c
char* restoreString(char* s, int* indices, int indicesSize) {

}
```

## Parameters / Return

- `s`: Shuffled lowercase string.
- `indices`: Target position for each character of `s`.
- `indicesSize`: Length of `s` and `indices`.
- Returns a newly allocated restored string.

## Examples

```text
Input: s = "codeleet", indices = [4,5,6,7,0,2,1,3]
Output: "leetcode"
```

```text
Input: s = "abc", indices = [0,1,2]
Output: "abc"
```

## Constraints

- `1 <= s.length <= 100`
- `s.length == indices.length`
- `s` contains lowercase English letters
- `0 <= indices[i] < s.length`
- All values in `indices` are unique

## Approach

Allocate a result string with one extra byte for `'\0'`.

For each character:

```c
shuffle[indices[i]] = s[i];
```

Because every index appears exactly once, each result position is filled once.
After all characters are placed, terminate the string with `'\0'`.

## Complexity

- Time: `O(n)`
- Extra space: `O(n)` for the returned string

## Solution

- [solution.c](solution.c)
