# #2161 - Partition Array According to Given Pivot

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Two Pointers, Simulation
- Hint: Preserve order by collecting values in three groups: smaller, equal, greater.
- Solved date: 2026-06-08
- Source: https://leetcode.com/problems/partition-array-according-to-given-pivot/
- Note: Daily question

## Problem Statement

TR: Array'i, `pivot` degerinden kucukler once, esitler ortada ve buyukler
sonda olacak bicimde yeniden duzenle. Kucuk ve buyuk elemanlarin kendi
aralarindaki goreli sirasi korunmalidir.

EN: Rearrange the array so values smaller than `pivot` come first, equal
values come next, and greater values come last. Preserve the original relative
order inside the smaller and greater groups.

## Starter Code (C)

```c
int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements.
- `pivot`: Value used to divide the three groups.
- `returnSize`: Set to `numsSize`.
- Returns a malloced rearranged array; the caller owns and frees it.

## Examples

```text
Input: nums = [9,12,5,10,14,3,10], pivot = 10
Output: [9,5,3,10,10,12,14]
```

The smaller values remain in the order `[9,5,3]`, while the greater values
remain in the order `[12,14]`.

```text
Input: nums = [-3,4,3,2], pivot = 2
Output: [-3,2,4,3]
```

## Constraints

- `1 <= nums.length <= 10^5`
- `-10^6 <= nums[i] <= 10^6`
- `pivot` is guaranteed to appear in `nums`

## Approach

Allocate the required result array and keep a write index:

1. Scan from left to right and copy values smaller than `pivot`.
2. Scan again and copy values equal to `pivot`.
3. Scan once more and copy values greater than `pivot`.

Each group is read from left to right, so its relative order is preserved.
This is a stable three-way partition.

## Complexity

- Time: `O(n)`
- Extra space: `O(n)` for the returned array

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
