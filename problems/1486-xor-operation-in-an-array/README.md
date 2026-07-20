# #1486 - XOR Operation in an Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Math, Bit Manipulation
- Hint: Generate each value with `start + 2 * i` and XOR it into one accumulator.
- Solved date: 2026-06-08
- Source: https://leetcode.com/problems/xor-operation-in-an-array/

## Problem Statement

TR: Uzunlugu `n` olan sanal bir array'de `nums[i] = start + 2 * i` olarak
tanımlanan tum degerlerin bitwise XOR sonucunu dondur.

EN: Consider an array of length `n` where `nums[i] = start + 2 * i`. Return
the bitwise XOR of every generated value.

## Starter Code (C)

```c
int xorOperation(int n, int start) {

}
```

## Parameters / Return

- `n`: Number of generated values.
- `start`: First value in the sequence.
- Returns the XOR of all `start + 2 * i` values.

## Examples

```text
Input: n = 5, start = 0
Generated values: [0,2,4,6,8]
Output: 8
```

```text
Input: n = 4, start = 3
Generated values: [3,5,7,9]
Output: 8
```

## Constraints

- `1 <= n <= 1000`
- `0 <= start <= 1000`

## Approach

Keep one accumulator initialized to zero. For every index `i`, calculate
`start + 2 * i` and XOR it into the accumulator.

There is no need to allocate the described array because each value can be
generated and consumed immediately.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
