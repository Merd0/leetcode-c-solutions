# #1094 - Car Pooling

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Prefix Sum, Simulation
- Hint: Record passenger deltas at pickup and drop-off positions, then scan the route.
- Solved date: 2026-07-21
- Source: https://leetcode.com/problems/car-pooling/
- Note: Difference-array practice for capacity tracking

## Problem Statement

TR: Her yolculuk `[yolcu, binis, inis]` biciminde veriliyor. Aracin rota boyunca
kapasitesini hic asip asmadigini belirle.

EN: Each trip is `[passengers, from, to]`. Determine whether the vehicle can
complete every trip without exceeding its capacity anywhere on the route.

## Starter Code (C)

```c
bool carPooling(int** trips, int tripsSize,
                int* tripsColSize, int capacity) {

}
```

## Examples

```text
Input: trips = [[2,1,5],[3,3,7]], capacity = 4
Output: false
```

The load becomes five between positions `3` and `5`.

```text
Input: trips = [[2,1,5],[3,3,7]], capacity = 5
Output: true
```

## Approach

A trip changes the load only at two positions:

```text
changes[from] += passengers
changes[to]   -= passengers
```

Find the farthest drop-off first so the dynamically allocated event array is
large enough for every position. Then take a running sum of the changes. That
running sum is the current passenger count; exceeding `capacity` at any point
makes the schedule impossible.

This is a difference array: intervals are recorded by their boundary events
instead of updating every position inside every trip.

Embedded-C connection: the same event-delta pattern tracks active tasks,
scheduled current draw, channel occupancy, or any other time-indexed resource
limit.

## Complexity

- Time: `O(tripsSize + maxPosition)`
- Space: `O(maxPosition)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
