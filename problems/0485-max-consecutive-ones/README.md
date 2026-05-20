# #0485 - Max Consecutive Ones

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/max-consecutive-ones/
- Topics: Array, Counting

## Question

TR: Binary dizide arka arkaya gelen en uzun `1` sayisini bul.

EN: Find the longest consecutive run of `1` values in a binary array.

## Idea

TR: Mevcut seri uzunlugunu say, `0` gelince sifirla.

EN: Count the current streak and reset it when a `0` appears.

## Code

- [solution.c](solution.c)
