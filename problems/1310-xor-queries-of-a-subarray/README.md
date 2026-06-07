# #1310 - XOR Queries of a Subarray

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Bit Manipulation, Prefix XOR
- Hint: XOR has the same cancellation property that makes prefix sums useful.
- Solved date: 2026-06-07
- Source: https://leetcode.com/problems/xor-queries-of-a-subarray/

## Problem Statement

TR: Her query `[left, right]` icin `arr[left]` ile `arr[right]` arasindaki tum
elemanlarin XOR sonucunu hesapla ve cevap array'ini dondur.

EN: For each query `[left, right]`, return the XOR of all array elements in that
inclusive range.

## Starter Code (C)

```c
int* xorQueries(
    int* arr,
    int arrSize,
    int** queries,
    int queriesSize,
    int* queriesColSize,
    int* returnSize
) {

}
```

## Parameters / Return

- `arr`: Input values.
- `queries[i]`: Inclusive range `[left, right]`.
- `returnSize`: Set to `queriesSize`.
- Returns a malloced answer array.

## Examples

```text
Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
Output: [2,7,14,8]
```

```text
Input: arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
Output: [8,0,4,4]
```

## Constraints

- `1 <= arr.length, queries.length <= 3 * 10^4`
- `1 <= arr[i] <= 10^9`
- `queries[i].length == 2`
- `0 <= left <= right < arr.length`

## First Attempt: Brute Force

The first solution XORed every element inside every query range:

```text
for each query:
    for j from left to right:
        result ^= arr[j]
```

This is logically correct, but in the worst case it performs roughly:

```text
3 * 10^4 queries * 3 * 10^4 elements
```

That can approach `9 * 10^8` operations, so it receives TLE.

- [brute_force_tle.c](brute_force_tle.c)

## Accepted Approach: Prefix XOR

Build:

```text
prefix[0] = 0
prefix[i + 1] = prefix[i] XOR arr[i]
```

Then:

```text
rangeXor(left, right) = prefix[right + 1] XOR prefix[left]
```

The values before `left` occur in both prefixes and cancel because `x XOR x`
equals zero. Preprocessing costs `O(n)`, then every query is answered in `O(1)`.

## Complexity

- Time: `O(n + q)`
- Extra space: `O(n)` for the prefix array

## Solution

- [solution.c](solution.c)
