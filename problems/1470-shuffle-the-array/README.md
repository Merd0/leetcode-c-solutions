# #1470 - Shuffle the Array

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array
- Hint: Values from the first and second half should be written alternately.
- Solved date: 2026-05-19
- Source: https://leetcode.com/problems/shuffle-the-array/

## Problem Statement

TR: `nums = [x1,x2,...,xn,y1,y2,...,yn]` seklinde verilen diziyi `[x1,y1,x2,y2,...,xn,yn]` sirasina cevir.

EN: Given `nums = [x1,x2,...,xn,y1,y2,...,yn]`, return `[x1,y1,x2,y2,...,xn,yn]`.

## Starter Code (C)

```c
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {

}
```

## Parameters

- `nums`: Input array of length `2 * n`.
- `numsSize`: Number of elements in `nums`.
- `n`: Size of each half.
- `returnSize`: Output length of the returned array.

## Return

TR: Ilk yari ve ikinci yari elemanlarini sirayla karistiran yeni dizi.

EN: Return a new array that interleaves the first half and the second half.

## Examples

### Example 1

```text
Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7]
```

### Example 2

```text
Input: nums = [1,2,3,4,4,3,2,1], n = 4
Output: [1,4,2,3,3,2,4,1]
```

### Example 3

```text
Input: nums = [1,1,2,2], n = 2
Output: [1,2,1,2]
```

## Constraints

- `1 <= n <= 500`
- `nums.length == 2 * n`
- `1 <= nums[i] <= 10^3`

## Approach

TR: `i` her zaman bir `x` ve bir `y` elemanini temsil eder. `result[2 * i] = nums[i]`, `result[2 * i + 1] = nums[i + n]` yazilir.

EN: Each `i` represents one `x` and one `y`. Write `result[2 * i] = nums[i]` and `result[2 * i + 1] = nums[i + n]`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
