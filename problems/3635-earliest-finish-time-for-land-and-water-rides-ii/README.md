# #3635 - Earliest Finish Time for Land and Water Rides II

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Greedy
- Hint: For a fixed first category, only the earliest finishing ride from that category matters.
- Solved date: 2026-06-03
- Source: https://leetcode.com/problems/earliest-finish-time-for-land-and-water-rides-ii/

## Problem Statement

TR: Kara ve su kategorilerinde ride'lar veriliyor. Bir turist her kategoriden
tam bir ride yapmali ve sirayi kendi secebilir. Ride kendi start time'inda veya
daha sonra baslayabilir. Iki ride'i bitirebilecegi en erken zamani dondur.

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
Explanation: Taking the water ride first gives the earliest finish.
```

## Constraints

- `1 <= n, m <= 5 * 10^4`
- `landStartTime.length == landDuration.length == n`
- `waterStartTime.length == waterDuration.length == m`
- `1 <= landStartTime[i], landDuration[i], waterStartTime[j], waterDuration[j] <= 10^5`

## Approach

This is the larger version of #3633, so checking every land-water pair would be
too expensive.

For the order `land -> water`, only the earliest land finish time matters:

```text
minLandEnd = min(landStartTime[i] + landDuration[i])
```

Then try each water ride as the second ride:

```text
finish = max(minLandEnd, waterStartTime[j]) + waterDuration[j]
```

Do the symmetric calculation for `water -> land`, then return the smaller
answer.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
