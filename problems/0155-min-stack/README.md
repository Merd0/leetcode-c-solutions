# #0155 - Min Stack

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Stack, Design
- Companies: Not tracked in this repo
- Hint: Keep a second stack that stores the minimum value at each depth.
- Solved: 2026-05-23
- LeetCode: https://leetcode.com/problems/min-stack/

## Problem Statement

TR: `push`, `pop`, `top` ve `getMin` islemlerini destekleyen bir stack tasarla. `getMin`, stack icindeki minimum degeri hizli dondurmelidir.

EN: Design a stack that supports `push`, `pop`, `top`, and `getMin`, where `getMin` quickly returns the current minimum value.

## Starter Code (C)

```c
typedef struct {

} MinStack;

MinStack* minStackCreate() {

}
```

## Parameters

- `val`: Value pushed into the stack.
- `obj`: Stack object passed to operations.

## Return

TR: Stack islemlerine gore ust eleman veya minimum eleman dondurulur.

EN: Operations return the top value or the current minimum value when needed.

## Examples

### Example 1

```text
Input:
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]
Output:
[null,null,null,null,-3,null,0,-2]
```

## Constraints

- `-2^31 <= val <= 2^31 - 1`
- Operations are valid.
- At most `3 * 10^4` operations are called.

## Approach

TR: Normal stack degerleri tutar. `minStack` ise her derinlikte o ana kadarki minimumu tutar. Boylece `getMin` direkt `minStack[top]` olur.

EN: The normal stack stores values. `minStack` stores the minimum value at each depth, so `getMin` can directly return `minStack[top]`.

## Solution

- [solution.c](solution.c)
