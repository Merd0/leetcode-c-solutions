# #0165 - Compare Version Numbers

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Two Pointers, String
- Hint: Parse one revision number at a time from each version.
- Solved date: 2026-06-03
- Source: https://leetcode.com/problems/compare-version-numbers/

## Problem Statement

TR: Iki version string veriliyor. Noktalarla ayrilmis revision degerlerini soldan
saga karsilastir. `version1` buyukse `1`, `version2` buyukse `-1`, esitlerse
`0` dondur.

EN: Given two version strings, compare their revision numbers from left to right.
Return `1` if `version1` is greater, `-1` if `version2` is greater, otherwise
return `0`.

## Starter Code (C)

```c
int compareVersion(char* version1, char* version2) {

}
```

## Parameters / Return

- `version1`: first version string.
- `version2`: second version string.
- Returns comparison result: `1`, `-1`, or `0`.

## Examples

```text
Input: version1 = "1.01", version2 = "1.001"
Output: 0
Explanation: Leading zeroes do not change numeric revision values.
```

```text
Input: version1 = "1.0", version2 = "1.0.0"
Output: 0
```

```text
Input: version1 = "0.1", version2 = "1.1"
Output: -1
```

## Constraints

- `1 <= version1.length, version2.length <= 500`
- Version strings contain digits and `.`.
- Revision values fit in a 32-bit integer.

## Approach

Use two indexes. For each version, parse the current numeric revision until a
dot or string end appears. Compare the two parsed numbers. If they are equal,
skip the dot and continue.

Missing trailing revisions are treated as `0`, which is naturally handled by
the loop.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
