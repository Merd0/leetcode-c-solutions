# #3689 - Maximum Total Subarray Value I

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Greedy
- Hint: The same subarray may be selected more than once.
- Solved date: 2026-06-09
- Source: https://leetcode.com/problems/maximum-total-subarray-value-i/
- Note: Daily question

## Problem Statement

TR: Tam olarak `k` tane bos olmayan alt dizi sec. Secimler cakışabilir ve ayni
alt dizi birden fazla kez secilebilir. Bir alt dizinin degeri icindeki maksimum
ve minimum eleman farkidir. Elde edilebilecek en buyuk toplam degeri dondur.

EN: Choose exactly `k` non-empty subarrays. Selections may overlap, and the same
subarray may be chosen repeatedly. A subarray's value is its maximum element
minus its minimum element. Return the largest possible total value.

## Starter Code (C)

```c
long long maxTotalValue(int* nums, int numsSize, int k) {

}
```

## Parameters / Return

- `nums`: Input integer array.
- `numsSize`: Number of elements.
- `k`: Exact number of subarrays to choose.
- Returns the maximum total value as `long long`.

## Examples

```text
Input: nums = [1,3,2], k = 2
Output: 4
Explanation: The whole array has value 3 - 1 = 2 and may be selected twice.
```

```text
Input: nums = [4,2,5,1], k = 3
Output: 12
Explanation: The whole array has value 5 - 1 = 4; selecting it three times gives 12.
```

## Constraints

- `1 <= nums.length <= 5 * 10^4`
- `0 <= nums[i] <= 10^9`
- `1 <= k <= 10^5`

## Approach

No subarray can have a value larger than:

```text
global maximum - global minimum
```

The whole array contains both global extremes, so it reaches that upper bound.
Because the same subarray may be selected repeatedly, choose the whole array
exactly `k` times.

Scan once to find the minimum and maximum. Their difference fits in `int` under
the constraints, but cast that difference to `long long` before multiplying by
`k` so the final result cannot overflow a 32-bit `int`.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
