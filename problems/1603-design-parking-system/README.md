# #1603 - Design Parking System

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Design, Simulation, Counting
- Hint: Store the remaining capacity for each car type.
- Solved date: 2026-06-07
- Source: https://leetcode.com/problems/design-parking-system/

## Problem Statement

TR: Buyuk, orta ve kucuk araclar icin sabit sayida yeri olan bir otopark sistemi
tasarla. Her arac geldiginde kendi tipine uygun bos yer varsa kapasiteyi azaltip
`true`, yoksa `false` dondur.

EN: Design a parking system with fixed capacities for big, medium, and small
cars. When a car arrives, park it only if a slot for its type is available.

## Starter Code (C)

```c
typedef struct {

} ParkingSystem;

ParkingSystem* parkingSystemCreate(int big, int medium, int small) {

}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {

}

void parkingSystemFree(ParkingSystem* obj) {

}
```

## Parameters / Return

- `big`, `medium`, `small`: Initial capacities for each parking-space type.
- `carType`: `1` for big, `2` for medium, `3` for small.
- `parkingSystemAddCar`: Returns whether the car could be parked.

## Example

```text
Input:
["ParkingSystem","addCar","addCar","addCar","addCar"]
[[1,1,0],[1],[2],[3],[1]]

Output:
[null,true,true,false,false]
```

## Constraints

- `0 <= big, medium, small <= 1000`
- `carType` is `1`, `2`, or `3`
- At most `1000` calls are made to `addCar`

## Approach

The struct stores the remaining capacity for each type. When a car arrives,
check the corresponding field:

- If it is greater than zero, decrement it and return `true`.
- Otherwise return `false`.

This is a small stateful API: the result of each call depends on the state left
by previous calls.

## Complexity

- Time per operation: `O(1)`
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)
