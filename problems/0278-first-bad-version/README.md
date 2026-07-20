# #0278 - First Bad Version

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Binary Search, Interactive
- Hint: When `mid` is bad, the first bad version is at `mid` or to its left.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/first-bad-version/

## Problem Statement

TR: `1` ile `n` arasinda versiyonlar var. Bir versiyon bad olduktan sonra sonraki tum versiyonlar da bad olur. Ilk bad versiyonu bul.

EN: Versions from `1` to `n` are ordered. Once a bad version appears, every later version is also bad. Find the first bad version.

## Starter Code (C)

```c
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {

}
```

## Parameters / Return

- `n`: last version number.
- `isBadVersion(version)`: LeetCode-provided API.
- Returns the first version that is bad.

## Examples

```text
Input: n = 5, bad = 4
Output: 4
Explanation: Versions 4 and 5 are bad, so 4 is the first bad version.
```

```text
Input: n = 1, bad = 1
Output: 1
```

## Constraints

- `1 <= bad <= n <= 2^31 - 1`

## Approach

This is a lower-bound binary search. If `mid` is bad, keep it as a candidate by
moving `right` to `mid`. If `mid` is good, the first bad version must be after
it, so move `left` to `mid + 1`.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
