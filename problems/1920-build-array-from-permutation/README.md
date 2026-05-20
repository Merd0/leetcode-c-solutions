# #1920 - Build Array from Permutation

- Difficulty: Easy
- Solved: 2026-05-18
- LeetCode: https://leetcode.com/problems/build-array-from-permutation/
- Topics: Array, Simulation

## Question

TR: Her indeks icin `answer[i] = nums[nums[i]]` olacak yeni diziyi olustur.

EN: Build a new array where `answer[i] = nums[nums[i]]`.

## Idea

TR: Kurali dogrudan uygula; her indeks icin ikinci indekslemeyi yap.

EN: Apply the rule directly and use nested indexing for each position.

## Code

- [solution.c](solution.c)
