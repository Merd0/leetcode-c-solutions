# #1011 - Capacity To Ship Packages Within D Days

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Binary Search
- Hint: Binary search the answer, then test whether that capacity is enough.
- Solved date: 2026-07-15
- Source: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/
- Note: Medium practice question for feasibility-check thinking

## Problem Statement

TR: Paket agirliklari sirayla veriliyor. Paketlerin sirasi bozulmadan, en fazla
`days` gun icinde hepsini tasiyabilecek minimum gemi kapasitesini bul.

EN: Given package weights in fixed order, find the minimum ship capacity needed
to ship all packages within `days` days.

## Starter Code (C)

```c
int shipWithinDays(int* weights, int weightsSize, int days) {

}
```

## Parameters / Return

- `weights`: Package weights in fixed shipping order.
- `weightsSize`: Number of packages.
- `days`: Maximum allowed number of shipping days.
- Returns the minimum valid capacity.

## Examples

```text
Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
Output: 15
```

```text
Input: weights = [3,2,2,4,1,4], days = 3
Output: 6
```

## Constraints

- `1 <= days <= weights.length <= 5 * 10^4`
- `1 <= weights[i] <= 500`

## Approach

The key rule is:

```text
Package order cannot change.
```

That makes the feasibility check simple. For a guessed capacity, scan from left
to right:

```text
if the next package fits today:
    add it to today's load
else:
    start a new day with that package
```

Now search the minimum capacity.

Lower bound:

```text
left = heaviest package
```

The ship cannot carry a package heavier than its capacity.

Upper bound:

```text
right = sum of all packages
```

With this capacity, everything ships in one day.

For every `mid` capacity:

```text
neededDays <= days -> mid is enough, try smaller
neededDays > days  -> mid is too small, try larger
```

Embedded-C connection: this is a capacity planning pattern. Instead of directly
constructing the final answer, test whether a candidate buffer/bandwidth/batch
capacity can satisfy the deadline, then binary-search the smallest working
capacity.

## Complexity

- Time: `O(n log(sum(weights)))`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
