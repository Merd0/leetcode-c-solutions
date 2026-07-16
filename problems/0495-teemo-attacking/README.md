# #0495 - Teemo Attacking

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Simulation
- Hint: Consecutive attacks can overlap, so only add the new poisoned time.
- Solved date: 2026-07-17
- Source: https://leetcode.com/problems/teemo-attacking/
- Note: Event-window warmup question

## Problem Statement

TR: Teemo'nun saldiri zamanlari ve zehir `duration` degeri veriliyor. Her
saldiri hedefi `duration` saniye zehirler. Etkiler cakisirsa ayni saniye iki kez
sayilmaz. Toplam zehirli kalma suresini dondur.

EN: Given attack timestamps and a poison duration, return the total time the
target remains poisoned, without double-counting overlapping poison windows.

## Starter Code (C)

```c
int findPoisonedDuration(int* timeSeries, int timeSeriesSize, int duration) {

}
```

## Examples

```text
Input: timeSeries = [1,4], duration = 2
Output: 4
```

The windows `[1,2]` and `[4,5]` do not overlap.

```text
Input: timeSeries = [1,2], duration = 2
Output: 3
```

The second attack starts before the first poison window fully ends, so it adds
only one new second.

## Approach

The first attack contributes `duration` time. For each next attack, compare it
with the previous timestamp:

```text
diff = timeSeries[i] - timeSeries[i - 1]
```

If `diff < duration`, the poison windows overlap and only `diff` new time is
added. Otherwise, the previous window already ended and a full `duration` is
added.

Embedded-C connection: this is a small event-window problem. It is the same
thinking used when a timeout, busy flag, or active diagnostic window is refreshed
before it expires.

## Complexity

- Time: `O(n)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)
