# #0735 - Asteroid Collision

## LeetCode Style Info

- Status: Solved
- Difficulty: Medium
- Topics: Array, Stack, Simulation
- Hint: Use the result array as a stack and only collide when the stack top is positive and the current asteroid is negative.
- Solved date: 2026-06-30
- Source: https://leetcode.com/problems/asteroid-collision/
- Note: Medium practice question

## Problem Statement

TR: Asteroidleri temsil eden bir array verilir. Pozitif degerler saga,
negatif degerler sola gider. Iki asteroid sadece soldaki saga, sagdaki sola
gidiyorsa carpisir. Kucuk olan yok olur; esitlerse ikisi de yok olur. Son
durumu dondur.

EN: Given an array of asteroids, positive values move right and negative values
move left. A collision happens only when a right-moving asteroid is before a
left-moving asteroid. The smaller one explodes; equal sizes destroy both.
Return the final state.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {

}
```

## Parameters / Return

- `asteroids`: Input asteroid directions and sizes.
- `asteroidsSize`: Number of asteroids.
- `returnSize`: Must be set to the final number of asteroids.
- Returns: A newly allocated array containing the remaining asteroids.

## Examples

```text
Input:  asteroids = [5,10,-5]
Output: [5,10]

10 and -5 collide. 10 survives.
```

```text
Input:  asteroids = [8,-8]
Output: []

Both have equal size, so both disappear.
```

```text
Input:  asteroids = [10,2,-5]
Output: [10]

2 and -5 collide; -5 survives that collision.
Then 10 and -5 collide; 10 survives.
```

## Constraints

- `2 <= asteroids.length <= 10000`
- `-1000 <= asteroids[i] <= 1000`
- `asteroids[i] != 0`

## Approach

Use the returned `stack` array as an actual stack.

```text
push: stack[++top] = current
pop:  top--
top:  stack[top]
```

A collision is possible only in this shape:

```text
stack top > 0 and current < 0
```

Because the asteroid on the left is moving right and the new asteroid is moving
left. Other combinations are moving away from each other or in the same
direction.

For every current asteroid:

1. Assume it is alive.
2. While it can collide with the stack top, compare sizes.
3. If the stack top is smaller, pop it and keep checking.
4. If both sizes are equal, pop the stack top and mark current as dead.
5. If the stack top is larger, current dies.
6. If current is still alive, push it.

## Complexity

- Time: `O(n)` because each asteroid is pushed once and popped at most once.
- Extra space: `O(n)` for the returned stack array.

## Solution

- [solution.c](solution.c)
