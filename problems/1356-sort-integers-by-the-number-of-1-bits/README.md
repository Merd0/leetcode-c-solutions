# #1356 - Sort Integers by The Number of 1 Bits

## LeetCode Style Info

- Status: Accepted
- Difficulty: Easy
- Topics: Array, Bit Manipulation, Counting, Sorting
- Hint: Compare numbers by `(set bit count, numeric value)`.
- Solved date: 2026-06-11
- Source: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
- Note: Daily practice question

## Problem Statement

TR: Dizideki sayilari binary gosterimlerindeki `1` bitlerinin sayisina gore
kucukten buyuge sirala. Iki sayinin `1` bit sayisi ayniysa, sayisal olarak
kucuk olan once gelmelidir.

EN: Sort the integers by the number of `1` bits in their binary
representations. If two integers have the same set bit count, place the
numerically smaller integer first.

## Starter Code (C)

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortByBits(int* arr, int arrSize, int* returnSize) {

}
```

## Parameters / Return

- `arr`: Input integer array.
- `arrSize`: Number of elements in the array.
- `returnSize`: Must be set to the length of the returned array.
- Returns a newly allocated array in the requested order.

## Examples

```text
Input: arr = [0,1,2,3,4,5,6,7,8]
Output: [0,1,2,4,8,3,5,6,7]
Explanation:
0 has no set bits.
1, 2, 4, and 8 each have one set bit.
3, 5, and 6 each have two set bits.
7 has three set bits.
```

```text
Input: arr = [1024,512,256,128,64,32,16,8,4,2,1]
Output: [1,2,4,8,16,32,64,128,256,512,1024]
Explanation: Every number has one set bit, so numeric order decides.
```

## Constraints

- `1 <= arr.length <= 500`
- `0 <= arr[i] <= 10^4`

## Approach

Copy the input into a newly allocated result array, then sort it with `qsort`.

The comparator applies two rules:

1. Count each number's set bits by checking its least significant bit and
   shifting right.
2. If the counts differ, the number with fewer set bits comes first.
3. If the counts are equal, compare the original numeric values.

For example:

```text
2 = 0010 -> 1 set bit
4 = 0100 -> 1 set bit
3 = 0011 -> 2 set bits
```

Therefore their order is `[2, 4, 3]`.

## Complexity

- Time: `O(n log n * b)`, where `b` is the number of inspected bits
- Extra space: `O(n)` for the returned array, excluding `qsort` internals

## Solution

- [solution.c](solution.c)

---

<!-- repository-navigation -->
[C solution](solution.c) | [Repository home](../../README.md) | [Problem index](../../docs/PROBLEM_INDEX.md) | [Topic index](../../docs/TOPIC_INDEX.md) | [Practice tracks](../../docs/PRACTICE_TRACKS.md)
