# #3691 - Maximum Total Subarray Value II

## Attempt Info

- Status: Not solved
- Result: Time Limit Exceeded
- Difficulty: Hard
- Topics: Array, Greedy, Heap (Priority Queue), Segment Tree
- Attempt date: 2026-06-10
- Source: https://leetcode.com/problems/maximum-total-subarray-value-ii/
- Note: Daily question

## Problem Statement

TR: Tam olarak `k` farkli ve bos olmayan alt dizi sec. Alt diziler
cakisabilir, ancak ayni `[left, right]` araligi birden fazla secilemez. Bir alt
dizinin degeri icindeki maksimum ve minimum eleman farkidir. Secilen alt
dizilerin elde edilebilecek en buyuk toplam degerini dondur.

EN: Select exactly `k` distinct non-empty subarrays. They may overlap, but the
same `[left, right]` range cannot be selected twice. A subarray's value is its
maximum element minus its minimum element. Return the largest possible total
value.

## Starter Code (C)

```c
long long maxTotalValue(int* nums, int numsSize, int k) {

}
```

## Examples

```text
Input: nums = [1,3,2], k = 2
Output: 4
Explanation: [1,3] and [1,3,2] are distinct subarrays and both have value 2.
```

```text
Input: nums = [4,2,5,1], k = 3
Output: 12
Explanation: Three different subarrays can each have value 5 - 1 = 4.
```

## Constraints

- `1 <= nums.length <= 5 * 10^4`
- `0 <= nums[i] <= 10^9`
- `1 <= k <= min(10^5, n * (n + 1) / 2)`

## Brute-Force Attempt

The attempted solution:

1. Generates every subarray.
2. Maintains its current minimum and maximum.
3. Stores every `maximum - minimum` value.
4. Sorts all values in descending order.
5. Adds the largest `k` values.

The reasoning is correct, but generating every candidate is too expensive.

For `n` elements, the number of subarrays is:

```text
n * (n + 1) / 2
```

When `n = 50000`, this is approximately `1.25` billion subarrays. The values
array alone would need about `5 GB` if each `int` uses four bytes. Sorting that
many entries is also far beyond the time limit.

## Complexity of This Attempt

Let `m = n * (n + 1) / 2`.

- Subarray generation: `O(n^2)`
- Sorting: `O(m log m)`
- Extra space: `O(m)`, which is `O(n^2)`

## What Is Missing

The accepted direction needs to avoid materializing all subarrays. Only the
most promising candidates should be generated while extracting the current
largest value.

Revisit after learning:

- Max heap / priority queue
- Segment tree range minimum and maximum queries
- Best-first generation of top candidate subarrays

## Attempt Code

- [attempt.c](attempt.c)
