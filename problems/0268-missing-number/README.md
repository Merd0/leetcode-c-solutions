# #0268 - Missing Number

- Difficulty: Easy
- Solved: 2026-05-19
- LeetCode: https://leetcode.com/problems/missing-number/
- Topics: Array, Math, XOR

## Question

TR: `0..n` araliginda eksik olan tek sayiyi bul.

EN: Find the one missing number from the range `0..n`.

## Idea

TR: Indeksleri ve degerleri XOR'la; eslesenler silinir, eksik sayi kalir.

EN: XOR indices and values; matched values cancel and the missing number remains.

## Code

- [solution.c](solution.c)
