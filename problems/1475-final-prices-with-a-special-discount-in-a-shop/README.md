# #1475 - Final Prices With a Special Discount in a Shop

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Stack, Monotonic Stack
- Hint: For each price, find the first value to its right that is less than or equal to it.
- Solved date: 2026-06-14
- Source: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
- Note: Daily practice question

## Problem Statement

TR: Her urunun indirimi, saginda bulunan ve fiyati mevcut urunun fiyatindan
kucuk veya esit olan ilk urunun fiyatidir. Boyle bir urun varsa indirimi cikar;
yoksa fiyati degistirmeden birak. Tum son fiyatlari yeni bir dizide dondur.

EN: The discount for each item is the first price to its right that is less
than or equal to the current price. Subtract that discount when it exists;
otherwise keep the original price. Return all final prices.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* finalPrices(int* prices, int pricesSize, int* returnSize) {

}
```

## Parameters / Return

- `prices`: Original item prices.
- `pricesSize`: Number of prices.
- `returnSize`: Must be set to `pricesSize`.
- Returns a newly allocated array containing the final prices.

## Examples

```text
Input: prices = [8,4,6,2,3]
Output: [4,2,4,2,3]
Explanation:
8 uses 4 as its first valid discount.
4 uses 2.
6 uses 2.
2 and 3 have no valid price to their right.
```

```text
Input: prices = [1,2,3,4,5]
Output: [1,2,3,4,5]
```

```text
Input: prices = [10,1,1,6]
Output: [9,0,1,6]
```

## Constraints

- `1 <= prices.length <= 500`
- `1 <= prices[i] <= 1000`

## Approach

Copy each original price into the result. Then scan the values to its right:

- The first value satisfying `prices[j] <= prices[i]` is the discount.
- Subtract it and stop searching because only the first valid price applies.
- If no value qualifies, the copied original price remains unchanged.

This direct solution is easy to follow and fits the constraints.

## Further Improvement

A monotonic stack can find the same discounts in `O(n)` time. The current
brute-force solution is worth keeping because it clearly establishes the rule
before learning the stack optimization.

## Complexity

- Time: `O(n^2)`
- Extra space: `O(n)` for the required returned array

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
