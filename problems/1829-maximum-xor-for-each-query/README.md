# #1829 - Maximum XOR for Each Query

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Bit Manipulation, Prefix XOR
- Hint: To maximize `x ^ k` under a fixed bit width, choose `k` as the bitwise complement of `x` inside that mask.
- Solved date: 2026-07-02
- Source: https://leetcode.com/problems/maximum-xor-for-each-query/
- Note: Prefix XOR / mask practice question

## Problem Statement

TR: Sirali `nums` array'i ve `maximumBit` veriliyor. Her sorguda mevcut array'in
tum elemanlarinin XOR sonucuna bir `k` ekleyerek sonucu maksimum yap. `k`,
`0 <= k < 2^maximumBit` araliginda olmali. Her sorgudan sonra array'in son
elemani silinmis gibi devam edilir.

EN: Given a sorted array `nums` and `maximumBit`, answer one query for each
current suffix-removal state. For each query, choose `k` with
`0 <= k < 2^maximumBit` so that the XOR of all remaining numbers and `k` is as
large as possible. After each query, remove the last element.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize) {

}
```

## Parameters / Return

- `nums`: Sorted non-negative input array.
- `numsSize`: Number of elements.
- `maximumBit`: The answer `k` must fit in this many bits.
- `returnSize`: Must be set to `numsSize`.
- Returns: A malloced answer array.

## Examples

```text
Input:  nums = [0,1,1,3], maximumBit = 2
Output: [0,3,2,3]

The maximum possible XOR value inside 2 bits is 3.
```

```text
Input:  nums = [2,3,4,7], maximumBit = 3
Output: [5,2,6,5]
```

```text
Input:  nums = [0,1,2,2,5,7], maximumBit = 3
Output: [4,3,6,4,6,7]
```

## Constraints

- `nums.length == n`
- `1 <= n <= 10^5`
- `1 <= maximumBit <= 20`
- `0 <= nums[i] < 2^maximumBit`
- `nums` is sorted in ascending order.

## Approach

For a given current XOR value `x`, the best `k` is the value that flips every
bit of `x` inside the allowed bit width.

Build the all-ones mask:

```c
int mask = (1 << maximumBit) - 1;
```

Then:

```c
k = x ^ mask;
```

because XOR with `mask` flips only the allowed bits.

The queries remove the last element each time. Instead of rebuilding XOR from
scratch, start with the XOR of the whole array, answer the query, then remove
the last value by XORing it again:

```c
current_xor ^= nums[i];
```

This works because `a ^ a = 0`.

## Complexity

- Time: `O(n)`
- Extra space: `O(n)` for the returned answer array

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
