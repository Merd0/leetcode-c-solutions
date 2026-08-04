# #1974 - Minimum Time to Type Word Using Special Typewriter

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: String, Math, Greedy
- Hint: Compare the direct alphabet distance with the distance around the other side.
- Solved date: 2026-08-04
- Source: https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/
- Note: Minimum movement on a circular alphabet plus one second per character

## Problem Statement

TR: `a` ile `z` harflerinin komsu oldugu dairesel bir daktiloda ibre `a`
harfinden baslar. Verilen kelimeyi yazmak icin gereken minimum sureyi dondur.

EN: A pointer starts at `a` on a circular typewriter where `a` and `z` are
neighbors. Return the minimum time required to type the given word.

## Starter Code (C)

```c
int minTimeToType(char* word) {

}
```

## Example

```text
Input:  word = "abc"
Output: 5
```

Typing each character costs one second, and moving from `a` to `b` and from `b`
to `c` costs one second each.

## Approach

Keep the character at the pointer's current position, initially `a`. For every
target character, calculate its direct alphabet distance:

```c
int distance = abs(word[i] - current);
```

Because the alphabet is circular, the movement in the opposite direction costs:

```c
int circularDistance = 26 - distance;
```

Choose the smaller value, add one second to type the character, and update the
current pointer position. This greedy choice is safe because the pointer must end
at the target character regardless of which direction reaches it; choosing a
longer route cannot improve any later move.

For example, the direct distance from `a` to `z` is `25`, but moving around the
other side costs only `1`.

Embedded-C connection: the same calculation chooses the shortest direction for
a circular actuator, rotary encoder, indexed turret, or motor position represented
within a fixed wraparound range.

## Complexity

- Time: `O(n)`, where `n` is the word length
- Extra space: `O(1)`

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
