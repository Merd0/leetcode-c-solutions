# #0661 - Image Smoother

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Matrix
- Hint: Average only valid in-bounds 3x3 neighbors.
- Solved date: 2026-07-20
- Source: https://leetcode.com/problems/image-smoother/
- Note: Electro-optic image-filter practice

## Problem Statement

TR: Bir image matrix'indeki her pikseli, kendisi ve sinir icindeki 3x3
komsularinin ortalamasiyla degistir. Matrix disina tasan hucreler sayilmaz.

EN: Replace each pixel with the floor average of itself and its valid 3x3
neighbors.

## Starter Code (C)

```c
int** imageSmoother(int** img, int imgSize, int* imgColSize,
                    int* returnSize, int** returnColumnSizes) {

}
```

## Approach

For every center pixel `(i, j)`, scan:

```text
row = i - 1 ... i + 1
col = j - 1 ... j + 1
```

Only include a candidate neighbor if it is inside the image boundaries. This is
a basic 3x3 average filter.

MEOS connection: this is the simplest image smoothing/noise reduction model for
a pixel frame.

## Complexity

- Time: `O(rows * cols * 9)`
- Space: `O(rows * cols)` for the returned image

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
