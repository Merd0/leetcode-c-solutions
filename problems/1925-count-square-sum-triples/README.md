# #1925 - Count Square Sum Triples

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Math, Enumeration, Brute Force
- Hint: Try every possible `a`, `b`, and `c` from `1` to `n`.
- Solved date: 2026-06-18
- Source: https://leetcode.com/problems/count-square-sum-triples/
- Note: Daily practice question

## Problem Statement

TR: `1` ile `n` arasindaki `a`, `b`, `c` sayilari icin
`a * a + b * b == c * c` kosulunu saglayan kac sirali uclu oldugunu bul.

EN: Count how many ordered triples `(a, b, c)` using values from `1` to `n`
make the equation `a * a + b * b == c * c` true.

## Starter Code (C)

```c
int countTriples(int n) {

}
```

## Parameters / Return

- `n`: Upper bound for `a`, `b`, and `c`.
- Returns the number of ordered triples that satisfy the square-sum rule.

## Examples

```text
Input: n = 5
Output: 2
Explanation:
3 * 3 + 4 * 4 == 5 * 5
4 * 4 + 3 * 3 == 5 * 5
Both orders are counted.
```

```text
Input: n = 10
Output: 4
Explanation: The valid ordered triples come from (3,4,5) and (6,8,10), with both a/b orders.
```

## Constraints

- `1 <= n <= 250`

## Approach

Use three loops:

- `i` represents `a`.
- `j` represents `b`.
- `z` represents `c`.

For each combination, check whether:

```c
i * i + j * j == z * z
```

When the condition is true, increase `count`.

This brute-force solution is easy to reason about and is enough for learning
the problem rule clearly.

## Complexity

- Time: `O(n^3)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
