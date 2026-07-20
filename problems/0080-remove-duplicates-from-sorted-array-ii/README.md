# #0080 - Remove Duplicates from Sorted Array II

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Two Pointers
- Hint: Since the array is sorted, compare the new value with the value written two positions before.
- Solved date: 2026-06-29
- Source: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
- Note: Medium practice question

## Problem Statement

TR: Sirali bir integer array verilir. Her degerden en fazla iki tane kalacak
sekilde array'i in-place duzenle ve yeni uzunlugu dondur.

EN: Given a sorted integer array, modify it in place so that each value appears
at most twice. Return the new length.

## Starter Code (C)

```c
int removeDuplicates(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: Sorted input array, modified in place.
- `numsSize`: Number of elements in `nums`.
- Returns: The new valid length `k`.

Only the first `k` elements of `nums` matter after the function returns.

## Examples

```text
Input:  nums = [1,1,1,2,2,3]
Output: 5

First 5 values become:
[1,1,2,2,3]
```

```text
Input:  nums = [0,0,1,1,1,1,2,3,3]
Output: 7

First 7 values become:
[0,0,1,1,2,3,3]
```

## Constraints

- `1 <= nums.length <= 30000`
- `-10000 <= nums[i] <= 10000`
- `nums` is sorted in non-decreasing order.

## Initial Counting Idea

A frequency array may come to mind first, but it is not a good fit here:

- `nums[i]` can be negative, so using it directly as an index is unsafe.
- The problem asks us to rewrite `nums` in place, not only count how many values remain.
- The input is already sorted, so we can solve it without extra memory.

## Approach

Use a write index:

```text
write = next position where we can place a kept value
i     = current read position
```

For every value:

```text
If write < 2, keep it.
Otherwise, keep nums[i] only if nums[i] != nums[write - 2].
```

Why `write - 2`?

If the new value is equal to the value two positions before the write index,
then two copies of that value have already been written. A third copy should be
skipped.

Example:

```text
nums = [1,1,1,2,2,3]

write 0 -> keep first 1
write 1 -> keep second 1
next 1  -> nums[i] == nums[write - 2], skip
next 2  -> different from nums[0], keep
next 2  -> different from nums[1], keep
next 3  -> different from nums[2], keep
```

Result:

```text
[1,1,2,2,3]
```

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
