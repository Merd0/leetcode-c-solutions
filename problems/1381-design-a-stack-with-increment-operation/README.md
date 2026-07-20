# #1381 - Design a Stack With Increment Operation

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Design, Stack, Array, Stateful API
- Hint: Store the stack values, the current top index, and the maximum capacity.
- Solved date: 2026-07-08
- Source: https://leetcode.com/problems/design-a-stack-with-increment-operation/

## Problem Statement

TR: Sabit kapasiteli bir stack tasarla. `push`, `pop` ve stack'in en alttaki
`k` elemanini `val` kadar artiran `increment` islemlerini destekle.

EN: Design a fixed-capacity stack that supports `push`, `pop`, and incrementing
the bottom `k` elements by `val`.

## Starter Code (C)

```c
typedef struct {

} CustomStack;

CustomStack* customStackCreate(int maxSize) {

}

void customStackPush(CustomStack* obj, int x) {

}

int customStackPop(CustomStack* obj) {

}

void customStackIncrement(CustomStack* obj, int k, int val) {

}

void customStackFree(CustomStack* obj) {

}
```

## Parameters / Return

- `maxSize`: Maximum number of elements the stack may store.
- `x`: Value pushed to the top if the stack is not full.
- `k`: Number of bottom elements to increment.
- `val`: Value added to each selected bottom element.
- `pop`: Returns the removed top value, or `-1` if the stack is empty.

## Example

```text
Input:
["CustomStack","push","push","pop","push","push","push","increment","increment","pop","pop","pop","pop"]
[[3],[1],[2],[],[2],[3],[4],[5,100],[2,100],[],[],[],[]]

Output:
[null,null,null,2,null,null,null,null,null,103,202,201,-1]
```

## Constraints

- `1 <= maxSize <= 1000`
- `1 <= x <= 1000`
- `1 <= k <= 1000`
- `0 <= val <= 100`
- At most `1000` calls are made to each operation.

## Approach

Use a fixed array and keep two fields:

```c
typedef struct {
    int stack[1001];
    int top;
    int maxSize;
} CustomStack;
```

Important mental model:

```text
top = -1        -> stack is empty
top = 0         -> one element at stack[0]
top + 1         -> current number of elements
maxSize         -> capacity limit
```

`push`:

- If `top + 1 == maxSize`, the stack is full.
- Otherwise increment `top` and write `x` at `stack[top]`.

`pop`:

- If `top == -1`, return `-1`.
- Otherwise save `stack[top]`, decrement `top`, and return the saved value.

`increment(k, val)`:

- The bottom of the stack starts at `stack[0]`.
- Increment indices `0` through `count - 1`.
- `count` is the smaller of `k` and the current element count.

Embedded-C connection: this is a small stateful object with owned storage,
capacity control, boundary checks, and explicit cleanup. That is the same shape
as many simple driver/test helper structures.

## Complexity

- `push`: `O(1)`
- `pop`: `O(1)`
- `increment`: `O(min(k, n))`
- Space: `O(maxSize)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
