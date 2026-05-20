# #1470 - Shuffle the Array

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/shuffle-the-array/
- Topics: Array, Simulation

## Question

TR: `[x1..xn, y1..yn]` dizisini `[x1,y1,x2,y2,...]` formatina cevir.

EN: Convert `[x1..xn, y1..yn]` into `[x1,y1,x2,y2,...]`.

## Idea

TR: Ilk yari ve ikinci yariyi ayni anda okuyup sonucu sirayla doldur.

EN: Read the first and second halves together and fill the result alternately.

## Code

- [solution.c](solution.c)
