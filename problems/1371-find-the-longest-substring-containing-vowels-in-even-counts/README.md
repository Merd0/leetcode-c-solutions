# #1371 - Find the Longest Substring Containing Vowels in Even Counts

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: String, Bit Manipulation, Prefix State
- Hint: Count parity, not exact vowel counts.
- Solved date: 2026-07-01
- Source: https://leetcode.com/problems/find-the-longest-substring-containing-vowels-in-even-counts/
- Note: Bitmask / prefix-state practice question

## Problem Statement

TR: `s` stringi veriliyor. Icinde `a`, `e`, `i`, `o`, `u` harflerinin her biri
cift sayida gecen en uzun kesintisiz substring'in uzunlugunu dondur.

EN: Given a string `s`, return the length of the longest contiguous substring
where each vowel `a`, `e`, `i`, `o`, and `u` appears an even number of times.

`0` also counts as even. So a substring with no vowels can still be valid.

## Starter Code (C)

```c
int findTheLongestSubstring(char* s) {

}
```

## Parameters / Return

- `s`: Lowercase input string.
- Returns: The maximum length of a substring where all five vowels have even counts.

## Examples

```text
Input:  s = "eleetminicoworoep"
Output: 13

One valid longest substring has every vowel count even.
```

```text
Input:  s = "leetcodeisgreat"
Output: 5
```

```text
Input:  s = "bcbcbc"
Output: 6

There are no vowels, so all vowel counts are 0 and therefore even.
```

## Constraints

- `1 <= s.length <= 5 * 10^5`
- `s` contains lowercase English letters.

## First Attempt: Brute Force

The direct idea is:

```text
for every start index:
    reset vowel counts
    for every end index:
        update the current substring's vowel counts
        if all five counts are even:
            update max length
```

This is useful for learning because it matches the problem statement directly:
try every substring and check the five vowels.

But it is too slow for the constraint:

```text
s.length can be 500000
all substrings are roughly n * n
```

So the brute-force version is archived as a TLE learning attempt.

- [brute_force_tle.c](brute_force_tle.c)

## Accepted Approach: Prefix Parity Mask

The important observation is that exact counts are not needed.

For each vowel, only this state matters:

```text
even count or odd count
```

Use five bits:

```text
a -> 1
e -> 2
i -> 4
o -> 8
u -> 16
```

`mask` stores which vowels currently have odd counts in the prefix seen so far.
When a vowel appears, toggle its bit:

```c
mask ^= bit;
```

The array `first[32]` stores the first index where each mask was seen:

```text
first[mask] = first index where this exact vowel parity state appeared
```

Why does this work?

If the same `mask` appears at two indices, the substring between them changed
the vowel parity state and then returned it to the same state. That means every
vowel changed an even number of times inside that substring.

Example idea:

```text
mask at old index = 2
mask at new index = 2
```

The state before and after is identical, so the middle part has even vowel
changes.

`first[0] = -1` is used because before the string starts, all vowels are even.
If the prefix from index `0` to `i` is valid, its length becomes:

```text
i - (-1)
```

## Complexity

- Brute force time: `O(n^2)`
- Accepted time: `O(n)`
- Accepted extra space: `O(1)` because there are only `32` possible masks.

## Solutions

- [solution.c](solution.c) - accepted prefix parity mask
- [brute_force_tle.c](brute_force_tle.c) - direct substring enumeration, too slow
