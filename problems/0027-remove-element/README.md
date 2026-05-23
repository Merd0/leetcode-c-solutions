# #0027 - Remove Element

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Two Pointers
- Companies: Not tracked in this repo
- Hint: Keep only values that are not equal to `val`.
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/remove-element/

## Problem Statement

TR: `nums` dizisi ve `val` verilir. `val` degerine esit elemanlari yerinde kaldir. Dizinin ilk `k` elemani kalan degerleri icermeli ve fonksiyon `k` dondurmelidir.

EN: Given `nums` and `val`, remove all occurrences of `val` in-place. The first `k` elements should contain the remaining values, and the function returns `k`.

## Starter Code (C)

```c
int removeElement(int* nums, int numsSize, int val) {

}
```

## Parameters

- `nums`: Input array modified in-place.
- `numsSize`: Number of elements in `nums`.
- `val`: Value to remove.

## Return

TR: `val` disinda kalan eleman sayisi.

EN: Return the number of elements that are not equal to `val`.

## Examples

### Example 1

```text
Input: nums = [3,2,2,3], val = 3
Output: 2
Explanation:
The first 2 values can be [2,2].
```

### Example 2

```text
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5
Explanation:
The first 5 values can be [0,1,3,0,4].
```

## Constraints

- `0 <= nums.length <= 100`
- `0 <= nums[i] <= 50`
- `0 <= val <= 100`
- The order of remaining elements may change, but this solution keeps their order.

## Approach

TR: `index` kalan degerlerin yazilacagi siradaki pozisyonu tutar. `nums[i] != val` ise deger `nums[index]` konumuna yazilir ve `index` artar.

EN: `index` stores the next write position for kept values. If `nums[i] != val`, copy it to `nums[index]` and increment `index`.

## Solution

- [solution.c](solution.c)
