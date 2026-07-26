# #1299 - Replace Elements with Greatest Element on Right Side

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Prefix/Suffix Thinking
- Hint: Scan from right to left while carrying the greatest value already seen.
- Solved date: 2026-07-26
- Source: https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
- Note: Suffix-maximum state carried through one reverse pass

## Problem Statement

TR: Dizideki her elemani sag tarafinda bulunan en buyuk elemanla degistir. Son
elemanin saginda deger olmadigi icin sonucuna `-1` yaz.

EN: Replace every array element with the greatest value strictly to its right.
The final position receives `-1`.

## Starter Code (C)

```c
int* replaceElements(int* arr, int arrSize, int* returnSize) {

}
```

## Example

```text
Input:  arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]
```

## Brute-Force Idea

For every index, scan all values to its right and select the maximum. This is
correct, but the same suffix is visited repeatedly:

```text
index 0 -> scan 1 through n - 1
index 1 -> scan 2 through n - 1
index 2 -> scan 3 through n - 1
```

The nested scans cost `O(n^2)`. Using `left` and `right` indexes does not reduce
that cost unless one boundary movement permanently eliminates repeated work.

## Reverse-Scan Approach

Scan from right to left and carry one variable named `rightMax`.

At the start of iteration `i`, `rightMax` is the greatest value in the strict
suffix `arr[i + 1..n - 1]`. Therefore it is the answer for index `i`.

The order of these two operations matters:

```text
1. result[i] = rightMax
2. rightMax = max(rightMax, arr[i])
```

If `arr[i]` were added first, an element could incorrectly become its own right-side
maximum. After writing the answer, the current value joins the suffix state used by
the next index to the left.

Embedded-C connection: reverse scans can build suffix limits, future thresholds,
or calibration envelopes while retaining only one aggregate value.

## Complexity

- Brute-force time: `O(n^2)`
- Reverse-scan time: `O(n)`
- Extra working space: `O(1)`, excluding the returned array

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
