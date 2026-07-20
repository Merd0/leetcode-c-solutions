# #0561 - Array Partition

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Greedy, Sorting
- Hint: After sorting, pair neighboring values.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/array-partition/

## Problem Statement

TR: `2n` elemanli bir dizi verilir. Elemanlari `n` cift haline getir. Her ciftin minimumlarinin toplami maksimum olacak sekilde bu toplami dondur.

EN: Given an array of `2n` integers, pair them into `n` pairs. Maximize the sum of the smaller value in each pair and return that sum.

## Starter Code (C)

```c
int arrayPairSum(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Input array with even length.
- `numsSize`: Number of elements in `nums`.

## Return

TR: Ciftlerin minimumlari toplamindan elde edilebilecek maksimum deger.

EN: Return the maximum possible sum of pair minimums.

## Examples

### Example 1

```text
Input: nums = [1,4,3,2]
Output: 4
Explanation:
Pair as (1,2) and (3,4), then 1 + 3 = 4.
```

### Example 2

```text
Input: nums = [6,2,6,5,1,2]
Output: 9
Explanation:
Pair as (1,2), (2,5), and (6,6), then 1 + 2 + 6 = 9.
```

## Constraints

- `1 <= n <= 10^4`
- `nums.length == 2 * n`
- `-10^4 <= nums[i] <= 10^4`

## Approach

TR: Dizi siralanir. Sirali dizide komsu elemanlari cift yapmak, kucuk elemanlarin mumkun oldugunca buyuk kalmasini saglar. Bu yuzden `0, 2, 4, ...` indeksleri toplanir.

EN: Sort the array. Pairing neighboring values keeps the smaller values as large as possible. Therefore, sum values at indices `0, 2, 4, ...`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
