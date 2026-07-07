# #2073 - Time Needed to Buy Tickets

## LeetCode Style Info

- Status: Solved
- Difficulty: Easy
- Topics: Array, Queue Simulation
- Hint: Do not physically move array elements. Rotate an index.
- Solved date: 2026-07-07
- Source: https://leetcode.com/problems/time-needed-to-buy-tickets/

## Problem Statement

TR: Bir bilet kuyrugu var. Her adimda siradaki kisi 1 bilet alir. Hala bilet
istiyorsa sirasi tekrar gelir; bileti bittiyse artik islem yapmaz. `k`
indexindeki kisinin isi bitene kadar gecen sureyi dondur.

EN: A queue of people buys tickets one by one. Return how many seconds pass
until person `k` finishes buying all required tickets.

## Starter Code (C)

```c
int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {

}
```

## Example

```text
Input: tickets = [2,3,2], k = 2
Output: 6
```

## Approach

This solution simulates the queue with one rotating index:

```c
index = (index + 1) % ticketsSize;
```

No physical queue movement is needed. A person with `0` tickets stays in the
array but is skipped. Each successful decrement means one second passed.

The loop stops as soon as `tickets[k]` becomes `0`.

Embedded-C connection: this is a small tick-based scheduler simulation. A
cursor visits slots in order, skips inactive slots, and counts completed work.

## Complexity

- Time: `O(total tickets processed before k finishes)`
- Space: `O(1)`

## Solution

- [solution.c](solution.c)
