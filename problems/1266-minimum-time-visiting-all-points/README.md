# #1266 - Minimum Time Visiting All Points

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Math, Geometry
- Hint: Between two points, diagonal movement handles both axes at once.
- Solved date: 2026-05-30
- Source: https://leetcode.com/problems/minimum-time-visiting-all-points/

## Problem Statement

TR: 2D duzlemde noktalar veriliyor. Noktalari verilen sirayla ziyaret etmek
icin gereken minimum sureyi bul. Bir saniyede yatay, dikey veya diagonal bir
adim atilabilir.

EN: Given points on a 2D plane, return the minimum time needed to visit all
points in order. In one second, you may move horizontally, vertically, or
diagonally by one unit.

## Starter Code (C)

```c
int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {

}
```

## Parameters / Return

- `points`: array of `[x, y]` coordinates.
- `pointsSize`: number of points.
- `pointsColSize`: column sizes supplied by LeetCode.
- Returns the minimum total time.

## Examples

```text
Input: points = [[1,1],[3,4],[-1,0]]
Output: 7
Explanation: max(|3-1|, |4-1|) + max(|-1-3|, |0-4|) = 3 + 4.
```

```text
Input: points = [[3,2],[-2,2]]
Output: 5
```

## Constraints

- `1 <= points.length <= 100`
- `points[i].length == 2`
- `-1000 <= points[i][0], points[i][1] <= 1000`

## Approach

For two points, diagonal moves reduce both `x` and `y` distance at the same
time. So the minimum time between two points is:

```text
max(abs(dx), abs(dy))
```

Sum that value for every consecutive pair.

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
