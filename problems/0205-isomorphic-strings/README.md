# #0205 - Isomorphic Strings

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Hash Table, String
- Hint: A character mapping must work in both directions.
- Solved date: 2026-05-22
- Source: https://leetcode.com/problems/isomorphic-strings/

## Problem Statement

TR: Iki string verilir. `s` icindeki her karakter tutarli sekilde `t` icindeki bir karaktere donusebiliyorsa stringler isomorphic kabul edilir.

EN: Given two strings, they are isomorphic if every character in `s` can consistently map to one character in `t`.

## Starter Code (C)

```c
bool isIsomorphic(char* s, char* t) {

}
```

## Parameters

- `s`: First string.
- `t`: Second string.

## Return

TR: Karakter eslesmeleri iki yonde de tutarliysa `true`, degilse `false`.

EN: Return `true` if the character mapping is consistent in both directions; otherwise return `false`.

## Examples

### Example 1

```text
Input: s = "egg", t = "add"
Output: true
```

### Example 2

```text
Input: s = "foo", t = "bar"
Output: false
```

### Example 3

```text
Input: s = "paper", t = "title"
Output: true
```

## Constraints

- `1 <= s.length <= 5 * 10^4`
- `t.length == s.length`
- `s` and `t` contain valid ASCII characters.

## Approach

TR: `s -> t` ve `t -> s` icin iki mapping dizisi tut. Ilk kez gorulen karakterleri esle, daha once gorulenlerde iki yonlu eslesme bozulursa `false` dondur.

EN: Keep two mapping arrays for `s -> t` and `t -> s`. Create mappings for new characters; if an existing mapping ever disagrees in either direction, return `false`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
