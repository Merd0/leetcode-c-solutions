# #1539 - Kth Missing Positive Number

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Two Pointers, Simulation
- Hint: Move through positive integers and the sorted array with separate indexes.
- Solved date: 2026-07-29
- Source: https://leetcode.com/problems/kth-missing-positive-number/
- Note: Ordered-sequence comparison with a missing-value counter

## Problem Statement

TR: Strictly increasing pozitif integer dizisinde bulunmayan `k`inci pozitif
sayiyi dondur.

EN: Return the `k`th positive integer that does not appear in a strictly increasing
positive integer array.

## Starter Code (C)

```c
int findKthPositive(int* arr, int arrSize, int k) {

}
```

## Example

```text
Input:  arr = [2,3,4,7,11], k = 5
Output: 9
```

The missing positive values begin with:

```text
1, 5, 6, 8, 9, 10, 12, ...
```

The fifth missing value is `9`.

## Approach

Maintain three pieces of state:

```text
current      -> positive integer currently being checked
index        -> next unconsumed position in arr
missingCount -> number of missing values found so far
```

If `arr[index] == current`, the current positive integer exists in the array. Move
`index` forward without increasing the missing count. Otherwise, `current` is absent,
so increase `missingCount` and return when it reaches `k`.

The comparison must use the current element:

```c
arr[index] == current
```

Using `arr == current` would compare the array pointer with an integer rather than
comparing an array value.

The condition checks `index < arrSize` first. C evaluates `&&` from left to right
and short-circuits, so `arr[index]` is never read after the array is exhausted.
Once that happens, every later `current` value is absent and continues increasing
the missing count until the answer is reached.

The invariant is that every positive integer smaller than `current` has been
classified exactly once as present or missing, while `index` points to the first
array value not yet consumed.

Embedded-C connection: comparing an expected sequence counter with received ordered
IDs is a basic way to detect missing packets, frames, or sample numbers.

## Complexity

- Time: `O(answer)`, because every positive integer through the answer is checked
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
