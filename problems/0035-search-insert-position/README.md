# #0035 - Search Insert Position

- Difficulty: Easy
- Solved: 2026-05-20
- LeetCode: https://leetcode.com/problems/search-insert-position/
- Topics: Array, Binary Search

## Question

TR: Sirali dizide hedef varsa indeksini, yoksa eklenecegi pozisyonu bul.

EN: In a sorted array, return the target index or the index where it should be inserted.

## Idea

TR: Lower-bound binary search ile ilk `nums[i] >= target` konumunu bul.

EN: Use lower-bound binary search to find the first position where `nums[i] >= target`.

## Code

- [solution.c](solution.c)
