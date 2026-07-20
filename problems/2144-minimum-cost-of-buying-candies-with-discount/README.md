# #2144 - Minimum Cost of Buying Candies With Discount

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Greedy, Sorting
- Hint: Sort expensive candies first; in every group of three, the cheapest one can be free.
- Solved date: 2026-06-01
- Source: https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/

## Problem Statement

TR: Candy fiyatlari veriliyor. Her iki candy satin aldiginda, fiyati bu iki
candy'nin ucuz olanindan buyuk olmayan bir candy bedava alinabilir. Tum candyleri
almak icin gereken minimum toplam maliyeti dondur.

EN: Given candy costs, for every two candies you buy, you may get one candy for
free if its cost is less than or equal to the cheaper of the two bought candies.
Return the minimum total cost to buy all candies.

## Starter Code (C)

```c
int minimumCost(int* cost, int costSize) {

}
```

## Parameters / Return

- `cost`: candy cost array, modified by sorting.
- `costSize`: number of candies.
- Returns the minimum total cost.

## Examples

```text
Input: cost = [1,2,3]
Output: 5
Explanation: Buy 3 and 2, then get 1 for free.
```

```text
Input: cost = [6,5,7,9,2,2]
Output: 23
Explanation: After sorting high to low, skip every third candy in each group.
```

```text
Input: cost = [5,5]
Output: 10
Explanation: Fewer than three candies means there is no free candy.
```

## Constraints

- `1 <= cost.length <= 100`
- `1 <= cost[i] <= 100`

## Approach

Sort costs in descending order. For each group of three candies, pay for the two
most expensive candies and skip the third one.

After descending sort, indices `2`, `5`, `8`, ... are the free candies:

```c
if (i % 3 != 2) {
    totalCost += cost[i];
}
```

This greedy order maximizes the value of each free candy while satisfying the
discount rule.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
