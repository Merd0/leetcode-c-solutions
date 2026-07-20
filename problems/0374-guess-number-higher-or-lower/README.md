# #0374 - Guess Number Higher or Lower

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Binary Search, Interactive
- Hint: Use the API response to decide which half still contains the answer.
- Solved date: 2026-05-25
- Source: https://leetcode.com/problems/guess-number-higher-or-lower/

## Problem Statement

TR: `1` ile `n` arasinda gizli bir sayi var. `guess` API'si tahminin buyuk mu kucuk mu oldugunu soyler. Gizli sayiyi bul.

EN: A hidden number exists between `1` and `n`. Use the `guess` API to find the picked number.

## Starter Code (C)

```c
/**
 * Forward declaration of guess API.
 * int guess(int num);
 */
int guessNumber(int n) {

}
```

## Parameters / Return

- `n`: upper bound of the search range.
- `guess(num)`: LeetCode-provided API. It returns `0`, `1`, or `-1`.
- Returns the picked number.

## Examples

```text
Input: n = 10, pick = 6
Output: 6
```

```text
Input: n = 1, pick = 1
Output: 1
```

```text
Input: n = 2, pick = 1
Output: 1
```

## Constraints

- `1 <= n <= 2^31 - 1`
- `1 <= pick <= n`

## Approach

Run binary search from `1` to `n`. If `guess(mid)` says the pick is higher,
move `left` to `mid + 1`. If it says the pick is lower, move `right` to
`mid - 1`. Return `mid` when the API returns `0`.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
