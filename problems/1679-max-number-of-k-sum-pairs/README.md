# #1679 - Max Number of K-Sum Pairs

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Hash Table, Two Pointers, Sorting
- Hint: After sorting, use the smallest and largest remaining values to decide which pointer should move.
- Solved date: 2026-06-30
- Source: https://leetcode.com/problems/max-number-of-k-sum-pairs/
- Note: Medium practice question

## Problem Statement

TR: Bir integer array ve `k` verilir. Toplami `k` olan ikili ciftler olustur.
Her eleman en fazla bir kere kullanilabilir. Olusturulabilecek maksimum cift
sayisini dondur.

EN: Given an integer array and `k`, form pairs whose sum is exactly `k`. Each
element can be used at most once. Return the maximum number of pairs.

## Starter Code (C)

```c
int maxOperations(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: Input array.
- `numsSize`: Number of elements.
- `k`: Required pair sum.
- Returns: Maximum number of valid pairs.

## Examples

```text
Input:  nums = [1,2,3,4], k = 5
Output: 2

Pairs: (1,4), (2,3)
```

```text
Input:  nums = [3,1,3,4,3], k = 6
Output: 1

Only one pair can be formed: (3,3)
```

## Constraints

- `1 <= nums.length <= 100000`
- `1 <= nums[i] <= 1000000000`
- `1 <= k <= 1000000000`

## Initial Brute Force Idea

The first idea is to try every pair and mark used indices:

```text
for i:
    for j after i:
        if nums[i] + nums[j] == k and both unused:
            mark both used
            count++
```

This can work on small inputs, but it checks too many combinations:

```text
Time: O(n^2)
```

If `n = 100000`, nested loops are not realistic. This is the main TLE signal:

```text
If the solution checks all pairs, and n can be around 100000, look for sorting,
two pointers, hashing, or binary search.
```

## Optimized Approach

Sort the array first. Then keep two pointers:

```text
left  = smallest remaining value
right = largest remaining value
```

At each step:

- If `nums[left] + nums[right] == k`, a pair is found. Use both values.
- If the sum is smaller than `k`, move `left` right to get a larger value.
- If the sum is greater than `k`, move `right` left to get a smaller value.

This works because sorting gives direction. We do not need a separate `used`
array; moving the pointers means those values are already consumed or skipped.

## Complexity

- Time: `O(n log n)` because of sorting.
- Extra space: `O(1)` besides the sort implementation.
- Note: The solution sorts `nums` in place.

## Solutions

- [solution.c](solution.c) - optimized sort + two pointers
- [brute_force_tle.c](brute_force_tle.c) - learning attempt, correct idea but too slow
