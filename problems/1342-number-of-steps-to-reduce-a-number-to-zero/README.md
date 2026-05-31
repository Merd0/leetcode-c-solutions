# #1342 - Number of Steps to Reduce a Number to Zero

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Math, Bit Manipulation
- Hint: Even numbers can be divided by two; odd numbers need one subtract step.
- Solved date: 2026-05-31
- Source: LeetCode #1342

## Problem Statement

TR: Negatif olmayan bir integer `num` veriliyor. Sayi ciftse `2`'ye bol, tekse
`1` cikar. Sayi `0` olana kadar kac adim gerektigini dondur.

EN: Given a non-negative integer `num`, repeatedly divide it by `2` when it is
even and subtract `1` when it is odd. Return the number of steps needed to reach
`0`.

## Starter Code (C)

```c
int numberOfSteps(int num) {

}
```

## Parameters / Return

- `num`: input non-negative integer.
- Returns the number of operations needed to reduce it to zero.

## Examples

```text
Input: num = 14
Output: 6
Explanation: 14 -> 7 -> 6 -> 3 -> 2 -> 1 -> 0.
```

```text
Input: num = 8
Output: 4
Explanation: 8 -> 4 -> 2 -> 1 -> 0.
```

## Constraints

- `0 <= num <= 10^6`

## Approach

Loop until `num` becomes zero. If it is even, divide by two. If it is odd,
subtract one. This is the direct simulation of the problem.

Bitwise connection: checking even/odd can also be written as `num & 1`.
