# #0069 - Sqrt(x)

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Math, Binary Search
- Hint: Search for the largest integer whose square is not greater than `x`.
- Solved date: 2026-05-25
- Source: LeetCode #69

## Problem Statement

TR: Negatif olmayan bir integer `x` veriliyor. `sqrt(x)` degerinin asagi yuvarlanmis integer sonucunu dondur.

EN: Given a non-negative integer `x`, return the integer part of its square root.

## Starter Code (C)

```c
int mySqrt(int x) {

}
```

## Parameters / Return

- `x`: non-negative integer.
- Returns the floor value of `sqrt(x)`.

## Examples

```text
Input: x = 4
Output: 2
```

```text
Input: x = 8
Output: 2
Explanation: sqrt(8) is about 2.828, so the integer part is 2.
```

## Constraints

- `0 <= x <= 2^31 - 1`

## Approach

Binary search over possible square root values. When `mid * mid` is smaller
than `x`, store `mid` as the best current answer and search the right half.
Use `long long` for the square to avoid integer overflow.
