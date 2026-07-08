# #946 - Validate Stack Sequences

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Stack, Simulation
- Hint: Push in the fixed `pushed` order, then pop while the stack top matches the next expected value.
- Solved date: 2026-07-08
- Source: https://leetcode.com/problems/validate-stack-sequences/

## Problem Statement

TR: `pushed` dizisi stack'e elemanlarin hangi sirayla girecegini verir.
Aralarda istedigin kadar pop yapabilirsin. `popped` dizisinin bu push/pop
siralarindan biriyle olusup olusamayacagini dondur.

EN: `pushed` gives the only allowed push order. You may pop whenever the top of
the stack allows it. Return whether the given `popped` order can be produced.

## Starter Code (C)

```c
bool validateStackSequences(int* pushed, int pushedSize, int* popped, int poppedSize) {

}
```

## Parameters / Return

- `pushed`: Values pushed into the stack in this exact order.
- `pushedSize`: Number of pushed values.
- `popped`: Target pop order.
- `poppedSize`: Number of popped values.
- Return `true` if the target pop order is possible, otherwise `false`.

## Example

```text
Input:
pushed = [1,2,3,4,5]
popped = [4,5,3,2,1]

Output:
true
```

Why: Push `1,2,3,4`, pop `4`, push `5`, then pop `5,3,2,1`.

```text
Input:
pushed = [1,2,3,4,5]
popped = [4,3,5,1,2]

Output:
false
```

Why: After `1` is popped before `2`, `2` cannot be popped later from below it.

## Constraints

- `1 <= pushed.length <= 1000`
- `popped.length == pushed.length`
- Values are unique.
- `popped` is a permutation of `pushed`.

## Approach

The push order cannot be changed. So simulate it directly:

1. Push each value from `pushed` into a temporary stack.
2. After every push, check the stack top.
3. While the top equals `popped[popIndex]`, pop it and move `popIndex`.
4. At the end, all values must have been popped in the requested order.

Core mental model:

```text
popIndex -> "Which value does popped expect next?"
stack[top] -> "Which value can I legally pop now?"
```

If they match, pop immediately. If they do not match, continue pushing the next
value from `pushed`.

Embedded-C connection: this is event/order validation. You process incoming
events in a fixed order, keep temporary state, and consume expected outputs only
when the current state allows it.

## Complexity

- Time: `O(n)`
- Space: `O(n)`

## Solution

- [solution.c](solution.c)
