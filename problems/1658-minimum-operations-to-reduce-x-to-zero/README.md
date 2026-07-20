# #1658 - Minimum Operations to Reduce X to Zero

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Prefix/Suffix Thinking, Sliding Window
- Hint: Instead of choosing what to remove, find the longest middle part to keep.
- Solved date: 2026-07-07
- Source: https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/

## Problem Statement

TR: Her operasyonda dizinin en solundan veya en sagindan bir eleman silebilirsin.
Sildigin eleman `x` degerinden duser. `x` tam olarak `0` olacak sekilde minimum
operasyon sayisini bul.

EN: Each operation removes one value from the left or right edge and subtracts
it from `x`. Return the minimum number of operations needed to make `x` exactly
zero.

## Starter Code (C)

```c
int minOperations(int* nums, int numsSize, int x) {

}
```

## Example

```text
Input: nums = [1,1,4,2,3], x = 5
Output: 2
```

Explanation:

```text
Remove 3 and 2 from the right side.
```

## Approach

Direct thinking says: choose a prefix from the left and a suffix from the right
whose sum is exactly `x`.

The cleaner transformation is:

```text
removed sum = x
kept middle sum = total - x
```

To minimize removals, keep the longest subarray whose sum is `total - x`.

Because all numbers are positive, a sliding window works:

1. Grow the window with `right`.
2. If `sum > target`, move `left` forward.
3. If `sum == target`, update the longest kept length.

The answer is:

```text
numsSize - longestKeptLength
```

Embedded-C connection: this is buffer-window reasoning. Instead of simulating
every removal order, define the valid region that remains and track its running
sum.

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
