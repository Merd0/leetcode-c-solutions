# #0268 - Missing Number

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Math, Bit Manipulation
- Companies: Not tracked in this repo
- Hint: The range is `0..n`, but the array has only `n` numbers.
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/missing-number/

## Problem Statement

TR: `0..n` araligindaki sayilardan biri eksik olacak sekilde `n` elemanli bir dizi verilir. Eksik sayiyi bul.

EN: Given an array of `n` distinct numbers from the range `0..n`, find the one number missing from the array.

## Starter Code (C)

```c
int missingNumber(int* nums, int numsSize) {

}
```

## Parameters

- `nums`: Array containing distinct values from `0` to `n`.
- `numsSize`: Number of elements; this is `n`.

## Return

TR: Aralikta olup dizide bulunmayan sayi.

EN: Return the number from the range that is not present in the array.

## Examples

### Example 1

```text
Input: nums = [3,0,1]
Output: 2
```

### Example 2

```text
Input: nums = [0,1]
Output: 2
```

### Example 3

```text
Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
```

## Constraints

- `n == nums.length`
- `1 <= n <= 10^4`
- `0 <= nums[i] <= n`
- All values in `nums` are unique.

## Approach

TR: XOR yaklasimi kullanilir. `0..n` araligindaki tum sayilar ve dizideki tum sayilar XOR'lanir. Cift gelenler sifirlanir, eksik sayi kalir.

EN: Use XOR. XOR every value from `0..n` and every value in the array. Values that appear in both places cancel out, leaving the missing value.

## Solution

- [solution.c](solution.c)
