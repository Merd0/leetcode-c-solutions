# #0389 - Find the Difference

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Hash Table, String, Bit Manipulation, Sorting
- Hint: Equal characters cancel out with XOR.
- Solved date: 2026-05-31
- Source: LeetCode #389

## Problem Statement

TR: `t`, `s` stringinin karistirilmis hali ve fazladan eklenmis bir karakterden
olusur. Eklenen karakteri bul.

EN: String `t` is made by shuffling string `s` and adding one extra character.
Return the added character.

## Starter Code (C)

```c
char findTheDifference(char* s, char* t) {

}
```

## Parameters / Return

- `s`: original string.
- `t`: shuffled string with one extra character.
- Returns the extra character.

## Examples

```text
Input: s = "abcd", t = "abcde"
Output: "e"
```

```text
Input: s = "", t = "y"
Output: "y"
```

## Constraints

- `0 <= s.length <= 1000`
- `t.length == s.length + 1`
- `s` and `t` contain lowercase English letters.

## Approach

XOR every character from both strings into one variable.

The useful identity is:

```text
x ^ x = 0
0 ^ x = x
```

All matching characters cancel out, leaving only the extra character from `t`.
