# #0933 - Number of Recent Calls

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Design, Queue, Data Stream
- Hint: Request times are strictly increasing, so expired requests leave from the front.
- Solved date: 2026-06-07
- Source: https://leetcode.com/problems/number-of-recent-calls/

## Problem Statement

TR: Her `ping(t)` cagrisinda yeni bir request zamani eklenir. Son `3000`
milisaniye icinde, yani `[t - 3000, t]` araliginda kalan request sayisini
donduren bir counter tasarla.

EN: Design a counter that records each `ping(t)` and returns how many requests
fall inside the inclusive time window `[t - 3000, t]`.

## Starter Code (C)

```c
typedef struct {

} RecentCounter;

RecentCounter* recentCounterCreate(void) {

}

int recentCounterPing(RecentCounter* obj, int t) {

}

void recentCounterFree(RecentCounter* obj) {

}
```

## Parameters / Return

- `t`: Current request time in milliseconds.
- Request times are strictly increasing.
- `ping`: Returns the number of requests still inside the current window.

## Example

```text
Input:
["RecentCounter","ping","ping","ping","ping"]
[[],[1],[100],[3001],[3002]]

Output:
[null,1,2,3,3]
```

## Constraints

- `1 <= t <= 10^9`
- Every new `t` is greater than the previous one
- At most `10^4` calls are made to `ping`

## Approach

Use an array as a queue:

- `rear` is the next write position.
- `front` is the oldest request still inside the window.

Append each `t` at `rear`. Then advance `front` while the oldest request is
smaller than `t - 3000`. The active queue length is `rear - front`.

This is close to maintaining recent sensor samples or events inside a fixed time
window.

## Complexity

- Amortized time per `ping`: `O(1)`
- Space: `O(n)` for stored request times

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
