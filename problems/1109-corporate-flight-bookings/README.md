# #1109 - Corporate Flight Bookings

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Prefix Sum
- Hint: Record where each range contribution starts and where it stops.
- Solved date: 2026-08-01
- Source: https://leetcode.com/problems/corporate-flight-bookings/
- Note: Range updates with a difference array followed by a prefix sum

## Problem Statement

TR: Her `[first, last, seats]` kaydi, `first` ile `last` arasindaki tum
ucuslara `seats` rezervasyon ekler. Her ucustaki toplam rezervasyonu dondur.

EN: Each `[first, last, seats]` booking adds `seats` reservations to every
flight from `first` through `last`. Return the total for each flight.

## Starter Code (C)

```c
int* corpFlightBookings(int** bookings, int bookingsSize,
                        int* bookingsColSize, int n, int* returnSize) {

}
```

## Example

```text
Input:  bookings = [[1,2,10], [2,3,20], [2,5,25]], n = 5
Output: [10,55,45,25,25]
```

## Approach

Updating every flight inside every booking range would repeatedly scan the same
positions. Instead, use the result buffer first as a difference array.

For each booking:

```text
add seats where the range starts
subtract seats immediately after the range ends
```

Flight numbers are one-based, while C array indexes are zero-based. Therefore,
the first affected index is `first - 1`. The value `last` is already the index
immediately after the inclusive range:

```c
int first = bookings[i][0] - 1;
int last = bookings[i][1];

totalFlights[first] += seats;

if (last < n) {
    totalFlights[last] -= seats;
}
```

The boundary check handles ranges that continue through flight `n`, because no
stop marker is needed outside the result array. Finally, a left-to-right prefix
sum accumulates all currently active range contributions and converts the
difference array into the requested reservation totals.

Embedded-C connection: difference arrays efficiently apply batches of interval
changes such as scheduled actuator levels, calibration offsets, or resource
loads without updating every sample in every interval.

## Complexity

- Time: `O(bookingsSize + n)`
- Extra space: `O(n)` for the returned array; `O(1)` auxiliary space

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
