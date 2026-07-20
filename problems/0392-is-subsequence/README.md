# #0392 - Is Subsequence

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Two Pointers, String
- Hint: Walk through `t` once while trying to match characters of `s` in order.
- Solved date: 2026-05-21
- Source: https://leetcode.com/problems/is-subsequence/

## Problem Statement

TR: `s` stringinin, `t` stringinden bazi karakterler silinerek ama kalan karakterlerin sirasi bozulmadan elde edilip edilemeyecegini kontrol et.

EN: Check whether `s` can be obtained from `t` by deleting some characters while keeping the remaining order unchanged.

## Starter Code (C)

```c
bool isSubsequence(char* s, char* t) {

}
```

## Parameters

- `s`: Candidate subsequence.
- `t`: Source string to scan.

## Return

TR: `s`, `t` icinde sirali sekilde bulunabiliyorsa `true`, degilse `false`.

EN: Return `true` if every character of `s` can be matched in order inside `t`; otherwise return `false`.

## Examples

### Example 1

```text
Input: s = "abc", t = "ahbgdc"
Output: true
```

### Example 2

```text
Input: s = "axc", t = "ahbgdc"
Output: false
```

## Constraints

- `0 <= s.length <= 100`
- `0 <= t.length <= 10^4`
- `s` and `t` contain lowercase English letters.

## Approach

TR: `s` karakterlerini sirayla gez. Her karakter icin `t` icindeki aramaya kaldigin yerden devam et. Bir karakter bulunamazsa cevap `false` olur.

EN: Iterate through the characters of `s`. For each character, continue searching in `t` from the previous position. If any character cannot be found, return `false`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
