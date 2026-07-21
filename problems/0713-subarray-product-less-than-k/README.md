# #0713 - Subarray Product Less Than K

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Sliding Window
- Hint: Count all valid subarrays ending at each right boundary.
- Solved date: 2026-07-14
- Source: https://leetcode.com/problems/subarray-product-less-than-k/
- Note: Variable-size sliding-window practice with a brute-force comparison

## Problem Statement

TR: Pozitif tamsayilardan olusan bir array ve `k` veriliyor. Carpimi `k`'den
kucuk olan contiguous subarray sayisini dondur.

EN: Given an array of positive integers and an integer `k`, count the contiguous
subarrays whose product is strictly less than `k`.

## Starter Code (C)

```c
int numSubarrayProductLessThanK(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: Positive input values.
- `numsSize`: Number of elements in `nums`.
- `k`: Exclusive upper bound for each subarray product.
- Returns the number of valid contiguous subarrays.

## Examples

```text
Input: nums = [10,5,2,6], k = 100
Output: 8
```

The valid subarrays are `[10]`, `[5]`, `[2]`, `[6]`, `[10,5]`, `[5,2]`,
`[2,6]`, and `[5,2,6]`.

```text
Input: nums = [1,2,3], k = 0
Output: 0
```

## Constraints

- `1 <= nums.length <= 3 * 10^4`
- `1 <= nums[i] <= 1000`
- `0 <= k <= 10^6`

## Brute-Force Approach

Start a subarray at every index and extend its right boundary one element at a
time. Each extension reuses the current product instead of multiplying the
whole subarray again.

All values are positive, so after the product reaches `k`, adding more elements
cannot make that starting position valid again. The inner loop can stop early.

```text
Time: O(n^2)
Space: O(1)
```

This approach makes the counting rule clear, but overlapping subarrays repeat
too much work.

## Sliding-Window Approach

Keep a window `[left, right]` whose product is less than `k`:

```text
1. Multiply nums[right] into the product.
2. While product >= k, divide out nums[left] and move left.
3. Add right - left + 1 to the answer.
```

Why add `right - left + 1`? Once `[left, right]` is valid, every suffix ending
at `right` is also valid because all values are positive:

```text
[left ... right]
[left + 1 ... right]
...
[right]
```

The edge case `k <= 1` returns zero immediately because a product of positive
integers can never be strictly smaller than `1`.

Embedded-C connection: this is a streaming threshold window. The algorithm
keeps only the active range and one aggregate value, then removes old samples
as soon as the threshold is violated.

## Complexity

- Brute-force time: `O(n^2)`
- Sliding-window time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution_bruteforce.c](solution_bruteforce.c)
- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
