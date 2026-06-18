# #1431 - Kids With the Greatest Number of Candies

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array
- Hint: For each child, check whether `candies[i] + extraCandies` reaches the current maximum.
- Solved date: 2026-06-18
- Source: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
- Note: Daily practice question

## Problem Statement

TR: Her cocugun seker sayisi `candies[i]` icinde verilir. Her cocuga
`extraCandies` kadar ekstra seker verildigini tek tek dusun. Bu durumda en cok
sekere sahip cocuklardan biri olabiliyorsa `true`, olamiyorsa `false` dondur.

EN: For each child, imagine giving them all `extraCandies`. Return `true` if
that child can have at least as many candies as every other child; otherwise
return `false`.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {

}
```

## Parameters / Return

- `candies`: Current candy count for each child.
- `candiesSize`: Number of children.
- `extraCandies`: Extra candies given to one child at a time.
- `returnSize`: Must be set to `candiesSize`.
- Returns a newly allocated boolean array.

## Examples

```text
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true]
Explanation:
The current maximum is 5.
2 + 3 reaches 5, 3 + 3 passes 5, 5 + 3 passes 5, 1 + 3 stays below 5, 3 + 3 passes 5.
```

```text
Input: candies = [4,2,1,1,2], extraCandies = 1
Output: [true,false,false,false,false]
```

```text
Input: candies = [12,1,12], extraCandies = 10
Output: [true,false,true]
```

## Constraints

- `2 <= candies.length <= 100`
- `1 <= candies[i] <= 100`
- `1 <= extraCandies <= 50`

## Approach

For each child:

1. Compute `newCandy = candies[i] + extraCandies`.
2. Scan the array to see if any other value is still greater.
3. If a greater value exists, this child cannot be among the greatest.
4. Otherwise, write `true` into the answer.

The variable `hasGreater` makes the boolean meaning clear:

```c
candiesKids[i] = !hasGreater;
```

## Further Improvement

A faster version can first find the maximum candy count once, then compare
each `candies[i] + extraCandies` against that maximum. The current submitted
solution keeps the step-by-step comparison visible.

## Complexity

- Time: `O(n^2)`
- Extra space: `O(n)` for the returned array

## Solution

- [solution.c](solution.c)
