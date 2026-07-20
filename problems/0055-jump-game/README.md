# #0055 - Jump Game

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Dynamic Programming, Greedy
- Hint: Do not try every jump path; keep the farthest reachable index.
- Solved date: 2026-07-12
- Source: https://leetcode.com/problems/jump-game/
- Note: Medium practice question

## Problem Statement

TR: `nums[i]`, `i` indexinden en fazla kac adim ileri gidebilecegini soyler.
Index `0`'dan baslayarak son indexe ulasip ulasamayacagini dondur.

EN: Each `nums[i]` tells how far you may jump from index `i`. Starting at index
`0`, return whether you can reach the last index.

## Starter Code (C)

```c
bool canJump(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Jump lengths for each index.
- `numsSize`: Number of elements.
- Returns `true` if the last index can be reached.

## Examples

```text
Input: nums = [2,3,1,1,4]
Output: true
```

From index `0`, you can reach index `1`, and index `1` can reach the end.

```text
Input: nums = [3,2,1,0,4]
Output: false
```

The reachable range gets stuck at index `3`, so index `4` cannot be reached.

## Constraints

- `1 <= nums.length <= 10^4`
- `0 <= nums[i] <= 10^5`

## Approach

The tempting thought is:

```text
If nums[i] is 3, should I jump 1, 2, or 3 steps?
```

The greedy solution avoids choosing paths one by one. Instead, keep one value:

```text
farthest = the farthest index reachable so far
```

For every index `i`:

1. If `i > farthest`, this index cannot be reached, so return `false`.
2. Otherwise, update:

```text
farthest = max(farthest, i + nums[i])
```

This works because once an index is inside the reachable range, the loop will
naturally check whether it extends that range farther.

The extra first-element check is not required for the greedy logic, but it makes
the important edge case explicit:

```text
nums = [0, 1] -> false
nums = [0]    -> true
```

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
