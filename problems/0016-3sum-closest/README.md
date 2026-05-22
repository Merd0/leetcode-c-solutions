# #0016 - 3Sum Closest

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Two Pointers, Sorting
- Companies: Not tracked in this repo
- Hint: Sort first, then move pointers based on whether the current sum is below or above target.
- Solved: 2026-05-22
- LeetCode: https://leetcode.com/problems/3sum-closest/

## Problem Statement

TR: Bir tamsayi dizisi ve `target` verilir. Uc sayinin toplami arasindan `target` degerine en yakin olani dondur.

EN: Given an integer array and a `target`, return the sum of three integers that is closest to `target`.

## Starter Code (C)

```c
int threeSumClosest(int* nums, int numsSize, int target) {

}
```

## Parameters

- `nums`: Input array.
- `numsSize`: Number of elements.
- `target`: Target value.

## Return

TR: `target` degerine en yakin uc eleman toplami.

EN: Return the three-number sum closest to `target`.

## Examples

### Example 1

```text
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation:
The closest sum is -1 + 2 + 1 = 2.
```

### Example 2

```text
Input: nums = [0,0,0], target = 1
Output: 0
```

## Constraints

- `3 <= nums.length <= 500`
- `-1000 <= nums[i] <= 1000`
- `-10^4 <= target <= 10^4`
- Exactly one closest solution exists.

## Approach

TR: Diziyi sirala. Her `i` icin iki pointer ile toplam hesapla; hedefe daha yakin bir toplam bulunursa `closest` guncelle. Toplam kucukse solu, buyukse sagi oynat.

EN: Sort the array. For each `i`, use two pointers to compute sums; update `closest` when a sum is nearer to target. Move left if the sum is too small, right if too large.

## Solution

- [solution.c](solution.c)
