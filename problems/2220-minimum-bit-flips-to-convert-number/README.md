# #2220 - Minimum Bit Flips to Convert Number

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Bit Manipulation
- Hint: XOR marks exactly the bit positions that are different.
- Solved date: 2026-05-31
- Source: https://leetcode.com/problems/minimum-bit-flips-to-convert-number/

## Problem Statement

TR: `start` ve `goal` veriliyor. `start` sayisini `goal` yapmak icin kac bit
flip gerektigini bul.

EN: Given two integers `start` and `goal`, return the minimum number of bit
flips needed to convert `start` into `goal`.

## Starter Code (C)

```c
int minBitFlips(int start, int goal) {

}
```

## Parameters / Return

- `start`: original integer.
- `goal`: target integer.
- Returns the number of different bit positions.

## Examples

```text
Input: start = 10, goal = 7
Output: 3
Explanation: 10 is 1010 and 7 is 0111.
```

```text
Input: start = 3, goal = 4
Output: 3
```

## Constraints

- `0 <= start, goal <= 10^9`

## Approach

Use XOR:

```c
diff = start ^ goal;
```

Every `1` bit in `diff` means that bit is different between `start` and `goal`.
Then count set bits using:

```c
diff = diff & (diff - 1);
```

which removes the rightmost set bit each loop.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
