# #2126 - Destroying Asteroids

## LeetCode Style Info

- Status: Accepted
- Difficulty: Medium
- Topics: Array, Greedy, Sorting
- Hint: Destroy smaller asteroids first so mass grows as safely as possible.
- Solved date: 2026-05-31
- Source: https://leetcode.com/problems/destroying-asteroids/

## Problem Statement

TR: Baslangic kutlesi `mass` olan bir gezegen ve asteroid kutleleri veriliyor.
Gezegen kutlesi asteroid kutlesinden buyuk veya esit ise asteroidi yok eder ve
kutlesine ekler. Tum asteroidleri yok edip edemeyecegini dondur.

EN: Given a planet with initial `mass` and an array of asteroid masses, determine
whether the planet can destroy every asteroid. If the planet's current mass is
at least the asteroid's mass, it destroys the asteroid and gains that mass.

## Starter Code (C)

```c
bool asteroidsDestroyed(int mass, int* asteroids, int asteroidsSize) {

}
```

## Parameters / Return

- `mass`: initial planet mass.
- `asteroids`: array of asteroid masses, modified by sorting.
- `asteroidsSize`: number of asteroids.
- Returns `true` if all asteroids can be destroyed.

## Examples

```text
Input: mass = 10, asteroids = [3,9,19,5,21]
Output: true
Explanation: Sorted order lets the planet grow from smaller asteroids first.
```

```text
Input: mass = 5, asteroids = [4,9,23,4]
Output: false
Explanation: After destroying 4 and 4, mass is 13, but 23 is too large.
```

## Constraints

- `1 <= mass <= 10^5`
- `1 <= asteroids.length <= 10^5`
- `1 <= asteroids[i] <= 10^5`

## Approach

Sort asteroids from smallest to largest. If the planet cannot destroy the
smallest remaining asteroid, it cannot destroy any larger one either. Otherwise,
add the asteroid mass to the planet and continue.

Use `long long` for the growing mass because repeated additions can exceed the
32-bit `int` range.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
