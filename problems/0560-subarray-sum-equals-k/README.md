# #0560 - Subarray Sum Equals K

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Hash Table, Prefix Sum
- Hint: If current prefix is `prefix`, previous prefixes equal to `prefix - k` form valid subarrays.
- Solved date: 2026-05-25
- Source: LeetCode #560

## Problem Statement

TR: Bir integer dizisi ve `k` veriliyor. Toplami `k` olan surekli alt dizilerin sayisini bul.

EN: Given an integer array and an integer `k`, return the number of continuous subarrays whose sum equals `k`.

## Starter Code (C)

```c
int subarraySum(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: input integer array.
- `numsSize`: length of `nums`.
- `k`: target subarray sum.
- Returns the number of subarrays with sum equal to `k`.

## Examples

```text
Input: nums = [1,1,1], k = 2
Output: 2
Explanation: The valid subarrays are nums[0..1] and nums[1..2].
```

```text
Input: nums = [1,2,3], k = 3
Output: 2
Explanation: The valid subarrays are [1,2] and [3].
```

## Constraints

- `1 <= nums.length <= 2 * 10^4`
- `-1000 <= nums[i] <= 1000`
- `-10^7 <= k <= 10^7`

## Approach

Keep a running prefix sum. For each position, the number of valid subarrays
ending there equals how many previous prefix sums were `prefix - k`. A small
open-addressing hash table stores prefix-sum counts.
