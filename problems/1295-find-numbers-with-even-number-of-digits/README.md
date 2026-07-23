# #1295 - Find Numbers with Even Number of Digits

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Math, Digits
- Hint: Repeatedly divide a copy of each value by 10 and count the divisions.
- Solved date: 2026-07-23
- Source: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
- Note: Basic decimal digit counting without mutating the input array

## Problem Statement

TR: Bir integer dizisinde basamak sayisi cift olan kac eleman bulundugunu dondur.

EN: Return how many values in an integer array contain an even number of decimal
digits.

## Starter Code (C)

```c
int findNumbers(int* nums, int numsSize) {

}
```

## Example

```text
Input:  nums = [12,345,2,6,7896]
Output: 2
```

`12` has two digits and `7896` has four digits, so both are counted.

## Approach

Visit every array element and copy it into a local `value` variable. Repeated
integer division by 10 removes the last decimal digit:

```text
7896 -> 789 -> 78 -> 7 -> 0
```

The number of divisions before reaching zero is the number of digits. Increment
the answer when that count is even.

The local copy is important in C. Dividing `nums[i]` directly would replace every
input value with zero. The answer would still be computable during that call, but
the function would unexpectedly destroy data owned by its caller.

The constraints contain only positive integers, so the loop always counts at least
one digit.

Embedded-C connection: decimal field widths appear in telemetry formatting,
diagnostic displays, and compact logging. Working on a local copy preserves the
original sampled or decoded value for later processing.

## Complexity

- Time: `O(n * d)`, where `d` is the maximum number of digits
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
