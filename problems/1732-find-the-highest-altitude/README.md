# #1732 - Find the Highest Altitude

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Prefix Sum
- Hint: Start at altitude `0` and keep a running altitude after each gain.
- Solved date: 2026-06-19
- Source: https://leetcode.com/problems/find-the-highest-altitude/
- Note: Daily practice question

## Problem Statement

TR: Bisikletci `0` yukseklikten baslar. `gain[i]`, iki nokta arasindaki
yukseklik degisimidir. Yol boyunca gorulen en yuksek altitude degerini dondur.

EN: A biker starts at altitude `0`. Each `gain[i]` changes the current altitude
between two points. Return the highest altitude reached during the trip.

## Starter Code (C)

```c
int largestAltitude(int* gain, int gainSize) {

}
```

## Parameters / Return

- `gain`: Altitude difference between consecutive points.
- `gainSize`: Number of gain values.
- Returns the maximum altitude seen, including the starting altitude `0`.

## Examples

```text
Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation:
Altitudes are 0, -5, -4, 1, 1, -6.
The highest altitude is 1.
```

```text
Input: gain = [-4,-3,-2,-1,4,3,2]
Output: 0
Explanation: The trip never goes above the starting altitude.
```

## Constraints

- `1 <= gain.length <= 100`
- `-100 <= gain[i] <= 100`

## Approach

Use a running altitude:

- Start both `currHigh` and `maxHigh` at `0`.
- Add each `gain[i]` to `currHigh`.
- If the current altitude is higher than the previous maximum, update `maxHigh`.

This is the same one-pass accumulator idea used in prefix sums, but only the
current prefix value and maximum are needed.

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
