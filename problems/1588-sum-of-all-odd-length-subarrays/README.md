# #1588 - Sum of All Odd Length Subarrays

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Prefix Sum, Brute Force
- Hint: Try every starting index and keep a running sum while the end moves right.
- Solved date: 2026-06-17
- Source: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
- Note: Daily practice question

## Problem Statement

TR: `arr` dizisindeki tum tek uzunluklu subarray'lerin toplamlarini bul ve bu
toplamlarin hepsini tek bir cevap olarak dondur.

EN: Find every contiguous subarray with odd length, add each of their sums,
and return the total.

## Starter Code (C)

```c
int sumOddLengthSubarrays(int* arr, int arrSize) {

}
```

## Parameters / Return

- `arr`: Integer array.
- `arrSize`: Number of elements in `arr`.
- Returns the total sum of all odd-length contiguous subarrays.

## Examples

```text
Input: arr = [1,4,2,5,3]
Output: 58
Explanation:
Odd-length subarrays are length 1, 3, and 5.
Their sums are 1+4+2+5+3, then 7+11+10, then 15.
Total = 58.
```

```text
Input: arr = [1,2]
Output: 3
Explanation: Only [1] and [2] have odd length.
```

```text
Input: arr = [10,11,12]
Output: 66
Explanation: Length 1 sums to 33 and length 3 sums to 33.
```

## Constraints

- `1 <= arr.length <= 100`
- `1 <= arr[i] <= 1000`

## Approach

Use two nested loops:

- `start` chooses where the subarray begins.
- `end` moves from `start` to the end of the array.
- `sum` keeps the current subarray sum as `end` grows.

For each `(start, end)` pair, the length is:

```c
end - start + 1
```

If that length is odd, add the current `sum` to `total`.

This direct version is useful because it makes the subarray idea very visible.

## Complexity

- Time: `O(n^2)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
