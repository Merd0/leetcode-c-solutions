# #0169 - Majority Element

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Hash Table, Divide and Conquer, Sorting, Counting
- Hint: If an element appears more than `n / 2` times, it must be at the middle after sorting.
- Solved date: 2026-05-25
- Source: LeetCode #169

## Problem Statement

TR: Bir integer dizisi veriliyor. Dizide `n / 2` kereden fazla gecen elemani bul.

EN: Given an integer array, return the element that appears more than half of the time.

## Starter Code (C)

```c
int majorityElement(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: input integer array.
- `numsSize`: number of elements in `nums`.
- Returns the majority element.

## Examples

```text
Input: nums = [3,2,3]
Output: 3
```

```text
Input: nums = [2,2,1,1,1,2,2]
Output: 2
```

## Constraints

- `1 <= nums.length <= 5 * 10^4`
- `-10^9 <= nums[i] <= 10^9`
- A majority element always exists.

## Approach

Sort the array. Since the majority element takes more than half of the array,
the middle index must contain that element.
