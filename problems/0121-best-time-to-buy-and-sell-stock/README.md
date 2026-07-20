# #0121 - Best Time to Buy and Sell Stock

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Greedy
- Hint: For each possible sell day, the best buy day is the cheapest price before it.
- Solved date: 2026-05-20
- Source: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem Statement

TR: `prices[i]`, i. gundeki hisse fiyatidir. Bir gun alis ve daha sonraki farkli bir gunde satis yaparak elde edilebilecek maksimum kari bul.

EN: `prices[i]` is the stock price on day `i`. Choose one day to buy and one later day to sell, then return the maximum profit.

## Starter Code (C)

```c
int maxProfit(int* prices, int pricesSize) {

}
```

## Parameters

- `prices`: Stock price list by day.
- `pricesSize`: Number of days.

## Return

TR: Elde edilebilecek maksimum kar. Karli islem yoksa `0`.

EN: Return the maximum profit. If no profitable transaction exists, return `0`.

## Examples

### Example 1

```text
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation:
Buy at price 1 and sell later at price 6, so profit is 5.
```

### Example 2

```text
Input: prices = [7,6,4,3,1]
Output: 0
Explanation:
The price keeps falling, so no profitable transaction exists.
```

## Constraints

- `1 <= prices.length <= 10^5`
- `0 <= prices[i] <= 10^4`

## Approach

TR: Soldan saga gezerken gorulen en dusuk fiyati `minPrice` olarak tut. Mevcut fiyat daha yuksekse bugun satsaydin kar ne olur hesapla ve `maxProfit` degerini guncelle.

EN: Scan from left to right while tracking the cheapest previous price as `minPrice`. If today's price is higher, compute the profit and update `maxProfit`.

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
