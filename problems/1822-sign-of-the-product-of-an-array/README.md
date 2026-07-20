# #1822 - Sign of the Product of an Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Math, Counting
- Hint: The exact product is not needed; only zero and negative count matter.
- Solved date: 2026-06-17
- Source: https://leetcode.com/problems/sign-of-the-product-of-an-array/
- Note: Daily practice question

## Problem Statement

TR: `nums` dizisindeki tum elemanlar carpilsa sonucun isareti ne olur?
Carpim pozitifse `1`, negatifse `-1`, sifirsa `0` dondur.

EN: If all values in `nums` were multiplied together, return the sign of that
product. Return `1` for positive, `-1` for negative, and `0` for zero.

## Starter Code (C)

```c
int arraySign(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Integer array.
- `numsSize`: Number of elements in `nums`.
- Returns the sign of the product without needing to store the product.

## Examples

```text
Input: nums = [-1,-2,-3,-4,3,2,1]
Output: 1
Explanation: There are 4 negative numbers. An even negative count makes the product positive.
```

```text
Input: nums = [1,5,0,2,-3]
Output: 0
Explanation: Any product containing 0 becomes 0.
```

```text
Input: nums = [-1,1,-1,1,-1]
Output: -1
Explanation: There are 3 negative numbers, so the product is negative.
```

## Constraints

- `1 <= nums.length <= 1000`
- `-100 <= nums[i] <= 100`

## Approach

Do not multiply all values. The product can become very large, and the question
only asks for its sign.

Scan the array once:

- If any value is `0`, return `0` immediately.
- Count how many values are negative.
- If the negative count is even, the product is positive.
- If the negative count is odd, the product is negative.

This keeps the solution simple and avoids overflow.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
