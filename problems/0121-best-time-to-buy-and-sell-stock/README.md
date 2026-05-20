# #0121 - Best Time to Buy and Sell Stock

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
- Topics: Array, Greedy

## Problem

TR: Her gun icin hisse fiyati verilir. Bir kez alis ve daha sonraki bir gunde bir kez satis yaparak maksimum kari bul.

EN: Given daily stock prices, choose one buy day and one later sell day to maximize profit.

## Starter Code (C)

```c
int maxProfit(int* prices, int pricesSize) {

}
```

## Parameters

- `prices`: Price list by day.
- `pricesSize`: Number of days.

## Return

TR: Yapilabilecek en yuksek kar. Kar yoksa `0`.

EN: Maximum possible profit, or `0` if no profitable trade exists.

## Example

```text
Input: prices = [7,1,5,3,6,4]
Output: 5
Reason: Buy at 1 and sell at 6.
```

## Approach

TR: O gune kadar gorulen en dusuk fiyati sakla. Bugun satarsan kar ne olur hesapla ve en iyiyi guncelle.

EN: Keep the minimum price seen so far. For each day, compute profit if selling today and update the best profit.

## Solution

- [solution.c](solution.c)
