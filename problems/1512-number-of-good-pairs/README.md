# #1512 - Number of Good Pairs

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Hash Table, Math, Counting
- Hint: A good pair needs equal values and the left index must be smaller.
- Solved date: 2026-06-22
- Source: https://leetcode.com/problems/number-of-good-pairs/
- Note: Daily practice question

## Problem Statement

TR: `nums` dizisinde `i < j` ve `nums[i] == nums[j]` kosullarini saglayan kac
index cifti oldugunu say.

EN: Count how many index pairs `(i, j)` satisfy both `i < j` and
`nums[i] == nums[j]`.

## Starter Code (C)

```c
int numIdenticalPairs(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Integer array.
- `numsSize`: Number of elements in `nums`.
- Returns the number of good pairs.

## Examples

```text
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation:
The good pairs are (0,3), (0,4), (3,4), and (2,5).
```

```text
Input: nums = [1,1,1,1]
Output: 6
```

```text
Input: nums = [1,2,3]
Output: 0
```

## Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`

## Approach

Use two loops:

- `i` selects the left index.
- `j` starts at `i + 1`, so the condition `i < j` is always true.
- When the values are equal, increase `count`.

This direct solution is easy to read and fits the small constraints.

## Further Improvement

A frequency-based solution can count pairs while scanning:

```c
answer += frequency[nums[i]];
frequency[nums[i]]++;
```

The submitted version keeps the pair rule visible.

## Complexity

- Time: `O(n^2)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
