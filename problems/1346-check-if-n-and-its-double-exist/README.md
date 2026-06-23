# #1346 - Check If N and Its Double Exist

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table, Two Pointers, Binary Search, Sorting
- Hint: Compare two different indices, not an element with itself.
- Solved date: 2026-06-23
- Source: https://leetcode.com/problems/check-if-n-and-its-double-exist/
- Note: Daily practice question

## Problem Statement

TR: `arr` dizisinde iki farkli index sec. Birindeki deger digerindeki degerin
iki katiysa `true`, boyle bir ikili yoksa `false` dondur.

EN: Check whether there are two different indices such that one value is double
the other value. Return `true` if such a pair exists; otherwise return `false`.

## Starter Code (C)

```c
bool checkIfExist(int* arr, int arrSize) {

}
```

## Parameters / Return

- `arr`: Integer array.
- `arrSize`: Number of elements in `arr`.
- Returns whether a valid pair exists.

## Examples

```text
Input: arr = [10,2,5,3]
Output: true
Explanation: 10 is double of 5.
```

```text
Input: arr = [3,1,7,11]
Output: false
Explanation: No value is double another value in the array.
```

```text
Input: arr = [0,0]
Output: true
Explanation: The two zeroes are at different indices.
```

## Constraints

- `2 <= arr.length <= 500`
- `-1000 <= arr[i] <= 1000`

## Approach

Use two loops:

- `i` chooses the first index.
- `j` chooses the second index.
- Skip the comparison when `i == j`, because the same element cannot be reused.

For every different-index pair, check:

```c
arr[i] == 2 * arr[j]
```

If the condition is found once, return `true` immediately. If every pair is
checked without success, return `false`.

This direct solution keeps the `i != j` rule very clear.

## Complexity

- Time: `O(n^2)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
