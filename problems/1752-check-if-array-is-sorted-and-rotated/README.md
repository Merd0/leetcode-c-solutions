# #1752 - Check if Array Is Sorted and Rotated

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array
- Companies: Not tracked in this repo
- Hint: A sorted-and-rotated array can have at most one place where the order drops.
- Solved: 2026-05-24
- LeetCode: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/

## Problem Statement

TR: Bir `nums` dizisi verilir. Bu dizinin, azalan olmayan sirada sirali bir dizinin sifir veya daha fazla kez dondurulmus hali olup olmadigini kontrol et.

EN: Given `nums`, check whether it can be seen as a non-decreasing sorted array rotated zero or more times.

## Starter Code (C)

```c
bool check(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Dizi sirali bir dizinin rotate edilmis hali olabiliyorsa `true`, degilse `false`.

EN: Return `true` if the array could be a rotated sorted array; otherwise return `false`.

## Examples

### Example 1

```text
Input: nums = [3,4,5,1,2]
Output: true
Explanation:
[1,2,3,4,5] can be rotated to become [3,4,5,1,2].
```

### Example 2

```text
Input: nums = [2,1,3,4]
Output: false
Explanation:
There is more than one order break, so it cannot come from one sorted rotation.
```

### Example 3

```text
Input: nums = [1,2,3]
Output: true
Explanation:
This is already sorted, so it is a rotation by 0 positions.
```

### Example 4

```text
Input: nums = [1,1,1]
Output: true
Explanation:
Duplicates are allowed, and the order never drops.
```

## Constraints

- `1 <= nums.length <= 100`
- `1 <= nums[i] <= 100`

## Approach

TR: Dizi dairesel dusunulur. Her `i` icin `nums[i] > nums[(i + 1) % numsSize]` kontrol edilir. Bu durum siranin koptugu noktadir. Sirali ve rotate edilmis bir dizide bu kopma en fazla bir kez olabilir.

EN: Treat the array as circular. For each `i`, check whether `nums[i] > nums[(i + 1) % numsSize]`. That is an order break. A sorted-and-rotated array can have at most one such break.

## Solution

- [solution.c](solution.c)
