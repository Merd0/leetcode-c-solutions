# #2090 - K Radius Subarray Averages

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Sliding Window
- Hint: Reuse the previous `2 * k + 1` window sum by removing one value and adding one value.
- Solved date: 2026-07-22
- Source: https://leetcode.com/problems/k-radius-subarray-averages/
- Note: Accepted fixed-size sliding window with the original brute-force TLE comparison

## Problem Statement

TR: Her `i` indeksi icin merkezinde `nums[i]` bulunan, solunda ve saginda `k`
eleman olan pencerenin integer ortalamasini hesapla. Tam pencere sigmiyorsa `-1`
yaz.

EN: For every index `i`, compute the integer average of the window containing
`k` values to its left, `nums[i]`, and `k` values to its right. Return `-1` when
that complete window does not fit.

## Starter Code (C)

```c
int* getAverages(int* nums, int numsSize, int k, int* returnSize) {

}
```

## Example

```text
Input:  nums = [7,4,3,9,1,8,5,2,6], k = 3
Output: [-1,-1,-1,5,4,4,-1,-1,-1]
```

The window size is:

```text
2 * k + 1 = 7
```

Only centers `3`, `4`, and `5` have three elements on both sides.

## Brute-Force Attempt - TLE

The first solution checks every center separately. When a full window fits, it
sums all values from `center - k` through `center + k`.

This produces correct answers, but adjacent centers repeat almost the entire sum:

```text
center i     -> [i-k ... i+k]
center i + 1 -> [i-k+1 ... i+k+1]
```

The two windows share `2 * k` values. Recomputing them makes the time cost
`O(n * (2k + 1))`, which becomes `O(n^2)` when `k` grows with `n`. That repeated
work caused the Time Limit Exceeded result.

## Accepted Sliding-Window Approach

Initialize every output cell to `-1`. If a complete window fits, calculate only
the first sum directly. Its center is `k`.

For every following window:

```text
sum += new right value
sum -= old left value
```

After the update, the window ending at `right` is centered at `right - k`.

The invariant is that `sum` always equals the values in the current window of
exactly `2 * k + 1` elements. Each input value enters the running sum once and
leaves it once, reducing the time to `O(n)`.

`long long` is used for the window size and sum so large inputs cannot overflow
an `int` accumulator.

Embedded-C connection: this is a centered moving-average filter. A streaming or
frame-processing implementation keeps one running aggregate instead of summing the
same neighboring samples for every output position.

## Complexity

- Brute-force TLE time: `O(n * (2k + 1))`, worst case `O(n^2)`
- Sliding-window time: `O(n)`
- Extra working space: `O(1)`, excluding the returned array

## Solutions

- [solution_bruteforce_tle.c](solution_bruteforce_tle.c)
- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
