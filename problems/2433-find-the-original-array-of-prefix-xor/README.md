# #2433 - Find The Original Array of Prefix Xor

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Bit Manipulation, Prefix XOR
- Hint: Adjacent prefix XOR values reveal the original element between them.
- Solved date: 2026-07-02
- Source: https://leetcode.com/problems/find-the-original-array-of-prefix-xor/
- Note: Prefix XOR reconstruction practice question

## Problem Statement

TR: `pref` adinda prefix XOR array'i veriliyor. Orijinal `arr` array'ini geri
olustur. `pref[i]`, `arr[0]` ile `arr[i]` arasindaki tum elemanlarin XOR
sonucudur.

EN: Given a prefix XOR array `pref`, reconstruct the original array `arr` where
`pref[i]` is the XOR of all elements from `arr[0]` through `arr[i]`.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize) {

}
```

## Parameters / Return

- `pref`: Prefix XOR values.
- `prefSize`: Number of elements.
- `returnSize`: Must be set to `prefSize`.
- Returns: A malloced original array.

## Examples

```text
Input:  pref = [5,2,0,3,1]
Output: [5,7,2,3,2]

pref[1] = arr[0] ^ arr[1], so arr[1] = pref[1] ^ pref[0].
```

```text
Input:  pref = [13]
Output: [13]

The first prefix value is always the first original value.
```

## Constraints

- `1 <= pref.length <= 10^5`
- `0 <= pref[i] <= 10^6`

## Approach

The first element is direct:

```text
arr[0] = pref[0]
```

For every later index:

```text
pref[i]     = arr[0] ^ arr[1] ^ ... ^ arr[i]
pref[i - 1] = arr[0] ^ arr[1] ^ ... ^ arr[i - 1]
```

XORing these two values cancels the shared prefix:

```text
pref[i] ^ pref[i - 1] = arr[i]
```

So the solution scans once and writes:

```c
arr[i] = pref[i] ^ pref[i - 1];
```

## Complexity

- Time: `O(n)`
- Extra space: `O(n)` for the returned array

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
