# #0367 - Valid Perfect Square

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Math, Binary Search
- Hint: Avoid `mid * mid` overflow by comparing with `num / mid`.
- Solved date: 2026-05-25
- Source: LeetCode #367

## Problem Statement

TR: Pozitif bir integer veriliyor. Bu sayi bir tam sayinin karesi ise `true`, degilse `false` dondur.

EN: Given a positive integer, return whether it is a perfect square.

## Starter Code (C)

```c
bool isPerfectSquare(int num) {

}
```

## Parameters / Return

- `num`: positive integer.
- Returns `true` if `num` is a perfect square, otherwise returns `false`.

## Examples

```text
Input: num = 16
Output: true
Explanation: 4 * 4 = 16.
```

```text
Input: num = 14
Output: false
```

## Constraints

- `1 <= num <= 2^31 - 1`

## Approach

Search possible roots from `1` to `num`. Instead of multiplying `mid * mid`,
compare `mid` with `num / mid` and also check `num % mid == 0` for exact
division.
