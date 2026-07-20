# #1343 - Number of Sub-arrays of Size K and Average Greater than or Equal to Threshold

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Sliding Window
- Hint: Compare the window sum with `threshold * k` instead of dividing.
- Solved date: 2026-07-19
- Source: https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/
- Note: Moving-average threshold practice

## Problem Statement

TR: Uzunlugu tam `k` olan kac subarray'in ortalamasi `threshold` veya daha
buyuk, bunu dondur.

EN: Count how many contiguous subarrays of size `k` have an average greater than
or equal to `threshold`.

## Starter Code (C)

```c
int numOfSubarrays(int* arr, int arrSize, int k, int threshold) {

}
```

## Examples

```text
Input: arr = [2,2,2,2,5,5,5,8], k = 3, threshold = 4
Output: 3
```

The valid windows are:

```text
[2,5,5], [5,5,5], [5,5,8]
```

## Approach

This is a fixed-size sliding window. Keep the sum of the current `k` elements:

```text
sum += new element
sum -= element leaving the window
```

Instead of computing average with integer division:

```text
sum / k >= threshold
```

compare against the minimum required sum:

```text
sum >= threshold * k
```

Embedded-C connection: this is a moving-average threshold detector. It mirrors
how sensor samples can be checked over a fixed window without recomputing the
whole sum every time.

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
