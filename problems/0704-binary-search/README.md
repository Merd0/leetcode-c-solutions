# #0704 - Binary Search

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Binary Search
- Hint: Each comparison removes half of the remaining search area.
- Solved date: 2026-05-25
- Source: LeetCode #704

## Problem Statement

TR: Artan sirali bir integer dizisi ve `target` veriliyor. `target` varsa indexini, yoksa `-1` dondur.

EN: Given a sorted integer array and a target value, return the target index if it exists; otherwise return `-1`.

## Starter Code (C)

```c
int search(int* nums, int numsSize, int target) {

}
```

## Parameters / Return

- `nums`: sorted input array.
- `numsSize`: number of elements in `nums`.
- `target`: value to search.
- Returns the index of `target`, or `-1` if it is not found.

## Examples

```text
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
```

```text
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
```

## Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i], target <= 10^4`
- All integers in `nums` are unique.
- `nums` is sorted in ascending order.

## Approach

Use two boundaries, `left` and `right`. Check the middle index. If the middle
value is smaller than target, search the right half. If it is larger, search
the left half. Use `left + (right - left) / 2` to avoid overflow.
