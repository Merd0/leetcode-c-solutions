# #901 - Online Stock Span

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Design, Stack, Monotonic Stack, Stateful API
- Hint: Store price blocks, not every day scan result.
- Solved date: 2026-07-07
- Source: https://leetcode.com/problems/online-stock-span/

## Problem Statement

TR: Her `next(price)` cagrisi yeni bir gunun fiyatini verir. Bu fiyat icin,
bugunden geriye dogru fiyatlar `price` degerinden kucuk veya esit kaldigi
surece kac gun sayilabildigini dondur.

EN: Each `next(price)` call receives a new stock price. Return how many
consecutive days ending today had prices less than or equal to today's price.

## Starter Code (C)

```c
typedef struct {

} StockSpanner;

StockSpanner* stockSpannerCreate(void) {

}

int stockSpannerNext(StockSpanner* obj, int price) {

}

void stockSpannerFree(StockSpanner* obj) {

}
```

## Example

```text
Input:
["StockSpanner","next","next","next","next","next","next","next"]
[[],[100],[80],[60],[70],[60],[75],[85]]

Output:
[null,1,1,1,2,1,4,6]
```

## First Idea: Direct Scan

The first version stores every price and scans backward:

```text
100, 80, 60, 70
              ^
70 sees 70 and 60, then stops at 80 -> span 2
```

That model is correct and easy to understand, so it is kept as
[`brute_force_tle.c`](brute_force_tle.c). The weakness is repeated scanning. If
prices keep increasing, each new call can scan almost the whole history.

## Optimized Approach

Use a monotonic stack of `(price, span)` blocks:

```c
typedef struct {
    int prices[10000];
    int spans[10000];
    int top;
} StockSpanner;
```

When a new `price` arrives:

1. Start with `currentSpan = 1` for today.
2. While stack top price is `<= price`, pop it and add its stored span.
3. Push the new `(price, currentSpan)` block.
4. Return `currentSpan`.

Why this works: a popped price block is fully covered by today's price. Instead
of recounting its days one by one, we add the span it already represents.

Embedded-C connection: this is stream processing with saved state. Every
`next` call uses the previous stack state instead of recomputing history from
zero.

## Complexity

Direct scan:

- `next`: `O(n)` worst case
- Space: `O(n)`

Monotonic stack:

- `next`: amortized `O(1)`
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
- [brute_force_tle.c](brute_force_tle.c)
