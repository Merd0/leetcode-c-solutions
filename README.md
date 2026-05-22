# LeetCode C Solutions

This repository is a personal archive of LeetCode solutions written in C.

It is meant to show solved problems, keep LeetCode-style TR/EN notes, and make
future revision easier. Official LeetCode problem statements are not copied
verbatim; each problem page should feel close to a LeetCode page while using
short original wording, solved metadata, C starter signature, examples,
constraints, approach notes, and the C solution.

## Structure

```text
problems/
  0001-two-sum/
    README.md
    solution.c
```

Each problem folder uses the original LeetCode number in the folder name and
the page title, for example `#0001 - Two Sum`.

Target problem `README.md` format:

- LeetCode Style Info: status, difficulty, topics, hint, solved date, source link.
- Problem Statement: short TR/EN version of what the question asks.
- Starter Code (C): LeetCode-style C function signature.
- Parameters / Return: what each input and output means.
- Examples: input/output samples with short explanations.
- Constraints: key limits from the problem.
- Approach: the core idea behind the solution.

## Study Roadmap

- First 100 C-focused LeetCode order: [ROADMAP.md](ROADMAP.md)
- Current next unsolved problem in that order: `#0066 - Plus One`

## Solved Problems

Solved dates are based on the LeetCode activity list captured on 2026-05-22.

| # | Problem | Difficulty | Solved | Main idea |
|---|---------|------------|--------|-----------|
| #0001 | [Two Sum](problems/0001-two-sum) | Easy | 2026-05-18 | Array pair scan |
| #0002 | [Add Two Numbers](problems/0002-add-two-numbers) | Medium | 2026-05-18 | Linked list addition with carry |
| #0003 | [Longest Substring Without Repeating Characters](problems/0003-longest-substring-without-repeating-characters) | Medium | 2026-05-18 | Sliding window |
| #0011 | [Container With Most Water](problems/0011-container-with-most-water) | Medium | 2026-05-22 | Two pointer area scan |
| #0012 | [Integer to Roman](problems/0012-integer-to-roman) | Medium | 2026-05-22 | Greedy symbols |
| #0013 | [Roman to Integer](problems/0013-roman-to-integer) | Easy | 2026-05-22 | Subtractive scan |
| #0014 | [Longest Common Prefix](problems/0014-longest-common-prefix) | Easy | 2026-05-22 | Prefix trimming |
| #0015 | [3Sum](problems/0015-3sum) | Medium | 2026-05-22 | Sort and two pointers |
| #0016 | [3Sum Closest](problems/0016-3sum-closest) | Medium | 2026-05-22 | Closest two pointer sum |
| #0026 | [Remove Duplicates from Sorted Array](problems/0026-remove-duplicates-from-sorted-array) | Easy | 2026-05-20 | Two pointers |
| #0027 | [Remove Element](problems/0027-remove-element) | Easy | 2026-05-20 | In-place compaction |
| #0028 | [Find the Index of the First Occurrence in a String](problems/0028-find-the-index-of-the-first-occurrence-in-a-string) | Easy | 2026-05-22 | Brute force substring search |
| #0035 | [Search Insert Position](problems/0035-search-insert-position) | Easy | 2026-05-20 | Binary search |
| #0053 | [Maximum Subarray](problems/0053-maximum-subarray) | Medium | 2026-05-20 | Kadane algorithm |
| #0058 | [Length of Last Word](problems/0058-length-of-last-word) | Easy | 2026-05-21 | Skip trailing spaces |
| #0088 | [Merge Sorted Array](problems/0088-merge-sorted-array) | Easy | 2026-05-20 | Merge from the back |
| #0121 | [Best Time to Buy and Sell Stock](problems/0121-best-time-to-buy-and-sell-stock) | Easy | 2026-05-20 | Track min price |
| #0125 | [Valid Palindrome](problems/0125-valid-palindrome) | Easy | 2026-05-21 | Two pointers with filtering |
| #0136 | [Single Number](problems/0136-single-number) | Easy | 2026-05-19 | XOR cancellation |
| #0167 | [Two Sum II - Input Array Is Sorted](problems/0167-two-sum-ii-input-array-is-sorted) | Medium | 2026-05-22 | Opposite-end two pointers |
| #0171 | [Excel Sheet Column Number](problems/0171-excel-sheet-column-number) | Easy | 2026-05-22 | Base-26 accumulation |
| #0205 | [Isomorphic Strings](problems/0205-isomorphic-strings) | Easy | 2026-05-22 | Bidirectional character map |
| #0217 | [Contains Duplicate](problems/0217-contains-duplicate) | Easy | 2026-05-18 | Sort then scan |
| #0242 | [Valid Anagram](problems/0242-valid-anagram) | Easy | 2026-05-21 | Letter frequency count |
| #0268 | [Missing Number](problems/0268-missing-number) | Easy | 2026-05-19 | XOR cancellation |
| #0283 | [Move Zeroes](problems/0283-move-zeroes) | Easy | 2026-05-19 | Stable compaction |
| #0290 | [Word Pattern](problems/0290-word-pattern) | Easy | 2026-05-22 | Bijective word map |
| #0344 | [Reverse String](problems/0344-reverse-string) | Easy | 2026-05-21 | In-place swaps |
| #0345 | [Reverse Vowels of a String](problems/0345-reverse-vowels-of-a-string) | Easy | 2026-05-22 | Two pointers on vowels |
| #0383 | [Ransom Note](problems/0383-ransom-note) | Easy | 2026-05-21 | Required letter counts |
| #0387 | [First Unique Character in a String](problems/0387-first-unique-character-in-a-string) | Easy | 2026-05-21 | Count then scan |
| #0392 | [Is Subsequence](problems/0392-is-subsequence) | Easy | 2026-05-21 | Ordered scan |
| #0414 | [Third Maximum Number](problems/0414-third-maximum-number) | Easy | 2026-05-20 | Track distinct maximums |
| #0415 | [Add Strings](problems/0415-add-strings) | Easy | 2026-05-22 | Manual digit addition |
| #0448 | [Find All Numbers Disappeared in an Array](problems/0448-find-all-numbers-disappeared-in-an-array) | Easy | 2026-05-20 | Index marking |
| #0485 | [Max Consecutive Ones](problems/0485-max-consecutive-ones) | Easy | 2026-05-20 | Running streak |
| #0520 | [Detect Capital](problems/0520-detect-capital) | Easy | 2026-05-22 | Count uppercase letters |
| #0557 | [Reverse Words in a String III](problems/0557-reverse-words-in-a-string-iii) | Easy | 2026-05-21 | Reverse each word |
| #0561 | [Array Partition](problems/0561-array-partition) | Easy | 2026-05-20 | Sort and pair |
| #0566 | [Reshape the Matrix](problems/0566-reshape-the-matrix) | Easy | 2026-05-21 | Row-major remap |
| #0680 | [Valid Palindrome II](problems/0680-valid-palindrome-ii) | Easy | 2026-05-22 | Skip one mismatch |
| #0709 | [To Lower Case](problems/0709-to-lower-case) | Easy | 2026-05-21 | ASCII conversion |
| #0724 | [Find Pivot Index](problems/0724-find-pivot-index) | Easy | 2026-05-20 | Prefix sums |
| #0771 | [Jewels and Stones](problems/0771-jewels-and-stones) | Easy | 2026-05-21 | Nested character scan |
| #0867 | [Transpose Matrix](problems/0867-transpose-matrix) | Easy | 2026-05-20 | Swap row/column positions |
| #0977 | [Squares of a Sorted Array](problems/0977-squares-of-a-sorted-array) | Easy | 2026-05-22 | Square then sort |
| #1365 | [How Many Numbers Are Smaller Than the Current Number](problems/1365-how-many-numbers-are-smaller-than-the-current-number) | Easy | 2026-05-19 | Brute force counting |
| #1470 | [Shuffle the Array](problems/1470-shuffle-the-array) | Easy | 2026-05-19 | Interleave halves |
| #1480 | [Running Sum of 1d Array](problems/1480-running-sum-of-1d-array) | Easy | 2026-05-18 | Prefix sum |
| #1672 | [Richest Customer Wealth](problems/1672-richest-customer-wealth) | Easy | 2026-05-19 | Row sum maximum |
| #1920 | [Build Array from Permutation](problems/1920-build-array-from-permutation) | Easy | 2026-05-18 | Direct indexing |
| #1929 | [Concatenation of Array](problems/1929-concatenation-of-array) | Easy | 2026-05-18 | Copy twice |

## Add New Solved Problem

1. Create a folder under `problems/` with the LeetCode number and slug.
2. Add a short `README.md` with TR/EN summary, date, topics, and idea.
3. Add `solution.c` with the LeetCode-style function and short comments.
4. Keep explanations short enough for quick revision.
