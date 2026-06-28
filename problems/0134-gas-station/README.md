# #0134 - Gas Station

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Greedy
- Hint: If the tank becomes negative at station `i`, the next possible start is `i + 1`.
- Solved date: 2026-06-28
- Source: https://leetcode.com/problems/gas-station/
- Note: Medium practice question

## Problem Statement

TR: Dairesel bir rota uzerinde benzin istasyonlari vardir. `gas[i]`, istasyon
`i`'de alabilecegin benzini; `cost[i]`, `i`'den sonraki istasyona gitmek icin
gereken benzini verir. Turu tamamlayabilecegin baslangic indexini dondur. Yoksa
`-1` dondur.

EN: A circular route has gas stations. `gas[i]` is the gas gained at station
`i`, and `cost[i]` is the gas needed to go from station `i` to the next station.
Return the starting index that can complete the full circuit, or `-1`.

## Starter Code (C)

```c
int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {

}
```

## Parameters / Return

- `gas`: Gas available at each station.
- `gasSize`: Number of stations.
- `cost`: Gas needed to move to the next station.
- `costSize`: Same size as `gasSize`.
- Returns: Valid starting index, or `-1` if impossible.

## Examples

```text
Input:  gas = [1,2,3,4,5], cost = [3,4,5,1,2]
Output: 3

Start at station 3:
tank = 4 - 1 = 3
tank = 3 + 5 - 2 = 6
tank = 6 + 1 - 3 = 4
tank = 4 + 2 - 4 = 2
tank = 2 + 3 - 5 = 0
```

```text
Input:  gas = [2,3,4], cost = [3,4,3]
Output: -1

Total gas is less than total cost, so the route is impossible.
```

## Constraints

- `gas.length == cost.length`
- `1 <= gas.length <= 100000`
- `0 <= gas[i], cost[i] <= 10000`

## Approach

First, think in terms of difference:

```text
diff = gas[i] - cost[i]
```

`total` tracks whether the whole route has enough gas at all. If total gas is
less than total cost, no start can work.

`tank` tracks the current candidate start. If `tank` becomes negative at station
`i`, then the current start cannot reach `i + 1`.

Important greedy idea:

```text
If start cannot reach station i + 1, then every station between start and i
also cannot be a valid start.
```

Why? Because while traveling from `start` to `i`, the tank never went negative
before `i`; those middle stations would start with even less accumulated help.
So the next candidate becomes:

```text
start = i + 1
```

## Complexity

- Time: `O(n)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
