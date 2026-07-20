# #0231 - Power of Two

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Math, Bit Manipulation, Recursion
- Hint: A positive power of two has exactly one set bit.
- Solved date: 2026-05-29
- Source: https://leetcode.com/problems/power-of-two/

## Problem Statement

TR: Bir integer veriliyor. Bu sayinin 2'nin kuvveti olup olmadigini dondur.

EN: Given an integer, return whether it is a power of two.

## Starter Code (C)

```c
bool isPowerOfTwo(int n) {

}
```

## Parameters / Return

- `n`: input integer.
- Returns `true` if `n` is a power of two, otherwise `false`.

## Examples

```text
Input: n = 1
Output: true
Explanation: 2^0 = 1.
```

```text
Input: n = 16
Output: true
Explanation: 2^4 = 16.
```

```text
Input: n = 3
Output: false
```

## Constraints

- `-2^31 <= n <= 2^31 - 1`

## Approach

The active solution repeatedly divides by 2 while the number is even. If the
final value becomes `1`, the original number was a power of two.

The classic bit trick is:

```c
return n > 0 && (n & (n - 1)) == 0;
```

That works because powers of two have exactly one `1` bit, and `n & (n - 1)`
removes the lowest set bit.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
