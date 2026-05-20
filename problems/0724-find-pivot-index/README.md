# #0724 - Find Pivot Index

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/find-pivot-index/
- Topics: Array, Prefix Sum

## Question

TR: Solundaki toplam ile sagindaki toplam esit olan ilk indeksi bul.

EN: Find the first index where the left sum equals the right sum.

## Idea

TR: Toplam degeri bilince sag toplam `total - left_sum - nums[i]` olur.

EN: With the total sum known, right sum is `total - left_sum - nums[i]`.

## Code

- [solution.c](solution.c)
