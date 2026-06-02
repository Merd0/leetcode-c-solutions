# #1318 - Minimum Flips to Make a OR b Equal to c

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Bit Manipulation
- Hint: Compare `a`, `b`, and `c` one bit at a time.
- Solved date: 2026-06-02
- Source: LeetCode #1318

## Problem Statement

TR: `a`, `b`, `c` veriliyor. `a | b == c` olacak sekilde `a` ve `b` icinde kac
bit flip gerekir, minimum sayiyi dondur.

EN: Given integers `a`, `b`, and `c`, return the minimum number of bit flips
needed in `a` and `b` so that `(a OR b) == c`.

## Starter Code (C)

```c
int minFlips(int a, int b, int c) {

}
```

## Parameters / Return

- `a`: first integer.
- `b`: second integer.
- `c`: target OR result.
- Returns the minimum number of bit flips.

## Examples

```text
Input: a = 2, b = 6, c = 5
Output: 3
```

```text
Input: a = 4, b = 2, c = 7
Output: 1
```

```text
Input: a = 1, b = 2, c = 3
Output: 0
```

## Constraints

- `1 <= a, b, c <= 10^9`

## Approach

Process the numbers bit by bit from right to left.

- If `cbit == 1`, at least one of `abit` or `bbit` must be `1`.
- If `cbit == 0`, both `abit` and `bbit` must be `0`.

After checking one bit, shift all three numbers right and continue.
