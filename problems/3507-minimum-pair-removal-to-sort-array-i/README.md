# #3507 - Minimum Pair Removal to Sort Array I

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Simulation, Heap, Linked List
- Hint: The constraints allow simulating the required operation directly.
- Solved date: 2026-05-30
- Source: LeetCode #3507

## Problem Statement

TR: Bir array veriliyor. Her operasyonda toplami en kucuk olan bitisik cifti
sec, bu cifti toplamlari ile degistir ve array boyutunu bir azalt. Array
non-decreasing hale gelene kadar gereken minimum operasyon sayisini dondur.
Esit toplam varsa soldaki cift secilir.

EN: Given an array, repeatedly select the adjacent pair with the minimum sum,
replace that pair with its sum, and shrink the array by one. Return the number
of operations needed until the array becomes non-decreasing. If multiple pairs
have the same sum, choose the leftmost pair.

## Starter Code (C)

```c
int minimumPairRemoval(int* nums, int numsSize) {

}
```

## Parameters / Return

- `nums`: input array, modified during simulation.
- `numsSize`: number of elements in `nums`.
- Returns the number of operations needed.

## Examples

```text
Input: nums = [5,2,3,1]
Output: 2
Explanation: Merge (3,1) first, then merge (2,4).
```

```text
Input: nums = [1,2,2]
Output: 0
Explanation: The array is already non-decreasing.
```

## Constraints

- `1 <= nums.length <= 50`
- `-1000 <= nums[i] <= 1000`

## Approach

Simulate exactly what the problem asks:

1. Check if the current array is non-decreasing.
2. If not, find the leftmost adjacent pair with minimum sum.
3. Replace that pair with its sum.
4. Shift the rest of the array left by one position.
5. Repeat until sorted.

The small constraint makes this direct simulation acceptable.
