# #1652 - Defuse the Bomb

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Sliding Window
- Hint: Use modulo for circular indexes.
- Solved date: 2026-07-20
- Source: https://leetcode.com/problems/defuse-the-bomb/
- Note: Ring-buffer and circular-window practice

## Problem Statement

TR: Circular bir `code` array'i veriliyor. `k > 0` ise her elemani sonraki `k`
elemanin toplamiyla, `k < 0` ise onceki `|k|` elemanin toplamiyla, `k == 0` ise
`0` ile degistir.

EN: Given a circular array, replace every element with the sum of the next `k`
elements if `k > 0`, the previous `|k|` elements if `k < 0`, or zero if `k == 0`.

## Starter Code (C)

```c
int* decrypt(int* code, int codeSize, int k, int* returnSize) {

}
```

## Examples

```text
Input: code = [5,7,1,4], k = 3
Output: [12,10,16,13]
```

```text
Input: code = [2,4,9,3], k = -2
Output: [12,5,6,13]
```

## Brute-Force Approach

For each index, walk `|k|` circular steps and sum the selected values.

The important C detail is avoiding negative modulo:

```text
(i - step + codeSize) % codeSize
```

## Sliding Window Approach

The optimized version keeps the circular window sum and updates it by removing
one outgoing value and adding one incoming value.

For `k > 0`, index `i` uses the window:

```text
i+1 ... i+k
```

For `k < 0`, index `i` uses:

```text
i-|k| ... i-1
```

Embedded-C connection: this is direct ring-buffer indexing and rolling-sum
state, a common pattern for sensor windows and circular buffers.

## Complexity

- Brute force time: `O(n * |k|)`
- Sliding window time: `O(n)`
- Space: `O(n)` for the returned array

## Solution

- [solution_bruteforce.c](solution_bruteforce.c)
- [solution.c](solution.c)
