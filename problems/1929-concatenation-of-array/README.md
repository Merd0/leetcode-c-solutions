# #1929 - Concatenation of Array

- Difficulty: Easy
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/concatenation-of-array/
- Topics: Array, Simulation

## Question

TR: Dizinin kendisini pes pese iki kez iceren yeni bir dizi olustur.

EN: Create a new array that contains the original array twice in sequence.

## Idea

TR: Her elemani hem `i` hem de `i + numsSize` konumuna kopyala.

EN: Copy each value to both `i` and `i + numsSize`.

## Code

- [solution.c](solution.c)
