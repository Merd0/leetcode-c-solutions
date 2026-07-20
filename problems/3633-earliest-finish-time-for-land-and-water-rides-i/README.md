# #3633 - Earliest Finish Time for Land and Water Rides I

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Enumeration, Greedy
- Hint: Try both orders: land first and water first.
- Solved date: 2026-06-02
- Source: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-i/

## Problem Statement

TR: Kara ve su kategorilerinde ride'lar veriliyor. Bir turist her kategoriden
tam bir ride yapmali ve sirayi kendi secebilir. Her ride en erken kendi start
time'inda baslayabilir. Iki ride'i bitirebilecegi en erken zamani dondur.

EN: Given land rides and water rides, a tourist must take exactly one ride from
each category in either order. Each ride can start at its opening time or later.
Return the earliest time the tourist can finish both rides.

## Starter Code (C)

```c
int earliestFinishTime(
    int* landStartTime, int landStartTimeSize,
    int* landDuration, int landDurationSize,
    int* waterStartTime, int waterStartTimeSize,
    int* waterDuration, int waterDurationSize
) {

}
```

## Parameters / Return

- `landStartTime`, `landDuration`: start times and durations for land rides.
- `waterStartTime`, `waterDuration`: start times and durations for water rides.
- Returns the earliest finish time after taking one land ride and one water ride.

## Examples

```text
Input: landStartTime = [2,8], landDuration = [4,1],
       waterStartTime = [6], waterDuration = [3]
Output: 9
Explanation: Take land ride 0 from 2 to 6, then water ride 0 from 6 to 9.
```

```text
Input: landStartTime = [5], landDuration = [3],
       waterStartTime = [1], waterDuration = [10]
Output: 14
Explanation: Take water first, then land.
```

## Constraints

- `1 <= n, m <= 100`
- `landStartTime.length == landDuration.length == n`
- `waterStartTime.length == waterDuration.length == m`
- `1 <= landStartTime[i], landDuration[i], waterStartTime[j], waterDuration[j] <= 1000`

## Approach

Enumerate every land-water pair and check both possible orders:

1. Land first, then water.
2. Water first, then land.

For the second ride, the start time is:

```text
max(previousFinish, rideStartTime)
```

Track the minimum finish time across all pair/order combinations.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
