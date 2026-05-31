# #0342 - Power of Four

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Math, Bit Manipulation, Recursion
- Hint: Keep dividing by 4 while possible.
- Solved date: 2026-05-31
- Source: LeetCode #342

## Problem Statement

TR: Bir integer `n` veriliyor. `n` bir `4` kuvveti ise `true`, degilse `false`
dondur.

EN: Given an integer `n`, return `true` if it is a power of four, otherwise
return `false`.

## Starter Code (C)

```c
bool isPowerOfFour(int n) {

}
```

## Parameters / Return

- `n`: input integer.
- Returns whether `n` can be written as `4^x`.

## Examples

```text
Input: n = 16
Output: true
```

```text
Input: n = 5
Output: false
```

```text
Input: n = 1
Output: true
```

## Constraints

- `-2^31 <= n <= 2^31 - 1`

## Approach

Negative numbers and zero cannot be powers of four. For positive numbers, keep
dividing by `4` while the number is exactly divisible. If the final value is
`1`, the original number was a power of four.

This mirrors the earlier power-of-two idea, but checks base `4` directly.
